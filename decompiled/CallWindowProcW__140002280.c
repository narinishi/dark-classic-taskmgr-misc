/*
 * taskmgr-dark-neo.exe
 * label: CallWindowProcW
 * function: 0x140002280
 * site: 0x140002389 sites=0x140002389
 */

typedef struct RECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;

extern void* g_14002ce48;

long long sub_140002280(HWND a0, unsigned int a1, void* a2, LPARAM a3)
{
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    unsigned long v6;  // rax
    unsigned long v8;  // rax
    unsigned long v10;  // rax
    RECT v0;  // [bp-0x48], Other Possible Types: uint128_t

    v2 = a1 - 1;
    if (a1 != 1)
    {
        v3 = v2 - 19;
        if (v2 == 19)
        {
            v0 = 0;
            GetClientRect(a0, &v0);
            FillRect(a2, &v0, GetSysColorBrush((0 < (unsigned int)IsThemeActive() ? 5 : 15)));
            return v8;
        }
        else if (v3 == 289 || v3 - 289 == 1 || v3 - 289 == 3)
        {
            GetSysColorBrush((0 < (unsigned int)IsThemeActive() ? 5 : 15));
            return v6;
        }
    }
    else
    {
        SetWindowLongW(a0, 0xfffffff0, 0x4000000 | GetWindowLongW(a0, 0xfffffff0));
    }
    CallWindowProcW(g_14002ce48, a0, a1, a2, a3);
    return v10;
}

