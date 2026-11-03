/*
 * taskmgr-dark-neo.exe
 * label: SetBkColor
 * function: 0x140014780
 * site: 0x140014c75 sites=0x140014c75
 */

typedef struct st_140014780_2 {
    int field_0;
    char padding_4[4];
    struct st_140014780_3 *field_8;
} st_140014780_2;

typedef struct st_140014780_6 {
    char padding_0[192];
    unsigned long long field_c0;
} st_140014780_6;

typedef struct st_140014780_1 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[180];
    struct st_140014780_0 *field_c0;
} st_140014780_1;

typedef struct st_140014780_4 {
    char padding_0[24];
    struct st_140014780_2 *field_18;
} st_140014780_4;

typedef struct st_140014780_3 {
    struct st_140014780_1 *field_0;
} st_140014780_3;

typedef struct st_140014780_0 {
    char padding_0[8];
    unsigned int field_8;
} st_140014780_0;

extern void g_14002e360;
extern char g_14002e540;
extern unsigned int g_14002e54c;
extern LRESULT g_14002e5b0;
extern Char g_14002e618;
extern Char g_14002e750;

HBRUSH sub_140014780(unsigned long a0, unsigned int a1, void* a2, void* a3)
{
    unsigned int v9;  // esi
    void* len;  // r15
    HWND v19;  // rbx
    LRESULT v21;  // rbx
    void* v22;  // r9
    st_140014780_0 *v23;  // rax
    unsigned int v26;  // eax
    unsigned int v27;  // eax
    unsigned int v28;  // eax
    st_140014780_4 *v11;  // r14
    unsigned int v29;  // eax
    unsigned int v30;  // eax
    unsigned int v31;  // eax
    unsigned int v32;  // eax
    st_140014780_2 *v33;  // r8
    unsigned long long v34;  // rcx
    unsigned long long v35;  // rdx
    st_140014780_6 *v36;  // r14
    void* v37;  // rax
    HWND v38;  // r15
    unsigned int v12;  // eax
    unsigned int v39;  // eax
    unsigned long len1;  // rbx
    char *v41;  // r9
    unsigned int v42;  // edx
    unsigned int v13;  // eax
    unsigned int v14;  // eax
    unsigned int v15;  // eax
    unsigned int v16;  // eax
    unsigned int v17;  // eax
    unsigned int v18;  // eax
    int v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb4]
    unsigned int v2;  // [bp-0xac]
    st_140014780_6 *v3;  // [bp-0xa8]
    uint128_t v4;  // [bp-0xa0]
    int v5[3];  // [bp-0x88]
    unsigned int v6;  // [bp-0x7c]
    unsigned int v7;  // [bp-0x78]

    v9 = a1;
    len = a2;
    v11 = GetWindowLongPtrW(a0, 0xffffffeb);
    if (sub_140002228(v9, len, a3) == 1)
        return 0x1;
    if (v9 > 273)
    {
        v26 = v9;
        v27 = v26 - 309;
        if (v26 == 309 || !(v28 = v27 - 1, v27 != 1 && (v29 = v28 - 2, v28 != 2)))
        {
            SetBkMode(len, 1);
            SetBkColor(len, GetSysColor((0 < (unsigned int)IsThemeActive() ? 5 : 15)));
            SetTextColor(len, GetSysColor(COLOR_WINDOWTEXT));
            return GetSysColorBrush((0 < (unsigned int)IsThemeActive() ? 5 : 15));
        }
        v30 = v29 - 201;
        if (v29 != 201 && (v31 = v30 - 1, v30 != 1))
        {
            v32 = v31 - 1;
            if (v31 != 1)
            {
                if (v32 == 0x1fe || v32 == 0x202)
                {
                    v33 = v11->field_18;
                    v34 = 0;
                    do
                    {
                        v35 = 0;
                        if ((unsigned int)v33->field_0 > 0)
                        {
                            do
                            {
                                v36 = *(long long *)&v33->field_8[(unsigned int)v35];
                                v37 = *(int *)&v36->padding_0[8];
                                if (!(unsigned int)v34)
                                {
                                    if (len != v37)
                                        continue;
                                    goto LABEL_140014b06;
                                }
                                else
                                {
                                    if (a3 == v37)
                                    {
LABEL_140014b06:
                                        v1 = 0;
                                        v2 = 0;
                                        v0 = 1;
                                        v3 = v36;
                                        v4 = 0;
                                        v38 = GetDlgItem(a0, 1009);
                                        v39 = (unsigned int)SendMessageW(v38, 4179, 0xffffffffffffffff, &v0);
                                        if ((int)v39 >= 0)
                                        {
                                            memset(v5, 0, 88);
                                            len1 = v39;
                                            v7 = 15;
                                            v6 = 3;
                                            SendMessageW(v38, 4139, len1, v5);
                                            v41 = NULL;
                                            v42 = 4115;
                                        }
                                        else
                                        {
                                            memset(v5, 0, 88);
                                            v41 = v5;
                                            v7 = 3;
                                            len1 = 0xffffffffffffffff;
                                            v6 = 0;
                                            v42 = 4139;
                                        }
                                        SendMessageW(v38, v42, len1, v41);
                                        if (v9 == 1029)
                                        {
                                            sub_140011258((!v36->field_c0 ? *(int *)&v36->padding_0[8] : *(int *)(v36->field_c0 + 8)));
                                            return NULL;
                                        }
                                        return NULL;
                                    }
                                }
                            } while ((v35 += 1, (unsigned int)v35 < (unsigned int)v33->field_0));
                        }
                    } while ((v34 += 1, (int)v34 < 2));
                }
            }
            else
            {
LABEL_140014c03:
                goto LABEL_140014c2d;
            }
        }
        else
        {
            if (g_14002e540 & 16)
            {
                len = 0x2;
                v9 = -(0 < v9 - 0x202) + 162;
LABEL_140014c2d:
                v21 = g_14002e5b0;
                v22 = a3;
LABEL_1400148f6:
                SendMessageW(v21, v9, len, v22);
            }
        }
    }
    else if (v9 != 273)
    {
        v12 = v9;
        v13 = v12 - 2;
        if (v12 != 2)
        {
            v14 = v13 - 3;
            if (v13 == 3)
            {
                sub_140016a30(v11);
                return 0x1;
            }
            v15 = v14 - 16;
            if (v14 == 16)
            {
                SendMessageW(GetDlgItem(a0, 1009), v9, len, a3);
                return 0x1;
            }
            v16 = v15 - 5;
            if (v15 == 5)
            {
                GetLocaleInfoW(0x400, 30, &g_14002e750, 4);
                GetLocaleInfoW(0x400, 14, &g_14002e618, 4);
                return 0x1;
            }
            v17 = v16 - 52;
            if (v16 == 52)
                return sub_1400129d4(v11, a3);
            v18 = v17 - 45;
            if (v17 != 45)
            {
                if (v18 == 40)
                    goto LABEL_140014c03;
                if (v18 == 149)
                {
                    SetWindowLongPtrW(a0, 0xffffffeb, a3);
                    *(unsigned long *)&a3[8] = a0;
                    v19 = GetDlgItem(a0, 1009);
                    SetWindowLongW(v19, 0xfffffff0, GetWindowLongW(v19, 0xfffffff0) | 8);
                    SendMessageW(v19, 4150, NULL, 0x10030);
                    v21 = GetDlgItem(a0, 1008);
                    if (v21 == sub_1400118b8(a0))
                    {
                        v9 = 241;
                        len = g_14002e54c != 0;
                        v22 = NULL;
                        goto LABEL_1400148f3;
                    }
                }
            }
            else
            {
                v23 = sub_140012558(v11);
                if (!v23)
                    return NULL;
                if (v23->field_8 && len == GetDlgItem(a0, 1009))
                {
                    sub_1400126f4(v11, (unsigned short)a3, (short)(a3 >> 16));
                    return 0x1;
                }
            }
        }
        else if (v11)
        {
            v21 = SendMessageW(GetDlgItem(a0, 1009), 4127, NULL, NULL);
            memset(&g_14002e360, 0xff, 128);
            len = (unsigned int)SendMessageW(v21, 0x1200, NULL, NULL);
            v22 = &g_14002e360;
            v9 = 4625;
LABEL_1400148f3:
            goto LABEL_1400148f6;
        }
    }
    else
    {
        sub_140012bd4(v11, len & 0xffff, a3);
    }
    return NULL;
}

