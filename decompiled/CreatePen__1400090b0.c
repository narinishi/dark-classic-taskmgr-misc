/*
 * taskmgr-dark-neo.exe
 * label: CreatePen
 * function: 0x1400090b0
 * site: 0x140009108 sites=0x140009108
 */

typedef struct st_1400090b0_0 {
    char padding_0[24];
    HWND field_18;
    unsigned long long field_20;
    HANDLE field_28;
    HANDLE field_30;
    HANDLE field_38;
    char padding_40[24];
    unsigned long long field_58;
} st_1400090b0_0;

extern unsigned int g_140025b48;
extern int g_14002e228;
extern HINSTANCE g_14002e5a0;
extern HWND g_14002e5b0;

unsigned int sub_1400090b0(st_1400090b0_0 *a0, unsigned long a1)
{
    unsigned int *v1;  // r14
    unsigned int v2;  // edi
    st_1400090b0_0 *iter;  // rsi
    unsigned long long v4;  // rax
    HWND v5;  // rax
    unsigned int v6;  // eax

    if (g_14002e228 > 3 && (unsigned int)(g_14002e228 - 3) >= (unsigned int)*(int *)((char *)&a0[2].field_18 + 4))
        g_14002e228 = 3;
    a0->field_20 = a1;
    v1 = &g_140025b48;
    v2 = 0;
    iter = &a0->field_58;
    do
    {
        v4 = CreatePen(PS_JOIN_ROUND, (v2 == 8) + 1, *v1);
        *(unsigned long long *)&iter->padding_0[0] = v4;
        if (!v4)
            *(HGDIOBJ *)&iter->padding_0[0] = GetStockObject(WHITE_PEN);
    } while ((v2 += 1, iter = &iter->padding_0[8], v1 += 1, v2 < 9));
    a0->field_38 = LoadImageW(g_14002e5a0, 0x67, IMAGE_BITMAP, 0, 0, LR_DEFAULTCOLOR);
    a0->field_30 = LoadImageW(g_14002e5a0, 0x7d, IMAGE_BITMAP, 0, 0, LR_DEFAULTCOLOR);
    a0->field_28 = LoadImageW(g_14002e5a0, 0x68, IMAGE_BITMAP, 0, 0, LR_DEFAULTCOLOR);
    v5 = CreateDialogParamW(g_14002e5a0, 0x6c, g_14002e5b0, sub_1400095a0, a0);
    a0->field_18 = v5;
    if (v5)
        return 0;
    v6 = (unsigned long long)GetLastError();
    if ((int)v6 <= 0)
        return v6;
    return v6 & 0xffff | 0x80070000;
}

