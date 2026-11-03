/*
 * taskmgr-dark-neo.exe
 * label: GetMenu
 * function: 0x14000b760
 * site: 0x14000b8a7 sites=0x14000b8a7
 */

typedef struct st_14000b760_2 {
    struct st_14000b760_0 *field_0;
    char padding_8[40];
    HWND field_30;
    HWND field_38;
    char padding_40[68];
    unsigned int field_84;
} st_14000b760_2;

typedef struct st_14000b760_0 {
    char padding_0[48];
    struct st_14000b760_1 *field_30;
} st_14000b760_0;

typedef struct st_14000b760_1 {
    unsigned long long field_0;
} st_14000b760_1;

extern long long g_140025530;
extern char g_14002ce40;
extern char g_14002e244;
extern char g_14002e248;
extern char g_14002e24c;
extern char g_14002e250;
extern char g_14002e540;
extern unsigned long long g_14002e590;
extern HINSTANCE g_14002e5a0;
extern HWND g_14002e5b0;

int sub_14000b760(st_14000b760_2 *a0)
{
    HWND v9;  // rcx
    HMENU v10;  // r14
    HMENU v11;  // rdi
    unsigned long long v12;  // 4107
    unsigned int v13;  // eax
    char *v0;  // [bp-0x78]
    char v1;  // [bp-0x58], Other Possible Types: unsigned int
    uint128_t v2;  // [bp-0x50], Other Possible Types: uint128_t
    char v3;  // [bp-0x40]
    char *v4;  // [bp-0x30]
    unsigned int v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x24]

    v2 = 0;
    if (g_14002ce40 & 1)
    {
        v6 = 0;
        v4 = &v1;
        v1 = 4;
        v0 = &v3;
        v5 = 4;
        sub_1400061e8();
    }
    sub_1400217c8(sub_140013a04() & 0xffffffff, 4);
    GetClientRect(a0->field_38, &v2);
    MapWindowPoints(a0->field_38, g_14002e5b0, &v2, 2);
    SendMessageW(a0->field_38, 4904, NULL, &v2);
    v9 = a0->field_30;
    a0->field_84 = 1;
    SetWindowPos(v9, NULL, *(unsigned int *)&v2, *(unsigned int *)((void*)&v2 + 4), *(unsigned int *)((void*)&v2 + 8) - *(unsigned int *)&v2, *(unsigned int *)((void*)&v2 + 12) - *(unsigned int *)((void*)&v2 + 4), 0);
    ShowWindow(a0->field_30, SW_SHOW);
    SetFocus(a0->field_38);
    a0->field_0->field_30(a0);
    v10 = GetMenu(g_14002e5b0);
    v11 = LoadMenuW(g_14002e5a0, 0x960);
    if (v11)
    {
        if ((int)ordinal.190.shcore.dll(&g_140025530))
            DeleteMenu(v11, 40001, MF_UNHILITE);
        CheckMenuItem(v11, 2401, (0 < (unsigned int)*(int *)&g_14002e244 ? 8 : 0));
        CheckMenuItem(v11, 2401, (0 < (unsigned int)*(int *)&g_14002e248 ? 8 : 0));
        CheckMenuItem(v11, 2402, (0 < (unsigned int)*(int *)&g_14002e24c ? 8 : 0));
        CheckMenuItem(v11, 2403, (0 < (unsigned int)*(int *)&g_14002e250 ? 8 : 0));
        v12 = g_14002e540 & 16;
        g_14002e590 = v11;
        if (!(char)v12)
            SetMenu(g_14002e5b0, v11);
        if (v10)
            DestroyMenu(v10);
        sub_14000ee08(a0);
    }
    if (g_14002ce40 & 1)
    {
        v6 = 0;
        v4 = &v1;
        v1 = 4;
        v0 = &v3;
        v5 = 4;
        sub_1400061e8();
    }
    return v13;
}

