/*
 * taskmgr-dark-neo.exe
 * label: ShellExecuteExW
 * function: 0x140011b04
 * site: 0x140011c00 sites=0x140011c00
 */

typedef struct SHELLEXECUTEINFOW {
    unsigned int cbSize;
    unsigned int fMask;
    HWND hwnd;
    PWSTR lpVerb;
    PWSTR lpFile;
    PWSTR lpParameters;
    PWSTR lpDirectory;
    int nShow;
    HINSTANCE hInstApp;
    void* lpIDList;
    PWSTR lpClass;
    HKEY hkeyClass;
    unsigned int dwHotKey;
    union {
        HANDLE hIcon;
        HANDLE hMonitor;
    } Anonymous;
    HANDLE hProcess;
} SHELLEXECUTEINFOW;

extern HWND g_14002e5b0;
extern HANDLE g_14002e5c0;

int sub_140011b04(unsigned long a0, unsigned int a1)
{
    unsigned int v5;  // eax
    unsigned long long v6;  // rax
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    WCHAR v0[8];  // [bp-0x2a8]
    SHELLEXECUTEINFOW v1;  // [bp-0x298]
    char v2;  // [bp-0x228]

    memset(&v1, 0, 112);
    v0 = 0;
    if (!GetModuleFileNameW(NULL, &v2, 260))
    {
        v5 = (unsigned long long)GetLastError();
        if ((int)v5 > 0)
            v5 = v5 & 0xffff | 0x80070000;
        if ((int)v5 < 0)
            goto LABEL_140011ccc;
    }
    v1 = (SHELLEXECUTEINFOW)_INSERT(CONCAT(v1, 0), 0, 112);
    v1.fMask = 0x400;
    v6 = L"runas";
    v1.hwnd = g_14002e5b0;
    if (!a1)
        v6 = "o";
    v1.nShow = 1;
    v1.lpVerb = v6;
    v1.lpFile = &v2;
    v1.lpParameters = " ";
    if (g_14002e5c0)
    {
        CloseHandle(g_14002e5c0);
        g_14002e5c0 = 0;
    }
    if (!ShellExecuteExW(&v1))
    {
        v7 = (unsigned long long)GetLastError();
        if ((int)v7 > 0)
            v7 = v7 & 0xffff | 0x80070000;
        if ((int)v7 < 0)
        {
            sub_1400059d8(0);
            if ((unsigned short)v7 == 1260)
            {
                if (FormatMessageW(0x1300, NULL, 1260, 0, v0, 0, NULL))
                {
LABEL_140011c7e:
                    MessageBoxW(g_14002e5b0, v0, &v2, MB_ICONSTOP);
                }
                else
                {
                    v8 = (unsigned long long)GetLastError();
                    if (v8)
                    {
                        if ((int)v8 > 0)
                            v8 = v8 & 0xffff | 0x80070000;
                        if ((int)v8 >= 0)
                            goto LABEL_140011c7e;
                    }
                }
            }
        }
    }
LABEL_140011ccc:
    if (v0)
        LocalFree(v0);
    return v9;
}

