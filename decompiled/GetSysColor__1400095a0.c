/*
 * taskmgr-dark-neo.exe
 * label: GetSysColor
 * function: 0x1400095a0
 * site: 0x140009974 sites=0x140009974,0x140009996
 */

typedef struct st_1400095a0_0 {
    char padding_0[216];
    unsigned int field_d8;
} st_1400095a0_0;

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

extern char g_140025b38;
extern char g_14002e540;
extern HWND g_14002e5b0;

HGDIOBJ sub_1400095a0(HWND a0, unsigned int a1, unsigned long a2, unsigned long a3)
{
    unsigned int v4;  // ebx
    unsigned long len;  // rdi
    HWND v16;  // rax
    HWND v18;  // rax
    unsigned int v20;  // edx
    unsigned long v21;  // rax
    unsigned int v22;  // eax
    unsigned int v23;  // eax
    unsigned long long v6;  // r15
    unsigned int v24;  // eax
    unsigned int v25;  // eax
    st_1400095a0_0 *v7;  // r14
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    long long v0;  // [bp-0xb8]
    unsigned int v1;  // [bp-0xa8]
    SHELLEXECUTEINFOW v2;  // [bp-0x98]

    v4 = a1;
    len = a2;
    v6 = 0;
    v1 = 0;
    v7 = GetWindowLongPtrW(a0, 0xffffffeb);
    if (sub_140002228(v4, len, a3) == 1)
        return 0x1;
    if (v4 <= 309)
    {
        if (v4 == 309)
        {
            v20 = GetDlgCtrlID(a3);
            v21 = &g_140025b38;
            do
            {
                if (v20 == *(int *)v21)
                    return GetStockObject(BLACK_BRUSH);
            } while ((v6 += 1, v21 += 4, (unsigned int)v6 < 3));
            if (v20 < 5000 || v20 > v7->field_d8 + 5000)
                return GetSysColorBrush((0 < (unsigned int)IsThemeActive() ? 5 : 15));
            return GetStockObject(BLACK_BRUSH);
            return GetSysColorBrush((0 < (unsigned int)IsThemeActive() ? 5 : 15));
        }
        v8 = v4;
        v9 = v8 - 5;
        if (v8 != 5)
        {
            v10 = v9 - 38;
            if (v9 != 38)
            {
                v11 = v10 - 120;
                if (v10 == 120)
                    goto LABEL_140009907;
                if (v11 != 109)
                {
                    if (v11 == 110 && (unsigned short)len == 3506)
                    {
                        memset(&v2, 0, 112);
                        v2.cbSize = 112;
                        v2.lpVerb = L"runas";
                        v2.fMask = 0x600;
                        v2.lpFile = L"%SystemRoot%\\System32\\perfmon.exe";
                        v2.lpParameters = "/";
                        v2.hwnd = g_14002e5b0;
                        v2.nShow = 1;
                        ShellExecuteExW(&v2);
                        *(unsigned int *)&v0 = 0;
                        sub_1400214a0(sub_140013a04() & 0xffffffff, 3, 3506, 0, v0);
                    }
                }
                else
                {
                    SetWindowLongPtrW(a0, 0xffffffeb, a3);
                    SetWindowLongW(a0, 0xfffffff0, 0x2000000 | GetWindowLongW(a0, 0xfffffff0));
                    sub_14002206c();
                    if (v1)
                        SendMessageW(GetDlgItem(a0, 3506), 5644, NULL, 0x1);
                    if ((unsigned int)(GetWindowLongW(a0, 0xffffffec)) >> 22 & 1)
                    {
                        v16 = GetDlgItem(a0, 1004);
                        SetWindowLongW(v16, 0xffffffec, GetWindowLongW(v16, 0xffffffec) & 0xffafffff);
                        v18 = GetDlgItem(a0, 1005);
                        SetWindowLongW(v18, 0xffffffec, GetWindowLongW(v18, 0xffffffec) & 0xffafffff);
                    }
                }
            }
            else if (len >= 5000)
            {
                if (len <= v7->field_d8 + 5000)
                {
                    sub_140007da0(v7, a3, len - 5000 & 0xffffffff);
                    return 0x1;
                }
            }
            else
            {
                if (len == 1004)
                {
                    sub_140007858(v7, a3);
                    return 0x1;
                }
                else if (len == 1005)
                {
                    sub_1400083fc(v7, a3);
                    return 0x1;
                }
                else if (len != 1006)
                {
                    return NULL;
                }
                else
                {
                    sub_140008208(v7, a3);
                    return 0x1;
                }
            }
        }
        else
        {
            sub_140009af4(v7);
        }
    }
    else
    {
        v22 = v4;
        v23 = v22 - 310;
        if (v22 == 310 || !(v24 = v23 - 2, v23 != 2))
        {
            SetBkMode(len, 1);
            SetBkColor(len, GetSysColor((0 < (unsigned int)IsThemeActive() ? 5 : 15)));
            SetTextColor(len, GetSysColor(COLOR_WINDOWTEXT));
            return GetSysColorBrush((0 < (unsigned int)IsThemeActive() ? 5 : 15));
        }
        v25 = v24 - 201;
        if (v24 != 201 && v25 != 1)
        {
            if (v25 == 2)
            {
LABEL_140009907:
                goto LABEL_140009931;
            }
        }
        else
        {
            if (g_14002e540 & 16)
            {
                len = 2;
                v4 = -(0 < v4 - 0x202) + 162;
LABEL_140009931:
                SendMessageW(g_14002e5b0, v4, len, a3);
            }
        }
    }
    return NULL;
}

