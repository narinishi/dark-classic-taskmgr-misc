/* UAC_context_menu @ 0x1400126f4 (site 0x1400128c0) */

typedef struct st_1400126f4_1 {
    char padding_0[112];
    unsigned int field_70;
    char padding_74[76];
    unsigned long long field_c0;
    char padding_c8[24];
    unsigned int field_e0;
} st_1400126f4_1;

typedef struct st_1400126f4_0 {
    char padding_0[8];
    HWND field_8;
    char padding_10[64];
    unsigned int field_50;
    char padding_54[4];
    unsigned long long field_58;
    char padding_60[544];
    unsigned int field_280;
} st_1400126f4_0;

typedef struct POINT {
    int x;
    int y;
} POINT;

void sub_1400126f4(st_1400126f4_0 *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v2;  // r14d
    unsigned int v3;  // r15d
    HWND v12;  // rax
    HWND v4;  // rbx
    unsigned int v5;  // eax
    st_1400126f4_1 *v6;  // rsi
    HMENU v7;  // rbx
    unsigned int v8;  // edi
    unsigned int v9;  // eax
    unsigned int v10;  // ecx
    unsigned int v11;  // ecx
    POINT v0;  // [bp-0x58], Other Possible Types: uint128_t

    v2 = a1;
    v3 = a2;
    v4 = GetDlgItem(a0->field_8, 1009);
    v5 = (unsigned int)SendMessageW(v4, 4108, 0xffffffffffffffff, 0x2);
    if (v5 == 0xffffffff)
        return;
    if ((unsigned short)v2 == 0xffff && (unsigned short)v3 == 0xffff)
    {
        v0 = 0;
        v0.x = 1;
        SendMessageW(v4, 4110, v5, &v0);
        MapWindowPoints(v4, NULL, &v0, 2);
        v2 = *(unsigned int *)((void*)&v0 + 8);
        v3 = *(unsigned int *)((void*)&v0 + 12);
    }
    v6 = sub_140012558(a0);
    if (!v6)
        return;
    v7 = sub_140002c48();
    if (!v7)
        return;
    if (!a0->field_58 || v6->field_c0)
        EnableMenuItem(v7, 40027, 3);
    v8 = 40033;
    if (v6->field_c0)
    {
        EnableMenuItem(v7, 40029, 3);
        EnableMenuItem(v7, 40030, 3);
        EnableMenuItem(v7, 40032, 3);
        EnableMenuItem(v7, 40033, 3);
        EnableMenuItem(v7, 40031, 3);
        EnableMenuItem(v7, 40034, 3);
    }
    if (a0->field_280 == 1 || v6->field_c0)
        DeleteMenu(v7, 40055, MF_UNHILITE);
    v9 = v6->field_70;
    if (v9 == 64)
    {
        v8 = 40034;
    }
    else if (v9 != 0x4000)
    {
        v8 = (v9 == 32 ? 40032 : v9 == 0x8000 ? 40030 : v9 == 128 ? 40031 : 40029);
    }
    CheckMenuRadioItem(v7, 40029, 40034, v8, 0);
    v10 = v6->field_e0;
    if (!v10 || (v11 = v10 - 1, v10 == 1))
    {
        EnableMenuItem(v7, 40070, 3);
    }
    else if (v11 == 2)
    {
        CheckMenuItem(v7, 40070, v11 + 6);
    }
    v12 = a0->field_8;
    a0->field_50 = 1;
    TrackPopupMenuEx(v7, 0, v2, v3, v12, NULL);
    a0->field_50 = 0;
    DestroyMenu(v7);
    return;
}

