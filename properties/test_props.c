#include <windows.h>
#include <shellapi.h>
#include <stdio.h>

static void logline(const char* s) {
    FILE* f = fopen("test_props.log", "a");
    if (f) { fprintf(f, "%s ticks=%lu\n", s, GetTickCount()); fclose(f); }
}

int main(void) {
    DeleteFileA("test_props.log");
    logline("before");
    SHELLEXECUTEINFOW sei;
    ZeroMemory(&sei, sizeof(sei));
    sei.cbSize = sizeof(sei);
    sei.fMask = SEE_MASK_INVOKEIDLIST | SEE_MASK_UNICODE;
    sei.lpVerb = L"properties";
    sei.lpFile = L"C:\\Windows\\System32\\notepad.exe";
    sei.nShow = SW_SHOWNORMAL;
    BOOL r = ShellExecuteExW(&sei);
    DWORD e = GetLastError();
    char buf[128];
    wsprintfA(buf, "after r=%d err=%lu hwnd=%p", r, e, sei.hwnd);
    logline(buf);
    Sleep(15000);
    logline("exit");
    return 0;
}
