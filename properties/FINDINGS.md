# Properties dialog: reversing findings and cleanest patch

## What Task Manager actually does

The `Properties` context-menu command builds a `SHELLEXECUTEINFOW` and calls
`ShellExecuteExW` (delay-imported from SHELL32):

- call site: `0x1400169cb` (function starting `0x14001691c`)
- `cbSize = 0x70`
- `lpVerb = L"properties"` (`0x140025da0`)
- `fMask = 0x400C` = `SEE_MASK_INVOKEIDLIST (0x0C) | SEE_MASK_UNICODE (0x4000)`
- no `SEE_MASK_NOASYNC`

So the dialog is the shell file-properties sheet for the process image
(`<exe-name> Properties`), not a Task Manager-owned dialog.

## Key experiment

`test_props.c` calls `ShellExecuteExW(verb="properties")` on notepad.exe and
logs timestamps.

Result:

    before ticks=158247250
    after  ticks=158247281      <- ~31 ms, dialog still open
    window: #32770 'notepad.exe Properties' pid=9448 tid=17344
    test_props pid=9448, threads include tid=17344

The call returns immediately (asynchronous), and the property sheet lives on a
**separate thread inside the caller process**.

Confirmed against the shimmed Task Manager:

    #32770 'firefox.exe Properties'  pid=10544 tid=12108
    #32770 'Windows Task Manager'    pid=10544 tid=5628

Same PID, different thread. The shell hosts the property sheet on a dedicated
worker thread.

(Rundll32's `ShellExec_RunDLLW` is an API-set forwarder, not useful here;
`SHObjectProperties` is exported but still in-process.)

## Cleanest methodology: scope the theme to the UI thread

Instead of suspending hooks globally or subclassing every property-sheet
control, mark the Task Manager UI thread at init and make every theming hook a
pass-through on any other thread.

1. Capture `g_ui_tid = GetCurrentThreadId()` in `dark_init` (constructor runs
   on the main/UI thread that creates Task Manager's windows).
2. At the top of every global hook (`hook_syscolor`, `hook_sysbrush`,
   `hook_GetThemeColor`, `DrawThemeBackground`, `GetStockObject`, `CreatePen`,
   `SetTextColor`, `ExtTextOutW`/`TextOutW`/`DrawTextW`/`DrawTextExW`):
   if `GetCurrentThreadId() != g_ui_tid`, call the real function unchanged.
3. In `on_event` (window creation), skip any HWND whose owning thread is not
   `g_ui_tid` (`GetWindowThreadProcessId`). This prevents `apply_swtheme`,
   `uahmenu_on_top_window`, `titlebar_apply_window`, `graphedge`, `combodark`
   and `listgrid` from touching shell worker windows.

Result: the property sheet is 100% native/light; Task Manager's UI thread
(including Run dialog and menus) stays dark. No global suspension, no per-window
gating, no title/localization heuristics.

## Caveats

- `swtheme_init` calls uxtheme ordinal 135 (`SetPreferredAppMode(2)`), which is
  process-wide. Verify whether it tints the property sheet once hooks are
  thread-scoped. If yes, add `AllowDarkModeForWindow(sheet, FALSE)` for the
  sheet/pages, or drop forced dark preferred mode and rely on per-window themes.
- If a future Windows version shows the file-properties sheet on the UI thread,
  the thread scope will not exclude it; keep a fallback (detect
  `ShellExecuteExW` verb `properties` and mark the resulting sheet thread
  native).
- Non-UI-thread windows generally become native; that is acceptable and
  consistent with shell surfaces being unthemed.
