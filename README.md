# Reversing notes — classic Task Manager dark theme

This directory contains local analysis artifacts for the classic Task Manager
dark-theme work: imported-API cross-references, angr pseudocode, and focused
investigations of Task Manager behaviour.

## Layout

| path | contents |
|---|---|
| `README.md` | this file |
| `api_xrefs.md` | imported API → IAT VA → call-site VAs |
| `api_xrefs.json` | machine-readable form of the same xref data |
| `decompiled/` | angr pseudocode and `INDEX.md` |
| `properties/` | shell Properties-dialog investigation |
| `tools/` | local analysis scripts |

## `decompiled/`

Contains 55 `.c` pseudocode files generated from `taskmgr-dark-neo.exe` with
angr 10.0.4.post1, plus `INDEX.md`.

The files fall into three groups:

- API-oriented decompilations named `<API>__<function VA>.c`, covering
  `GetSysColor`, `GetSysColorBrush`, `GetStockObject`, `CreatePen`,
  `SetTextColor`, `SetBkColor`, `SetBkMode`, `DrawTextW`, `SetWindowTheme`,
  `CreateWindowExW`, `DialogBoxParamW`, `GetMenu`, `ShellExecuteExW`,
  `SetWindowLongPtrW`, `CallWindowProcW`, and `GetWindowThreadProcessId`.
- UAC virtualization decompilations named `UAC_*.c`, covering the context-menu,
  confirmation-dialog, callback, formatting, toggle, and error paths.
- Entry and trampoline snippets `orig_ctor__*.c` and `orig_ret__*.c`.

`INDEX.md` maps the API-oriented functions to their call sites. Addresses use
image base `0x140000000`.

## `properties/`

Investigation of Task Manager’s Properties command and the shell
file-properties sheet.

| path | contents |
|---|---|
| `FINDINGS.md` | findings and recommended thread-scoping approach |
| `find_props.py` / `find_props.txt` | window-search helper and output |
| `dis_shellexec_rundll.py` / `.txt` | `ShellExec_RunDLLW` investigation and output |
| `test_props.c` / `test_props.log` | `ShellExecuteExW` timing experiment and log |
| `xref_*.asm` | assembly excerpts around relevant `ShellExecuteExW` call sites |

The main result documented here is that the Properties sheet is hosted by the
shell on a separate worker thread inside the calling process.

## `tools/`

| path | contents |
|---|---|
| `tools/api_xrefs.py` | PE import/delay-import scanner and call-site locator |
| `tools/decompile_batch.py` | angr `CFGFast` and decompiler batch driver |

Generated outputs are checked in at the directory root and under `decompiled/`.
The scripts are analysis utilities, not part of the runtime theme work.

## Notes

- Binary analysed: `taskmgr-dark-neo.exe` (image base `0x140000000`).
- Decompiler output is angr AIL, not Hex-Rays.
- Some decompiled calls show resolved import names; indirect thunks may appear
  as `sub_*`.
