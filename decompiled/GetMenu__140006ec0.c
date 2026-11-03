/*
 * taskmgr-dark-neo.exe
 * label: GetMenu
 * function: 0x140006ec0
 * site: 0x140007007 sites=0x140007007
 */

typedef struct st_14000ad24_1 {
    char padding_0[24];
    HWND field_18;
} st_14000ad24_1;

extern long long g_140025530;
extern char g_14002ce40;
extern char g_14002e540;
extern HMENU g_14002e590;
extern HINSTANCE g_14002e5a0;
extern HWND g_14002e5b0;

int sub_140006ec0(st_14000ad24_1 *a0)
{
    HMENU v11;  // rsi
    HMENU v12;  // rbx
    unsigned long long v13;  // 4101
    HMENU v14;  // rsi
    unsigned int v15;  // cc_dep1
    unsigned int v16;  // ebx
    unsigned int v17;  // eax
    char *v0;  // [bp-0x498]
    char v1;  // [bp-0x478], Other Possible Types: unsigned int
    uint128_t v2;  // [bp-0x470], Other Possible Types: uint128_t
    char v3;  // [bp-0x460]
    char *v4;  // [bp-0x450]
    unsigned int v5;  // [bp-0x448]
    unsigned int v6;  // [bp-0x444]
    WCHAR v7[264];  // [bp-0x438]
    WCHAR v8[264];  // [bp-0x228]

    v2 = 0;
    if (g_14002ce40 & 1)
    {
        v6 = 0;
        v4 = &v1;
        v1 = 3;
        v0 = &v3;
        v5 = 4;
        sub_1400061e8();
    }
    GetClientRect(*(long long *)&a0[1].padding_0[0], &v2);
    MapWindowPoints(*(long long *)&a0[1].padding_0[0], g_14002e5b0, &v2, 2);
    SendMessageW(*(long long *)&a0[1].padding_0[0], 4904, NULL, &v2);
    sub_1400217c8(sub_140013a04() & 0xffffffff, 3);
    SetWindowPos(a0->field_18, NULL, *(unsigned int *)&v2, *(unsigned int *)((void*)&v2 + 4), *(unsigned int *)((void*)&v2 + 8) - *(unsigned int *)&v2, *(unsigned int *)((void*)&v2 + 12) - *(unsigned int *)((void*)&v2 + 4), 0);
    ShowWindow(a0->field_18, SW_SHOW);
    sub_14000ad24(a0);
    sub_1400087d0(a0->field_18);
    v11 = GetMenu(g_14002e5b0);
    v12 = LoadMenuW(g_14002e5a0, 0x78);
    if (v12 && (int)ordinal.190.shcore.dll(&g_140025530))
        DeleteMenu(v12, 40001, MF_UNHILITE);
    v13 = g_14002e540 & 16;
    g_14002e590 = v12;
    if (!(char)v13)
        SetMenu(g_14002e5b0, g_14002e590);
    if (v11)
        DestroyMenu(v11);
    if (*(int *)((char *)&a0[6].field_18 + 4) == 1)
    {
        DeleteMenu(g_14002e590, 60002, MF_UNHILITE);
        goto LABEL_14000719c;
    }
    v14 = GetSubMenu(GetSubMenu(g_14002e590, 2), 3);
    if (LoadStringW(g_14002e5a0, 40200, v7, 260) <= 0)
    {
        v15 = (unsigned long long)GetLastError();
        if (!v15)
            goto LABEL_1400071ac;
        if ((int)v15 > 0)
        {
            if ((int)(v15 & 0xffff | 0x80070000) >= 0)
                goto LABEL_140007133;
        }
        else
        {
            if ((int)v15 >= 0)
                goto LABEL_140007133;
        }
    }
    else
    {
LABEL_140007133:
        AppendMenuW(v14, MF_SEPARATOR, NULL, NULL);
        v16 = 0;
        if ((unsigned int)*(int *)((char *)&a0[6].field_18 + 4) > 0)
        {
            do
            {
                if ((int)sub_140005718(v8, 260, v7, v16) < 0)
                    goto LABEL_1400071ac;
            } while ((AppendMenuW(v14, MF_UNHILITE, v16 + 60003, v8), v16 += 1, v16 < (unsigned int)*(int *)((char *)&a0[6].field_18 + 4)));
        }
LABEL_14000719c:
        SetFocus(*(long long *)&a0[1].padding_0[0]);
    }
LABEL_1400071ac:
    if (g_14002ce40 & 1)
    {
        v6 = 0;
        v4 = &v1;
        v1 = 3;
        v0 = &v3;
        v5 = 4;
        sub_1400061e8();
    }
    return v17;
}

