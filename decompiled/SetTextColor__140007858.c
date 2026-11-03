/*
 * taskmgr-dark-neo.exe
 * label: SetTextColor
 * function: 0x140007858
 * site: 0x1400079fa sites=0x1400079fa
 */

typedef struct RECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;

typedef struct st_140007858_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[8];
    HGDIOBJ field_28;
    HGDIOBJ field_30;
    HGDIOBJ field_38;
} st_140007858_0;

extern int g_14002c55c;
extern char g_14002e540;
extern char g_14002e56c;
extern char g_14002e5e8;
extern char g_14002e600;

void sub_140007858(st_140007858_0 *a0, void* a1)
{
    st_140007858_0 *v9;  // r12
    HGDIOBJ v10;  // rax
    unsigned long long v19;  // rbx
    unsigned int v20;  // r13d
    HDC v21;  // rbp
    unsigned long long iter;  // r14
    HGDIOBJ v23;  // rax
    unsigned int v24;  // ecx
    unsigned long long v25;  // rax
    HGDIOBJ v26;  // rax
    unsigned long long node;  // r14
    unsigned long long v28;  // rbx
    unsigned int v29;  // r8d
    unsigned long long v30;  // rax
    HGDIOBJ v31;  // rax
    unsigned long long iter1;  // r14
    unsigned long long v33;  // rbx
    unsigned int v34;  // r8d
    unsigned long long v35;  // rax
    unsigned int v12;  // ebx
    unsigned int v13;  // eax
    unsigned int v14;  // edi
    unsigned int v15;  // r8d
    unsigned long v16;  // rsi
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    int v0;  // [bp-0x98]
    int v1;  // [bp-0x94]
    HGDIOBJ v2;  // [bp-0x90]
    st_140007858_0 *v3;  // [bp-0x88]
    HGDIOBJ v4;  // [bp-0x80]
    RECT v5;  // [bp-0x78], Other Possible Types: uint128_t
    RECT v6;  // [bp-0x68], Other Possible Types: uint128_t
    Char v7[16];  // [bp-0x58]

    v9 = a0;
    v3 = a0;
    v10 = GetStockObject(BLACK_BRUSH);
    v4 = SelectObject((long long)a1[32], v10);
    Rectangle((long long)a1[32], (int)a1[40], (int)a1[44], (int)a1[48], (int)a1[52]);
    v1 = ((int)a1[48] - (int)a1[40] - 33) / 2;
    v6 = 0;
    GetWindowRect(GetDlgItem(v9->field_18, 1005), &v6);
    v12 = (!*(int *)&g_14002e56c ? 4 : (short)MulDiv(4, g_14002c55c, 96));
    v13 = sub_140008d9c((long long)a1[32]);
    v14 = (int)a1[52] - v12 * 3 - (int)a1[44] - v13;
    if ((int)v14 <= 0)
        return;
    v15 = 1374389535 * (v14 * g_14002e5e8) >> 37;
    if (g_14002e540 & 8)
    {
        v16 = (int)(1374389535 * (v14 * g_14002e600) >> 37);
        v17 = v16 + ((v16 & 0xffffffff) >> 31 & 0xffffffff);
    }
    else
    {
        v17 = 0;
    }
    v0 = v17;
    v18 = 1431655766 * (unsigned int)(v14 - (v15 + (v15 >> 31))) >> 32;
    v19 = (v18 + ((v18 & 0xffffffff) >> 31 & 0xffffffff)) * 3;
    v20 = v14 - v19;
    SetBkMode((long long)a1[32], 1);
    SetTextColor((long long)a1[32], 0xff00);
    sub_140005718(v7, 8, L"%d %%", g_14002e5e8);
    v5 = (int128_t)a1[40];
    v5.bottom = ((unsigned long long)((long long)a1[48]) >> 32) - 4;
    DrawTextW((long long)a1[32], v7, -0x1, &v5, 41);
    v21 = CreateCompatibleDC((long long)a1[32]);
    if (v21)
    {
        if (v14 != v20)
        {
            iter = 0;
            v23 = SelectObject(v21, v9->field_28);
            v2 = v23;
            if ((int)v19 > 0)
            {
                do
                {
                    v24 = 4;
                    if (*(int *)&g_14002e56c)
                        v24 = (short)MulDiv(4, g_14002c55c, 96);
                    BitBlt((long long)a1[32], v1, v24 + iter, 33, ((unsigned int)v19 < 75 ? (unsigned int)v19 : 75), v21, 0, 0, SRCCOPY);
                    if ((unsigned int)v19 < 75)
                    {
                        iter += v19;
                        v25 = v19 & 0xffffffff;
                    }
                    else
                    {
                        iter += 75;
                        v25 = 75;
                    }
                    v19 -= v25;
                } while ((int)v19 > 0);
                v17 = v0;
                v9 = v3;
                v23 = v2;
            }
            if (v23)
                SelectObject(v21, v23);
        }
        if (v20)
        {
            v26 = SelectObject(v21, v9->field_38);
            node = 0;
            v28 = v20 - v17;
            v2 = v26;
            if ((int)v28 > 0)
            {
                do
                {
                    v29 = (!*(int *)&g_14002e56c ? 4 : (short)MulDiv(4, g_14002c55c, 96));
                    BitBlt((long long)a1[32], v1, v29 - v20 + node + v14, 33, (75 < (unsigned int)v28 ? 75 : (unsigned int)v28), v21, 0, 0, SRCCOPY);
                    if ((unsigned int)v28 < 75)
                    {
                        node += v28;
                        v30 = v28 & 0xffffffff;
                    }
                    else
                    {
                        node += 75;
                        v30 = 75;
                    }
                    v28 -= v30;
                } while ((int)v28 > 0);
                v17 = v0;
                v9 = v3;
                v26 = v2;
            }
            if (v26)
                SelectObject(v21, v26);
        }
        if ((unsigned int)v17)
        {
            v31 = SelectObject(v21, v9->field_30);
            iter1 = 0;
            v2 = v31;
            v33 = v17 & 0xffffffff;
            if ((int)v17 > 0)
            {
                do
                {
                    v34 = (!*(int *)&g_14002e56c ? 4 : (short)MulDiv(4, g_14002c55c, 96));
                    BitBlt((long long)a1[32], v1, v34 - v17 + iter1 + v14, 33, ((unsigned int)v33 < 75 ? (unsigned int)v33 : 75), v21, 0, 0, SRCCOPY);
                    if ((unsigned int)v33 < 75)
                    {
                        iter1 += v33;
                        v35 = v33 & 0xffffffff;
                    }
                    else
                    {
                        iter1 += 75;
                        v35 = 75;
                    }
                    v33 -= v35;
                } while ((int)v33 > 0);
                v31 = v2;
            }
            if (v31)
                SelectObject(v21, v31);
        }
        DeleteDC(v21);
    }
    SelectObject((long long)a1[32], v4);
    return;
}

