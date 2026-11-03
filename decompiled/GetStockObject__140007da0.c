/*
 * taskmgr-dark-neo.exe
 * label: GetStockObject
 * function: 0x140007da0
 * site: 0x140007dd9 sites=0x140007dd9
 */

typedef struct RECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;

extern char g_14002e540;

void sub_140007da0(RECT *a0, void* a1, unsigned long a2)
{
    HBRUSH v4;  // rax
    RECT *v5;  // r12
    unsigned int v6;  // esi
    unsigned int v7;  // ebp
    unsigned int v8;  // eax
    unsigned int v9;  // ebp
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v12;  // edx
    long long v0;  // [bp-0x68]
    char *v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x38]
    unsigned int v3;  // [bp+0x8]

    v3 = 0;
    v2 = 0;
    if (!*(long long *)&a0[4].left)
        return;
    v4 = GetStockObject(BLACK_BRUSH);
    v5 = a0 + 10;
    FillRect(*(long long *)&a0[4].left, v5, v4);
    v6 = (int)a1[48] - (int)a1[40];
    v7 = (int)(274877907 * (v6 - 1)) >> 39;
    v8 = v7 >> 31;
    v9 = (!(v7 + v8) ? 2 : v7 + v8);
    v1 = &v2;
    v0 = 0;
    v10 = sub_140008e38();
    if ((int)v10 < 0)
    {
        return;
    }
    else if (v10 != 1)
    {
        sub_1400080dc();
        v11 = (a0[10].bottom - a0[10].top - 1) / ((((char)v3 & 15) != 0) + (v3 >> 4) & 0xffffffff);
        if (g_14002e540 & 8)
        {
            *(unsigned int *)&v0 = v11;
            sub_140007f5c(a0, 1, v9, v6, v0, v2 + 2036);
        }
        *(unsigned int *)&v0 = v11;
        sub_140007f5c(a0, 0, v9, v6, v0, v2 + 36);
        v12 = (int)a1[40];
        BitBlt((long long)a1[32], v12, (int)a1[44], (int)a1[48] - v12, (int)a1[52] - (int)a1[44], *(long long *)&a0[4].left, a0[10].right - (int)a1[48] - v5->left + v12, 0, SRCCOPY);
        return;
    }
    else
    {
        return;
    }
}

