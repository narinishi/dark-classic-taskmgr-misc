/*
 * taskmgr-dark-neo.exe
 * label: CreatePen
 * function: 0x14000c54c
 * site: 0x14000c5b7 sites=0x14000c5b7
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

extern unsigned int g_14002e610;

int sub_14000c54c(st_14000c91c_0 *a0, HDC a1, st_14000c91c_1 *a2, unsigned int a3)
{
    unsigned int v1;  // eax
    unsigned long v2;  // r13
    unsigned int v3;  // ebx
    HGDIOBJ v4;  // r15
    HGDIOBJ v5;  // rax
    unsigned int v6;  // edx
    unsigned long v7;  // r14
    HGDIOBJ v8;  // r12
    unsigned int i;  // edi

    v1 = 100 / a3;
    v2 = (unsigned int)(2000 - v1 * 20) / 100 + 12;
    v3 = sub_14000c91c(a0, a1, a2, v1);
    v4 = CreatePen(PS_JOIN_ROUND, 1, 0x408000);
    v5 = SelectObject(a1, v4);
    v6 = a2->field_c;
    v7 = (unsigned int)v2 + 1;
    v8 = v5;
    if ((int)v7 < a2->field_c - a2->field_4)
    {
        do
        {
            MoveToEx(a1, v3, v6 - v7, NULL);
            LineTo(a1, a2->padding_8, a2->field_c - v7);
            v6 = a2->field_c;
            v7 += v2;
        } while ((int)v7 < a2->field_c - a2->field_4);
    }
    for (i = (unsigned int)(a2->padding_8 - g_14002e610); (int)i > (int)v3; i -= 12)
    {
        MoveToEx(a1, i, a2->field_4, NULL);
        LineTo(a1, i, a2->field_c);
    }
    if (v8)
        SelectObject(a1, v8);
    if (v4)
        DeleteObject(v4);
    return v3 - a2->field_0 - 3;
}

