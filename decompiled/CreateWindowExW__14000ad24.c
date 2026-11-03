/*
 * taskmgr-dark-neo.exe
 * label: CreateWindowExW
 * function: 0x14000ad24
 * site: 0x14000aef5 sites=0x14000aef5
 */

typedef struct st_14000ad24_1 {
    char padding_0[24];
    HWND field_18;
} st_14000ad24_1;

typedef struct st_14000ad24_0 {
    char field_0;
    char padding_1[525];
    unsigned short field_20e;
    unsigned short field_210;
} st_14000ad24_0;

extern WCHAR g_140025b44;
extern int g_140025b70;
extern int g_14002e228;
extern unsigned int g_14002e540;
extern HINSTANCE g_14002e5a0;

void sub_14000ad24(st_14000ad24_1 *a0)
{
    unsigned int v8;  // cc_dep1
    unsigned long long v9;  // r8
    unsigned long long v18;  // r14
    HWND v19;  // rax
    HWND v20;  // rax
    HWND v21;  // rax
    HWND v22;  // rax
    HWND v23;  // rax
    st_14000ad24_0 *iter;  // rcx
    unsigned long long v11;  // r8
    st_14000ad24_0 *v12;  // rax
    unsigned int v14;  // ebx
    HWND v15;  // rax
    int *v16;  // rsi
    unsigned long long i;  // r14
    char *v0;  // [bp-0x498]
    unsigned long long v1;  // [bp-0x490]
    char v2;  // [bp-0x458], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x454]
    unsigned int v4;  // [bp-0x450]
    WCHAR v5[264];  // [bp-0x448]

    v1 = 0;
    v0 = &v2;
    v2 = 0;
    v4 = 0;
    v3 = 0;
    if ((int)sub_140008e38() >= 0)
    {
        if (LoadStringW(g_14002e5a0, v2, v5, 260) <= 0)
        {
            v8 = (unsigned long long)GetLastError();
            if (!v8)
            {
                sub_140009af4(a0);
                return;
            }
            if ((int)v8 > 0)
            {
                if ((int)(v8 & 0xffff | 0x80070000) >= 0)
                    goto LABEL_14000add9;
            }
            else
            {
                if ((int)v8 >= 0)
                    goto LABEL_14000add9;
            }
        }
        else
        {
LABEL_14000add9:
            if (g_14002e228 >= 3)
            {
                v9 = 260;
                iter = v5 + 1;
                do
                {
                    v11 = v9;
                } while (v9 != 0xffffffff80000106 && (v9 = v11, *(short *)(-0x210 + iter) && (*(short *)&iter->field_0 = *(short *)(-0x210 + iter), iter = &iter->padding_1[1], v9 = v11 - 1, v11 != 1)));
                v12 = (char *)iter - 2;
                if (v9)
                    v12 = iter;
                *(unsigned short *)&v12->field_0 = 0;
                if (!v9)
                {
                    sub_140009af4(a0);
                    return;
                }
                if ((int)sub_140005718(v5, 260, v5 + 1, v3) >= 0)
                    goto LABEL_14000ae52;
            }
            else
            {
LABEL_14000ae52:
                SetWindowTextW(GetDlgItem(a0->field_18, 1001), v5);
                v14 = 0;
                if ((unsigned int)(int)a0[6].field_18 > 0)
                {
                    do
                    {
                        v15 = GetDlgItem(a0->field_18, v14 + 5000);
                        if (v15 || (v15 = CreateWindowExW(WS_EX_CLIENTEDGE, L"BUTTON", &g_140025b44, 1207959563, 0, 0, 1, 1, a0->field_18, v14 + 5000, NULL, NULL), v15))
                        {
                            if (v14)
                                ShowWindow(v15, (v14 < v4 ? 5 : 0));
                        }
                    } while ((v14 += 1, v14 < (unsigned int)(int)a0[6].field_18));
                }
                v16 = &g_140025b70;
                i = 44;
                do
                {
                    v18 = i;
                    v19 = GetDlgItem(a0->field_18, *v16);
                    ShowWindow(v19, ~-(0 < ((char)g_14002e540 & 16)) & 5);
                    v16 += 1;
                    i = v18 - 1;
                } while (i);
                v20 = GetDlgItem(a0->field_18, 1006);
                ShowWindow(v20, ~-(0 < ((char)g_14002e540 & 16)) & 5);
                v21 = GetDlgItem(a0->field_18, 1002);
                ShowWindow(v21, ~-(0 < ((char)g_14002e540 & 16)) & 5);
                v22 = GetDlgItem(a0->field_18, 1064);
                ShowWindow(v22, ~-(0 < ((char)g_14002e540 & 16)) & 5);
                v23 = GetDlgItem(a0->field_18, 1005);
                ShowWindow(v23, ~-(0 < ((char)g_14002e540 & 16)) & 5);
            }
        }
    }
    sub_140009af4(a0);
    return;
}

