import pefile, struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64, CS_OP_MEM, x86

DLL = r'C:\Windows\System32\shell32.dll'
pe = pefile.PE(DLL)
pe.parse_data_directories(directories=[pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_EXPORT']])
ib = pe.OPTIONAL_HEADER.ImageBase
data = open(DLL, 'rb').read()
secs = [(s.Name.rstrip(b'\0').decode(), s.VirtualAddress, s.Misc_VirtualSize, s.PointerToRawData, s.SizeOfRawData) for s in pe.sections]

def rva2off(rva):
    for n, va, vs, pra, rs in secs:
        if va <= rva < va + rs:
            return pra + (rva - va)
    return None

def va2rva(va): return va - ib

exports = {e.name.decode(): e.address for e in pe.DIRECTORY_ENTRY_EXPORT.symbols if e.name}
for name in ['ShellExec_RunDLLW', 'SHObjectProperties', 'ShellExecuteExW']:
    print(name, hex(exports.get(name, 0)), 'RVA', hex(exports.get(name, 0)))

fn_va = ib + exports['ShellExec_RunDLLW']
off = rva2off(exports['ShellExec_RunDLLW'])
md = Cs(CS_ARCH_X86, CS_MODE_64)
md.detail = True
code = data[off:off+0x600]
insns = list(md.disasm(code, fn_va))
print('--- ShellExec_RunDLLW ---')
for ins in insns[:180]:
    ann = ''
    for op in ins.operands:
        if op.type == CS_OP_MEM and op.mem.base == x86.X86_REG_RIP:
            tgt = ins.address + ins.size + op.mem.disp
            toff = rva2off(tgt - ib)
            if toff is not None:
                raw = data[toff:toff+120]
                # try wide string
                s = ''
                for i in range(0, min(len(raw)-1, 100), 2):
                    ch = raw[i] | (raw[i+1] << 8)
                    if ch == 0: break
                    if 32 <= ch < 127: s += chr(ch)
                    else: s = ''; break
                if s: ann += '  ; WSTR "%s"' % s
                else:
                    a = ''
                    for i in range(min(len(raw), 80)):
                        c = raw[i]
                        if c == 0: break
                        if 32 <= c < 127: a += chr(c)
                        else: a = ''; break
                    if a: ann += '  ; STR "%s"' % a
    print('%016x  %-9s %s%s' % (ins.address, ins.mnemonic, ins.op_str, ann))
