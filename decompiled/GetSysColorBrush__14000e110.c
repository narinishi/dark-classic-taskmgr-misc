/*
 * taskmgr-dark-neo.exe
 * label: GetSysColorBrush
 * function: 0x14000e110
 * site: 0x14000e428 sites=0x14000e428
 */

typedef struct st_14000e110_0 {
    char padding_0[128];
    unsigned int field_80;
    char padding_84[36];
    unsigned int field_a8;
    char padding_ac[12];
    unsigned long long field_b8;
} st_14000e110_0;

extern char g_14002e490;
extern char g_14002e540;
extern LRESULT g_14002e5b0;
extern Char g_14002e618;

HBRUSH sub_14000e110(HWND a0, unsigned int a1, unsigned long a2, unsigned long a3)
{
    unsigned long v1;  // rbp
    st_14000e110_0 *v2;  // rdi
    unsigned int v11;  // eax
    LRESULT v4;  // rbx
    unsigned long len;  // r8
    unsigned int v6;  // edx
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    unsigned int v10;  // eax

    v1 = a3;
    v2 = GetWindowLongPtrW(a0, 0xffffffeb);
    if (sub_140002228(a1, a2, v1) == 1)
        return 0x1;
    if (a1 > 273)
    {
        v7 = a1 - 277;
        if (a1 != 277)
        {
            v8 = v7 - 32;
            if (v7 == 32 || !(v9 = v8 - 1, v8 != 1 && (v10 = v9 - 2, v9 != 2)))
            {
                SetBkMode(a2, 1);
                SetBkColor(a2, GetSysColor((0 < (unsigned int)IsThemeActive() ? 5 : 15)));
                SetTextColor(a2, GetSysColor(COLOR_WINDOWTEXT));
                return GetSysColorBrush((0 < (unsigned int)IsThemeActive() ? 5 : 15));
            }
            v11 = v10 - 201;
            if (v10 != 201 && v11 != 1)
            {
                if (v11 == 9)
                {
                    goto LABEL_14000e436;
                    goto LABEL_14000e436;
                }
            }
            else
            {
                SetFocus(v2->field_b8);
                if (g_14002e540 & 16)
                {
                    v4 = g_14002e5b0;
                    len = 2;
                    v6 = -(0 < a1 - 0x202) + 162;
LABEL_14000e39a:
                    SendMessageW(v4, v6, len, v1);
                }
            }
        }
        else
        {
LABEL_14000e436:
            sub_14000e83c(v2);
        }
    }
    else if (a1 != 273)
    {
        if (a1 != 2)
        {
            if (a1 == 5 || a1 == 24)
            {
                sub_14000ee08(v2);
                return 0x1;
            }
            else if (a1 == 26)
            {
                GetLocaleInfoW(0x400, 14, &g_14002e618, 4);
            }
            else if (a1 != 43)
            {
                if (a1 == 78)
                {
                    sub_14000d4c4(v2, v1);
                }
                else if (a1 == 272)
                {
                    SetWindowLongPtrW(a0, 0xffffffeb, v1);
                    SetWindowLongW(a0, 0xfffffff0, 0x2000000 | GetWindowLongW(a0, 0xfffffff0));
                    return 0x1;
                }
            }
            else
            {
                if (a2 >= 2500 && a2 <= v2->field_a8 + 2500)
                {
                    sub_14000c2fc(v2, v1, a2 - 2500 & 0xffffffff);
                    return 0x1;
                }
            }
        }
        else
        {
            if (v2)
            {
                v4 = SendMessageW(GetDlgItem(a0, 2600), 4127, NULL, NULL);
                memset(&g_14002e490, 0xff, 108);
                len = (unsigned int)SendMessageW(v4, 0x1200, NULL, NULL);
                v1 = &g_14002e490;
                v6 = 4625;
                goto LABEL_14000e39a;
            }
        }
    }
    else
    {
        if ((unsigned short)a2 == 2406)
            v2->field_80 = 1;
    }
    return NULL;
}

