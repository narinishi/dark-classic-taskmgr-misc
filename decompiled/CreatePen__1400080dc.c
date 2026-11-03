/*
 * taskmgr-dark-neo.exe
 * label: CreatePen
 * function: 0x1400080dc
 * site: 0x14000810e sites=0x14000810e
 */

typedef struct st_1400080dc_0 {
    char padding_0[4];
    unsigned int field_4;
    int field_8;
    int field_c;
} st_1400080dc_0;

extern unsigned int g_14002e5ec;

int sub_1400080dc(unsigned long a0, HDC a1, st_1400080dc_0 *a2, unsigned int a3)
{
    int v1;  // ebp
    HGDIOBJ v2;  // rax
    HGDIOBJ v3;  // rax
    unsigned int i;  // ebx
    unsigned int v5;  // edx
    HGDIOBJ v6;  // r14
    int j;  // ebx

    v1 = a2->field_8 - a3;
    v2 = CreatePen(PS_JOIN_ROUND, 1, 0x408000);
    v3 = SelectObject(a1, v2);
    i = 11;
    v5 = a2->field_4;
    v6 = v3;
    if ((int)(a2->field_c - a2->field_4) > 11)
    {
        do
        {
            MoveToEx(a1, v1, v5 + i, NULL);
            LineTo(a1, a2->field_8, a2->field_4 + i);
            i += 12;
            v5 = a2->field_4;
        } while ((int)i < (int)(a2->field_c - a2->field_4));
    }
    for (j = a2->field_8 - g_14002e5ec; j > v1; j -= 12)
    {
        MoveToEx(a1, j, a2->field_4, NULL);
        LineTo(a1, j, a2->field_c);
    }
    if (v6)
        SelectObject(a1, v6);
    return DeleteObject(v2);
}

