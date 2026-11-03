/*
 * taskmgr-dark-neo.exe
 * label: GetStockObject
 * function: 0x140008208
 * site: 0x140008237 sites=0x140008237
 */

typedef struct RECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;

typedef struct st_140008208_0 {
    char field_0;
} st_140008208_0;

extern st_140008208_0 *g_14002e608;

void sub_140008208(RECT *a0, void* a1)
{
    HBRUSH v1;  // rax
    int v2;  // edi
    unsigned int v3;  // r13d
    unsigned int v4;  // eax
    HGDIOBJ v5;  // r12
    unsigned int v6;  // edx
    int v7;  // r15d
    char *v8;  // r14
    unsigned long long v9;  // rbx
    unsigned int v10;  // edx
    unsigned int v0;  // [bp+0x8]

    if (!*(long long *)&a0[4].left)
        return;
    v1 = GetStockObject(BLACK_BRUSH);
    FillRect(*(long long *)&a0[4].left, a0 + 10, v1);
    v2 = (int)a1[48] - (int)a1[40];
    sub_1400080dc();
    v3 = (int)(274877907 * (v2 - 1)) >> 39;
    v4 = v3 >> 31;
    v0 = a0[10].bottom - a0[10].top - 1;
    v5 = SelectObject(*(long long *)&a0[4].left, *(long long *)&a0[9].right);
    v6 = 1374389535 * (v0 * *(char *)g_14002e608) >> 37;
    MoveToEx(*(long long *)&a0[4].left, a0[10].right, a0[10].bottom - (v6 + (v6 >> 31)), NULL);
    v7 = 0;
    v8 = NULL;
    v9 = 0;
    do
    {
        if ((int)v9 >= v2 + 4 || !*(char *)(v8 + g_14002e608))
            break;
    } while ((v10 = 1374389535 * (v0 * *(char *)(v8 + g_14002e608)) >> 37, LineTo(*(long long *)&a0[4].left, a0[10].right - v9, a0[10].bottom - (v10 + (v10 >> 31))), v7 += 1, v9 += (!(v3 + v4) ? 2 : v3 + v4 & 0xffffffff), v8 += 1, v7 < 2000));
    BitBlt((long long)a1[32], (int)a1[40], (int)a1[44], (int)a1[48] - (int)a1[40], (int)a1[52] - (int)a1[44], *(long long *)&a0[4].left, 0, 0, SRCCOPY);
    if (!v5)
        return;
    SelectObject(*(long long *)&a0[4].left, v5);
    return;
}

