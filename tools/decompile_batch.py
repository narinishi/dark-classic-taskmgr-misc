import angr, json, os, re, sys, time, logging
logging.getLogger('angr').setLevel('ERROR')
logging.getLogger('cle').setLevel('ERROR')

ROOT = r'C:\Users\Administrator\Documents\pmn\tooling\classictm\_reversing\uhooks4\reversing'
BIN = r'C:\Users\Administrator\Documents\pmn\tooling\classictm\taskmgr-dark-neo.exe'
DEC = os.path.join(ROOT, 'decompiled')
os.makedirs(DEC, exist_ok=True)

API = ['SetTextColor', 'SetBkColor', 'SetBkMode', 'ExtTextOutW', 'TextOutW',
       'DrawTextW', 'DrawTextExW', 'GetSysColor', 'GetSysColorBrush',
       'GetStockObject', 'CreatePen', 'SetWindowTheme', 'CreateWindowExW',
       'DialogBoxParamW', 'GetMenu', 'ShellExecuteExW', 'SetWindowLongPtrW',
       'CallWindowProcW', 'GetWindowThreadProcessId']
MAXFUNC = 3

xf = json.load(open(os.path.join(ROOT, 'api_xrefs.json')))
print('loading project...')
p = angr.Project(BIN, auto_load_libs=False)
print('cfg...')
cfg = p.analyses.CFGFast(normalize=True, data_references=True)
print('cfg done, functions', len(cfg.functions))

def fn_of(addr):
    try:
        f = cfg.kb.functions.floor_func(addr)
        return f
    except Exception:
        return None

def decompile(label, addr, extra=''):
    f = fn_of(addr)
    if not f:
        return None
    out = os.path.join(DEC, '%s__%x.c' % (label, f.addr))
    if os.path.exists(out):
        return out
    try:
        d = p.analyses.Decompiler(f, cfg=cfg)
    except Exception as e:
        print('decompile fail', label, hex(addr), e)
        return None
    if not d.codegen:
        print('no codegen', label, hex(addr)); return None
    text = d.codegen.text
    hdr = '/*\n * taskmgr-dark-neo.exe\n * label: %s\n * function: %#x\n * site: %#x%s\n */\n\n' % (label, f.addr, addr, extra)
    open(out, 'w', encoding='utf-8', newline='\n').write(hdr + text + '\n')
    print('wrote', os.path.basename(out), 'lines', text.count('\n'))
    return out

index = ['# Decompiled Task Manager functions', '',
         'Generated with angr %s from `taskmgr-dark-neo.exe`.' % angr.__version__, '']
for api in API:
    entries = xf.get(api, [])
    funcs = {}
    for e in entries:
        for s in e['sites']:
            f = fn_of(s)
            if f:
                funcs.setdefault(f.addr, []).append(s)
    for i, (fa, sites) in enumerate(sorted(funcs.items())):
        if i >= MAXFUNC:
            break
        out = decompile(api, sites[0], ' sites=' + ','.join('%#x' % s for s in sites))
        if out:
            index.append('- `%s` function `%#x`: `%s` (sites: %s)' % (
                api, fa, os.path.basename(out), ', '.join('%#x' % s for s in sites)))

# entry point and original ctor/ret from build.py
pe = p.loader.main_object
ep = p.entry
decompile('entry', ep)
decompile('orig_ctor', 0x140001984)
decompile('orig_ret', 0x1400011c0)

open(os.path.join(DEC, 'INDEX.md'), 'w', encoding='utf-8', newline='\n').write('\n'.join(index) + '\n')
print('done')
