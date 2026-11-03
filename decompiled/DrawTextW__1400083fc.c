/*
 * taskmgr-dark-neo.exe
 * label: DrawTextW
 * function: 0x1400083fc
 * site: 0x140008511 sites=0x140008511
 */

typedef struct RECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;

extern int g_14002c55c;
extern char g_14002e56c;
extern long long g_14002e5d8;
extern long long g_14002e5e0;

void sub_1400083fc(HGDIOBJ *a0, void* a1)
{
    HGDIOBJ *v7;  // r14
    unsigned int v8;  // ebx
    unsigned long long v17;  // rbx
    HGDIOBJ v18;  // r13
    unsigned int v19;  // ecx
    unsigned long long v20;  // rax
    HGDIOBJ v21;  // rax
    unsigned long long iter;  // r14
    unsigned long long v23;  // rbx
    unsigned int v24;  // r8d
    unsigned long long v25;  // rax
    HGDIOBJ v9;  // rax
    HGDIOBJ v10;  // r15
    HDC v11;  // rsi
    unsigned int v12;  // eax
    unsigned int v13;  // edi
    unsigned int v14;  // edx
    unsigned long long v15;  // r15
    unsigned long long node;  // r14
    int v0;  // [bp-0xb8]
    HGDIOBJ v1;  // [bp-0xb0], Other Possible Types: HGDIOBJ *
    unsigned int v2;  // [bp-0xa8]
    HGDIOBJ v3;  // [bp-0xa0]
    RECT v4;  // [bp-0x98]
    Char v5[64];  // [bp-0x88]

    v7 = a0;
    v1 = a0;
    v8 = 4;
    v9 = GetStockObject(BLACK_BRUSH);
    v10 = SelectObject((long long)a1[32], v9);
    v3 = v10;
    Rectangle((long long)a1[32], (int)a1[40], (int)a1[44], (int)a1[48], (int)a1[52]);
    v0 = ((int)a1[48] - (int)a1[40] - 33) / 2;
    SetBkMode((long long)a1[32], 1);
    SetTextColor((long long)a1[32], 0xff00);
    StrFormatByteSizeW(g_14002e5d8 * 0x400, v5, 32);
    v4 = (RECT)(int128_t)a1[40];
    v4.bottom = ((unsigned long long)((long long)a1[48]) >> 32) - 4;
    DrawTextW((long long)a1[32], v5, -0x1, &v4, 41);
    v11 = CreateCompatibleDC((long long)a1[32]);
    if (v11)
    {
        if (*(int *)&g_14002e56c)
            v8 = (short)MulDiv(4, g_14002c55c, 96);
        v12 = sub_140008d9c((long long)a1[32]);
        v13 = (int)a1[52] - v8 * 3 - (int)a1[44] - v12;
        v2 = v13;
        if ((int)v13 > 0)
        {
            v14 = 1431655766 * (int)(g_14002e5d8 * v13 / g_14002e5e0) >> 32;
            v15 = (v14 + (v14 >> 31)) * 3;
            if (v13 != (unsigned int)v15)
            {
                node = 0;
                v17 = v13 - v15;
                v18 = SelectObject(v11, v7[5]);
                if ((int)v17 > 0)
                {
                    do
                    {
                        v19 = 4;
                        if (*(int *)&g_14002e56c)
                            v19 = (short)MulDiv(4, g_14002c55c, 96);
                        BitBlt((long long)a1[32], v0, v19 + node, 33, ((unsigned int)v17 < 75 ? (unsigned int)v17 : 75), v11, 0, 0, SRCCOPY);
                        if ((unsigned int)v17 < 75)
                        {
                            node += v17;
                            v20 = v17 & 0xffffffff;
                        }
                        else
                        {
                            node += 75;
                            v20 = 75;
                        }
                        v17 -= v20;
                    } while ((int)v17 > 0);
                    v13 = v2;
                }
                if (v18)
                    SelectObject(v11, v18);
                v7 = v1;
            }
            if ((unsigned int)v15)
            {
                v21 = SelectObject(v11, v7[7]);
                iter = 0;
                v1 = v21;
                v23 = v15 & 0xffffffff;
                if ((int)v15 > 0)
                {
                    do
                    {
                        v24 = (!*(int *)&g_14002e56c ? 4 : (short)MulDiv(4, g_14002c55c, 96));
                        BitBlt((long long)a1[32], v0, v24 - v15 + iter + v13, 33, (75 < (unsigned int)v23 ? 75 : (unsigned int)v23), v11, 0, 0, SRCCOPY);
                        if ((unsigned int)v23 < 75)
                        {
                            iter += v23;
                            v25 = v23 & 0xffffffff;
                        }
                        else
                        {
                            iter += 75;
                            v25 = 75;
                        }
                        v23 -= v25;
                    } while ((int)v23 > 0);
                    v21 = v1;
                }
                if (v21)
                    SelectObject(v11, v21);
            }
            v10 = v3;
        }
        DeleteDC(v11);
    }
    SelectObject((long long)a1[32], v10);
    return;
}

