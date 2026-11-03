/*
 * taskmgr-dark-neo.exe
 * label: DrawTextW
 * function: 0x14000c91c
 * site: 0x14000ca68 sites=0x14000ca68,0x14000cb3a,0x14000cc1e
 */

typedef struct st_14000c91c_0 {
    char padding_0[96];
    HGDIOBJ field_60;
    char padding_68[32];
    HGDIOBJ field_88;
    int field_90;
    unsigned int field_94;
} st_14000c91c_0;

typedef struct st_14000c91c_1 {
    unsigned int field_0;
    int field_4;
    char padding_8[4];
    int field_c;
} st_14000c91c_1;

typedef struct RECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;

typedef struct st_14000c91c_2 {
    char field_0;
    char padding_1[15];
    unsigned short field_10;
} st_14000c91c_2;

typedef struct st_14000c91c_4 {
    char field_0;
    char padding_1[13];
    unsigned short field_e;
    unsigned short field_10;
} st_14000c91c_4;

extern long long g_14002d420;
extern unsigned int g_14002e258;

int sub_14000c91c(st_14000c91c_0 *a0, HDC a1, st_14000c91c_1 *a2, unsigned int a3)
{
    HGDIOBJ v3;  // r12
    unsigned int v4;  // r14d
    unsigned int v13;  // edx
    st_14000c91c_2 *v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rdx
    unsigned long long v17;  // r8
    st_14000c91c_4 *iter;  // rcx
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rdx
    st_14000c91c_4 *v21;  // rax
    st_14000c91c_2 *v22;  // rax
    unsigned int v5;  // eax
    unsigned long long v23;  // rcx
    unsigned long long v24;  // r8
    HGDIOBJ v25;  // rdi
    unsigned int v26;  // eax
    unsigned int v28;  // eax
    unsigned long v6;  // rcx
    unsigned long long v7;  // rdi
    st_14000c91c_2 *v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // r8
    unsigned long v12;  // rcx
    char v0;  // [bp-0x14002d4c8]
    RECT v1;  // [bp-0x138], Other Possible Types: uint176_t

    v3 = NULL;
    if (!g_14002e258)
        return v28;
    if (a0->field_88)
        v3 = SelectObject(a1, a0->field_88);
    SetBkMode(a1, 1);
    SetTextColor(a1, 0xffff);
    v4 = a2->field_0 + a0->field_94;
    *(int *)((char *)&v1 + 4) = a2->field_4;
    *(int *)((char *)&v1 + 12) = a2->field_4 - a0->field_90;
    v5 = a3 * 10000000;
    *(unsigned int *)&v1 = a2->field_0;
    v6 = v4 - 3;
    v1.right = v6;
    sub_14000ccc8(v6, v5, &v1 + 1, 100);
    sub_14000f304(&v1 + 1, 100, " ");
    sub_14000f304(&v1 + 1, 100, &g_14002d420);
    v7 = 0x7fffffff;
    v8 = &v1 + 1;
    v9 = 0x7fffffff;
    do
    {
        v10 = v9;
    } while (*(short *)&v8->field_0 && (v8 = &v8->padding_1[1], v9 = v10 - 1, v10 != 1));
    v11 = -(0 < v9) & 0x7fffffff - v9;
    if (v9 && v11 <= 0xffffffff)
        DrawTextW(a1, &v1 + 1, v11, &v1, DT_RIGHT);
    v12 = (a2->field_c - a2->field_4) / 2;
    v13 = a2->field_4 + (unsigned int)v12 + a0->field_90 / 2;
    *(unsigned int *)((char *)&v1 + 4) = v13;
    v1.bottom = v13 - a0->field_90;
    sub_14000ccc8(v12, v5 >> 1, &v1 + 1, 100);
    sub_14000f304(&v1 + 1, 100, " ");
    sub_14000f304(&v1 + 1, 100, &g_14002d420);
    v14 = &v1 + 1;
    v15 = v7;
    do
    {
        v16 = v15;
    } while (*(short *)&v14->field_0 && (v14 = &v14->padding_1[1], v15 = v16 - 1, v16 != 1));
    v17 = -(0 < v15) & 0x7fffffff - v15;
    if (v15 && v17 <= 0xffffffff)
        DrawTextW(a1, &v1 + 1, v17, &v1, DT_RIGHT);
    *(int *)((char *)&v1 + 12) = a2->field_c;
    v1.top = a0->field_90 + a2->field_c;
    iter = &v1 + 1;
    v19 = 100;
    do
    {
        v20 = v19;
    } while (v19 != 0xffffffff80000066 && (v19 = v20, *(short *)(&v0 + iter) && (*(short *)&iter->field_0 = *(short *)(&v0 + iter), iter = &iter->padding_1[1], v19 = v20 - 1, v20 != 1)));
    v21 = (char *)iter - 2;
    if (v19)
        v21 = iter;
    *(unsigned short *)&v21->field_0 = 0;
    sub_14000f304();
    sub_14000f304(&v1 + 1, 100, &g_14002d420);
    v22 = &v1 + 1;
    do
    {
        v23 = v7;
    } while (*(short *)&v22->field_0 && (v22 = &v22->padding_1[1], v7 = v23 - 1, v23 != 1));
    v24 = -(0 < v7) & 0x7fffffff - v7;
    if (v7 && v24 <= 0xffffffff)
        DrawTextW(a1, &v1 + 1, v24, &v1, DT_RIGHT);
    if (v3)
        SelectObject(a1, v3);
    v25 = SelectObject(a1, a0->field_60);
    MoveToEx(a1, v4, a2->field_4, NULL);
    LineTo(a1, v4, a2->field_c);
    if (!v25)
        return v26;
    SelectObject(a1, v25);
    return v26;
}

