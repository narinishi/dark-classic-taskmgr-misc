/*
 * taskmgr-dark-neo.exe
 * label: SetWindowTheme
 * function: 0x14000d5c0
 * site: 0x14000d6f3 sites=0x14000d6f3
 */

typedef struct st_14000d5c0_0 {
    char padding_0[48];
    int *field_30;
    unsigned long long field_38;
    char padding_40[24];
    unsigned long long field_58;
    char padding_60[88];
    HWND field_b8;
    HWND field_c0;
    HWND field_c8;
} st_14000d5c0_0;

extern unsigned int g_140025c60;
extern HINSTANCE g_14002e5a0;
extern HWND g_14002e5b0;

unsigned int sub_14000d5c0(st_14000d5c0_0 *a0, unsigned long a1)
{
    unsigned int *v1;  // rsi
    st_14000d5c0_0 *iter;  // rdi
    unsigned long long v3;  // rbp
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rax
    HWND v6;  // rax
    unsigned int v7;  // eax
    HWND v8;  // rax
    HWND v9;  // rax
    HWND v10;  // rax

    v1 = &g_140025c60;
    iter = &a0->field_58;
    v3 = 3;
    do
    {
        v4 = v3;
        v5 = CreatePen(PS_JOIN_ROUND, 1, *v1);
        *(unsigned long long *)&iter->padding_0[0] = v5;
        if (!v5)
            *(HGDIOBJ *)&iter->padding_0[0] = GetStockObject(WHITE_PEN);
    } while ((iter = &iter->padding_0[8], v1 += 1, v3 = v4 - 1, v4 != 1));
    a0->field_38 = a1;
    v6 = CreateDialogParamW(g_14002e5a0, (unsigned int)v3 + 109, g_14002e5b0, sub_14000e110, a0);
    a0->field_30 = v6;
    if (!v6)
    {
        v7 = (unsigned long long)GetLastError();
        if ((int)v7 <= 0)
            return v7;
        return v7 & 0xffff | 0x80070000;
    }
    else
    {
        v8 = GetDlgItem(v6, 2603);
        a0->field_c8 = v8;
        if (!v8)
            return 0x80004005;
        v9 = GetDlgItem(a0->field_30, 2606);
        a0->field_b8 = v9;
        if (v9)
        {
            v10 = GetDlgItem(a0->field_30, 2600);
            a0->field_c0 = v10;
            if (v10)
            {
                SetWindowTheme(v10, L"Explorer", NULL);
                sub_14000e970(a0);
                sub_14000e6d8();
                return 0;
            }
        }
        return 0x80004005;
    }
}

