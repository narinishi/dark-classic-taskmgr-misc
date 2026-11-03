import pefile, sys, struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64, CS_OP_MEM, CS_OP_IMM, x86

PATH = r'C:\Users\Administrator\Documents\pmn\tooling\classictm\taskmgr-dark-neo.exe'
pe = pefile.PE(PATH)
ib = pe.OPTIONAL_HEADER.ImageBase
data = open(PATH, 'rb').read()
secs = [(s.Name.rstrip(b'\0').decode(), s.VirtualAddress, s.Misc_VirtualSize,
         s.PointerToRawData, s.SizeOfRawData) for s in pe.sections]

def off2va(off):
    for n, va, vs, pra, rs in secs:
        if pra <= off < pra + rs:
            return ib + va + (off - pra)
    return None

def va2off(va):
    rva = va - ib
    for n, sva, vs, pra, rs in secs:
        if sva <= rva < sva + rs:
            return pra + (rva - sva)
    return None

print('image base', hex(ib))
print('sections', [(n, hex(ib+va), hex(vs), hex(pra), hex(rs)) for n, va, vs, pra, rs in secs])

# find utf-16 'properties'
needle = 'properties'.encode('utf-16le')
hits = []
i = 0
while True:
    i = data.find(needle, i)
    if i < 0:
        break
    hits.append(i)
    i += 2
print('utf16 properties file offsets', [hex(h) for h in hits], 'VAs', [hex(off2va(h)) for h in hits if off2va(h)])

# find ShellExecuteExW delay import slot
print('\nDELAY IMPORTS:')
slots = {}
if hasattr(pe, 'DIRECTORY_ENTRY_DELAY_IMPORT'):
    for e in pe.DIRECTORY_ENTRY_DELAY_IMPORT:
        for f in e.imports:
            if f.name and b'ShellExecuteEx' in f.name:
                slots[f.name.decode()] = f.address
                print(' ', e.dll.decode(), f.name.decode(), 'IAT RVA', hex(f.address), 'VA', hex(ib + f.address))
        if e.dll and b'shell32' in e.dll.lower():
            print(' module', e.dll.decode(), 'hmod', hex(e.struct.phmod), 'IAT', hex(e.struct.pIAT), 'INT', hex(e.struct.pINT))
else:
    print(' no delay imports')

md = Cs(CS_ARCH_X86, CS_MODE_64)
md.detail = True
text = [(n, va, vs, pra, rs) for n, va, vs, pra, rs in secs if n == '.text'][0]
_, tva, tvs, tpra, trs = text
code = data[tpra:tpra+trs]
base_va = ib + tva
insns = list(md.disasm(code, base_va))

def near(target_va):
    for idx, ins in enumerate(insns):
        if ins.address <= target_va < ins.address + ins.size:
            return idx
    return None

# xrefs to string VAs + delay slots (rip-relative)
targets = {}
for h in hits:
    v = off2va(h)
    if v: targets[v] = 'string properties'
for name, va in slots.items():
    targets[va] = 'IAT ' + name

print('\nXREFS (rip-relative) to string/IAT:')
for idx, ins in enumerate(insns):
    for op in ins.operands:
        if op.type == CS_OP_MEM and op.mem.base == x86.X86_REG_RIP:
            tgt = ins.address + ins.size + op.mem.disp
            if tgt in targets:
                print(' ', targets[tgt], 'at', hex(ins.address), ins.mnemonic, ins.op_str)

# xrefs to 40066 immediate
print('\nImmediate 40066 (0x9ca2) occurrences in .text:')
imm_hits = [idx for idx, ins in enumerate(insns) if any(op.type == CS_OP_IMM and op.imm == 40066 for op in ins.operands)]
for idx in imm_hits:
    print(' ', hex(insns[idx].address), insns[idx].mnemonic, insns[idx].op_str)

def dump_window(center_va, before=30, after=45, fname=None):
    idx = near(center_va)
    if idx is None:
        print('no insn at', hex(center_va)); return
    lo = max(0, idx-before); hi = min(len(insns), idx+after)
    lines = []
    for ins in insns[lo:hi]:
        mark = '>>' if ins.address == center_va else '  '
        lines.append('%s %016x  %-10s %s' % (mark, ins.address, ins.mnemonic, ins.op_str))
    txt = '\n'.join(lines)
    print('\n--- around %x ---' % center_va)
    print(txt)
    if fname:
        open(fname, 'w').write(txt + '\n')

# dump around string xrefs and immediate hits
import os
OUT = r'C:\Users\Administrator\Documents\pmn\tooling\classictm\_reversing\uhooks4\reversing\properties'
for idx, ins in enumerate(insns):
    for op in ins.operands:
        if op.type == CS_OP_MEM and op.mem.base == x86.X86_REG_RIP:
            tgt = ins.address + ins.size + op.mem.disp
            if tgt in targets:
                dump_window(ins.address, 60, 90, os.path.join(OUT, 'xref_%x.asm' % ins.address))
for i, idx in enumerate(imm_hits):
    dump_window(insns[idx].address, 40, 80, os.path.join(OUT, 'imm40066_%x.asm' % insns[idx].address))
