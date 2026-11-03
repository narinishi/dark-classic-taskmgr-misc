/* UAC_error_dialog @ 0x140002414 (site 0x140002414) */

extern HINSTANCE g_14002e5a0;

void sub_140002414(HWND a0, unsigned int a1, unsigned int a2)
{
    WCHAR v0[4];  // [bp-0x668]
    char *v1;  // [bp-0x660]
    WCHAR v2[264];  // [bp-0x658]
    WCHAR v3[264];  // [bp-0x448]
    WCHAR v4[264];  // [bp-0x238]

    v0 = 0;
    if (!LoadStringW(g_14002e5a0, a1, v4, 260))
    {
        return;
    }
    else if (!LoadStringW(g_14002e5a0, 10016, v3, 260))
    {
        return;
    }
    else if ((a2 == 87 ? (int)LoadStringW(g_14002e5a0, 10020, v2, 260) : (unsigned int)FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM, NULL, a2, 0x400, v2, 260, NULL)))
    {
        v1 = v2;
        if (!FormatMessageW(0x2500, v3, 0, 0, v0, 0, &v1))
            return;
        MessageBoxW(a0, v0, v4, MB_ICONSTOP);
        LocalFree(v0);
        return;
    }
    else
    {
        return;
    }
}

