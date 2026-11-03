import pefile, json, sys
from capstone import Cs, CS_ARCH_X86, CS_MODE_64, CS_OP_MEM, x86

PATH = r'C:\Users\Administrator\Documents\pmn\tooling\classictm\taskmgr-dark-neo.exe'
OUT = r'C:\Users\Administrator\Documents\pmn\tooling\classictm\_reversing\uhooks4\reversing\api_xrefs.md'

API = [
    'GetSysColor', 'GetSysColorBrush', 'GetStockObject', 'CreatePen',
    'CreateSolidBrush', 'SetTextColor', 'SetBkColor', 'SetBkMode',
    'ExtTextOutW', 'TextOutW', 'DrawTextW', 'DrawTextExW',
    'SetWindowTheme', 'GetThemeColor', 'DrawThemeBackground',
    'DrawThemeText', 'DrawThemeTextEx', 'OpenThemeData', 'CloseThemeData',
    'DwmSetWindowAttribute', 'GetMenuBarInfo', 'GetMenuStringW', 'GetMenu',
    'FillRect', 'FrameRect', 'CreateWindowExW', 'ShellExecuteExW',
    'GetWindowThreadProcessId', 'SetWindowLongPtrW', 'CallWindowProcW',
    'RegisterClassExW', 'CreateDialogIndirectParamW', 'DialogBoxParamW',
]

pe = pefile.PE(PATH)
ib = pe.OPTIONAL_HEADER.ImageBase
data = open(PATH, 'rb').read()

def sec_of(va):
    rva = va - ib
    for s in pe.sections:
        if s.VirtualAddress <= rva < s.VirtualAddress + s.SizeOfRawData:
            return s
    return None

def off_of(va):
    s = sec_of(va)
    if not s: return None
    return s.PointerToRawData + (va - ib - s.VirtualAddress)

imports = {}   # name -> (slot VA, dll)
pe.parse_data_directories(directories=[
    pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_IMPORT'],
    pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT']])
for attr in ('DIRECTORY_ENTRY_IMPORT', 'DIRECTORY_ENTRY_DELAY_IMPORT'):
    if not hasattr(pe, attr): continue
    for e in getattr(pe, attr):
        dll = e.dll.decode() if e.dll else '?'
        for f in e.imports:
            if not f.name: continue
            n = f.name.decode()
            if n in API:
                # normal imports: f.address is RVA; delay imports: VA
                va = f.address
                imports.setdefault(n, []).append((va, dll, attr))

text = pe.sections[0]
code = data[text.PointerToRawData:text.PointerToRawData + text.SizeOfRawData]
tv = ib + text.VirtualAddress
md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail = True
insns = list(md.disasm(code, tv))

slots = {}
for name, entries in imports.items():
    for va, dll, attr in entries:
        slots[va] = (name, dll, attr)

lines = ['# Task Manager API xrefs', '',
         'Binary: `taskmgr-dark-neo.exe` (image base `%#x`)' % ib, '',
         '| API | DLL | import kind | IAT VA | call-site VAs |', '|---|---|---|---|---|']

results = {}
for name in API:
    entries = imports.get(name, [])
    if not entries:
        continue
    for va, dll, attr in entries:
        sites = []
        for ins in insns:
            for op in ins.operands:
                if op.type == CS_OP_MEM and op.mem.base == x86.X86_REG_RIP:
                    tgt = ins.address + ins.size + op.mem.disp
                    if tgt == va:
                        sites.append(ins.address)
        results[name] = results.get(name, []) + [{'slot': va, 'dll': dll, 'kind': attr, 'sites': sites}]
        lines.append('| %s | %s | %s | %#x | %s |' % (
            name, dll, attr.replace('DIRECTORY_ENTRY_', '').lower(), va,
            ', '.join('%#x' % s for s in sites[:12]) + (' ...' if len(sites) > 12 else '')))

open(OUT, 'w', encoding='utf-8', newline='\n').write('\n'.join(lines) + '\n')
open(r'C:\Users\Administrator\Documents\pmn\tooling\classictm\_reversing\uhooks4\reversing\api_xrefs.json', 'w').write(json.dumps(results, indent=2))
print('wrote', OUT)
for name in API:
    if name in results:
        for r in results[name]:
            print('%-24s %-10s %#x sites=%d' % (name, r['kind'].split('_')[-1], r['slot'], len(r['sites'])))
