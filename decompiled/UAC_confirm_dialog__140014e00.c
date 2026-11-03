/* UAC_confirm_dialog @ 0x140014e00 (site 0x140014e00) */

typedef struct st_140014e00_0 {
    char padding_0[8];
    unsigned long long field_8;
} st_140014e00_0;

extern unsigned int g_14002e540;
extern unsigned long long g_14002e5a0;

int sub_140014e00(st_140014e00_0 *a0, unsigned long a1, unsigned int a2, unsigned short a3, unsigned short a4, unsigned int a5)
{
    unsigned long long v21;  // 4158
    unsigned int v22;  // eax
    unsigned int v23;  // eax
    unsigned int v0;  // [bp-0xf18]
    unsigned int v1;  // [bp-0xf14]
    unsigned int v2;  // [bp-0xf10]
    unsigned long v3;  // [bp-0xf0c]
    char v4;  // [bp-0xef8], Other Possible Types: unsigned int
    unsigned long v5;  // [bp-0xef4]
    unsigned long v6;  // [bp-0xeec]
    unsigned int v7;  // [bp-0xee0]
    unsigned long long v8;  // [bp-0xedc]
    char *v9;  // [bp-0xecc]
    unsigned long v10;  // [bp-0xec4]
    unsigned int v11;  // [bp-0xebc]
    char *v12;  // [bp-0xeb8]
    unsigned int v13;  // [bp-0xeb0]
    unsigned long v14;  // [bp-0xe9c]
    unsigned long long v15;  // [bp-0xe6c]
    WCHAR v16[264];  // [bp-0xe58]
    WCHAR v17[264];  // [bp-0xc48]
    WCHAR v18[264];  // [bp-0xa38]
    char v19;  // [bp-0x828]

    v0 = 0;
    memset(&v4, 0, 160);
    v1 = 0;
    v3 = a4;
    v2 = 1;
    if (!LoadStringW(g_14002e5a0, a2, v16, 260) || (int)sub_140005718(&v19, 0x400, v16, &a0[6].padding_0[4]) < 0)
        return v23;
    v6 = g_14002e5a0;
    v5 = a0->field_8;
    v9 = &v19;
    v10 = a3;
    v12 = &v2;
    v4 = 160;
    v7 = 8;
    v8 = 10003;
    v11 = 1;
    v13 = 1;
    if (a5)
    {
        v14 = a5 & 0xffff;
        v15 = sub_140015020;
    }
    v21 = _ccall(35, g_14002e540 >> 3, g_14002e540 >> 2, 0);
    g_14002e540 = g_14002e540 | 4;
    if ((int)ordinal.345.comctl32.dll(&v4, &v0, 0, &v1) < 0)
    {
        LoadStringW(g_14002e5a0, 10003, v17, 260);
        LoadStringW(g_14002e5a0, a3, v18, 260);
        MessageBoxW(a0->field_8, v18, v17, 49);
    }
    g_14002e540 = (-((unsigned int)v21 & 1) & 1) * 4 | g_14002e540 & 0xfffffffb;
    return v22;
    return v23;
}

