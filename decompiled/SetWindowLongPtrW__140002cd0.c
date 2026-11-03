/*
 * taskmgr-dark-neo.exe
 * label: SetWindowLongPtrW
 * function: 0x140002cd0
 * site: 0x1400033fa sites=0x1400033fa
 */

typedef struct RECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;

typedef struct st_140002cd0_4 {
    struct st_140002cd0_5 *field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
} st_140002cd0_4;

typedef struct st_140002cd0_0 {
    char padding_0[16];
    struct st_140002cd0_1 *field_10;
    struct st_140002cd0_1 *field_18;
    char padding_20[8];
    struct st_140002cd0_1 *field_28;
} st_140002cd0_0;

typedef struct st_140002cd0_1 {
    unsigned long long field_0;
} st_140002cd0_1;

typedef struct st_140002cd0_5 {
    struct st_140002cd0_0 *field_0;
} st_140002cd0_5;

typedef struct st_14000ad24_1 {
    char padding_0[24];
    HWND field_18;
} st_14000ad24_1;

extern st_140002cd0_4 g_14002ce60;
extern st_14000ad24_1 *g_14002ce78;
extern st_140002cd0_5 *g_14002ce80;
extern char g_14002ce90;
extern long long g_14002e220;
extern unsigned int g_14002e224;
extern RECT g_14002e230;
extern char g_14002e240;
extern void g_14002e540;
extern HANDLE g_14002e550;
extern unsigned int g_14002e568;
extern unsigned int g_14002e570;
extern HANDLE g_14002e580;
extern unsigned int g_14002e588;
extern HWND g_14002e5a8;
extern void g_14002e5b0;
extern char g_14002e5d0;
extern unsigned long long g_14002e5d8;
extern long long g_14002e5e0;
extern char g_14002e5e8;

int sub_140002cd0(unsigned long a0, unsigned int a1, unsigned long len, LPARAM a3)
{
    unsigned long long v7;  // rsi
    unsigned int v8;  // edx
    unsigned long v17;  // rcx
    st_140002cd0_4 *v18;  // rdi
    st_140002cd0_4 *v19;  // rdi
    unsigned int v21;  // eax
    unsigned int v22;  // eax
    unsigned int v23;  // eax
    unsigned int v24;  // eax
    HWND v25;  // rdx
    LRESULT v26;  // rax
    unsigned int v9;  // ecx
    unsigned int v27;  // eax
    unsigned int v29;  // eax
    unsigned int v30;  // ebx
    unsigned int v31;  // ebx
    unsigned int v32;  // ebx
    unsigned int v33;  // eax
    unsigned int v34;  // eax
    unsigned short v35;  // ax
    unsigned int v36;  // eax
    unsigned int v10;  // eax
    unsigned int v37;  // eax
    unsigned int v38;  // eax
    unsigned int v39;  // eax
    unsigned int v40;  // eax
    unsigned int v41;  // eax
    unsigned int v42;  // eax
    unsigned int v43;  // eax
    unsigned int v44;  // eax
    unsigned int v45;  // eax
    unsigned int v46;  // eax
    unsigned int v11;  // eax
    HWND v47;  // rax
    WPARAM v48;  // r8
    unsigned int v50;  // eax
    unsigned int v12;  // eax
    unsigned int v13;  // eax
    unsigned long v14;  // r8
    unsigned long long v15;  // rdx
    unsigned long v16;  // r9
    unsigned int v0;  // [bp-0x78]
    enum SET_WINDOW_POS_FLAGS v1;  // [bp-0x68]
    RECT v2;  // [bp-0x58], Other Possible Types: unsigned long, uint128_t
    unsigned long long v3;  // [bp-0x50]
    unsigned int v4;  // [bp-0x48]
    unsigned int v5;  // [bp-0x44]

    v7 = 0;
    if (!(a1 - 3 & 0xfffffffd) && g_14002e568 && !IsIconic(a0) && !IsZoomed(a0))
        GetWindowRect(a0, &g_14002e230.left);
    if (a1 == *(int *)&g_14002e5d0)
    {
        v8 = PostThreadMessageW(g_14002e588, 0x404, NULL, NULL);
        g_14002e570 = v8;
    }
    else
    {
        v8 = g_14002e570;
    }
    v9 = *(int *)&g_14002e540;
    if (a1 <= 272)
    {
        if (a1 == 272)
        {
            sub_140003fb4(a0);
            return v29;
        }
        if (a1 <= 26)
        {
            if (a1 != 26)
            {
                v10 = a1;
                v11 = v10 - 2;
                if (v10 != 2)
                {
                    v12 = v11 - 3;
                    if (v11 == 3)
                    {
                        v14 = (unsigned short)a3;
                        v15 = len & 0xffffffff;
                        v16 = (short)(a3 >> 16);
                        v17 = a0;
                        goto LABEL_140002f25;
                    }
                    v13 = v12 - 11;
                    if (v12 == 11)
                    {
                        sub_140004fb4(*(long long *)&g_14002e5b0);
                        return v50;
                    }
                    if (v13 == 5)
                        goto LABEL_140002e87;
                    if (v13 == 6 && len)
                    {
                        sub_140004fb4(*(long long *)&g_14002e5b0);
                        sub_140005068(&g_14002e220);
                        return v50;
                    }
                }
                else
                {
                    v18 = &g_14002ce60.field_0;
                    if (*(int *)&g_14002e240 >= 0 && *(int *)&g_14002e240 < *(int *)&g_14002ce90)
                        (*(long long *)(*(long long *)(&g_14002ce60.field_0)[*(int *)&g_14002e240] + 16))((&g_14002ce60.field_0)[*(int *)&g_14002e240]);
                    if (*(int *)&g_14002ce90 > 0)
                    {
                        do
                        {
                            (*(long long *)(*(long long *)v18->field_0 + 24))(v18->field_0);
                            v7 = (unsigned int)v7 + 1;
                            v18 = &v18->field_8;
                        } while ((int)v7 < *(int *)&g_14002ce90);
                    }
                    sub_140005068(&g_14002e220);
                    PostQuitMessage(0);
                }
            }
            else
            {
LABEL_140002e87:
                SendMessageW(g_14002e5a8, a1, len, a3);
                if (*(int *)&g_14002ce90 > 0)
                {
                    v19 = &g_14002ce60.field_0;
                    do
                    {
                        SendMessageW((*(long long *)(*(long long *)v19->field_0 + 40))(v19->field_0), a1, len, a3);
                        v7 = (unsigned int)v7 + 1;
                        v19 = &v19->field_8;
                    } while ((int)v7 < *(int *)&g_14002ce90);
                }
                if (a1 == 26)
                {
                    v2 = 0;
                    GetClientRect(*(long long *)&g_14002e5b0, &v2);
                    v16 = v2.bottom - v2.top;
                    v14 = v2.right - v2.left;
                    v17 = *(long long *)&g_14002e5b0;
                    v15 = 0;
LABEL_140002f25:
                    sub_140004774(v17, v15, v14, v16);
                }
            }
        }
        else
        {
            v21 = a1;
            v22 = v21 - 78;
            if (v21 != 78)
            {
                v23 = v22 - 52;
                if (v22 != 52)
                {
                    v24 = v23 - 2;
                    if (v23 != 2)
                    {
                        if (v24 != 2)
                        {
                            if (v24 == 31 && (char)v9 & 16)
                                goto LABEL_14000310c;
                        }
                        else
                        {
                            if (!((char)v9 & 4))
                            {
                                if (len)
                                {
                                    v1 = 3;
                                    v25 = 0xffffffffffffffff;
                                }
                                else
                                {
                                    v1 = 19;
                                    v25 = 0xfffffffffffffffe;
                                }
                                SetWindowPos(a0, v25, 0, 0, 0, 0, v1);
                            }
                        }
                    }
                    else
                    {
                        v26 = DefWindowProcW(a0, a1, len, a3);
                        if (g_14002e540 & 16 && v26 == 0x1)
                        {
                            v27 = IsZoomed(*(long long *)&g_14002e5b0);
                            if (!v27)
                            {
                                SetWindowLongPtrW(a0, 0, v27 + 2);
                                return v46;
                            }
                        }
                    }
                }
                else
                {
                    if (g_14002e588 && v8 && PostThreadMessageW(g_14002e588, 1027, NULL, NULL) && g_14002e580)
                    {
                        WaitForSingleObject(g_14002e580, 3000);
                        CloseHandle(g_14002e580);
                    }
                }
            }
            else
            {
                if (len == 1000)
                {
                    sub_140004928(a3);
                    return v29;
                }
                if (a3[4] != 0xfffffe01)
                {
                    if (a3[4] == 0xfffffe02)
                    {
                        SetWindowLongPtrW(a0, 0, NULL);
                        return v46;
                    }
                }
                else
                {
                    SetWindowLongPtrW(a0, 0, ((int)sub_140005bdc(a3, 0) < 0) + 1);
                    return v46;
                }
            }
        }
    }
    else if (a1 <= 1025)
    {
        if (a1 == 1025)
            goto LABEL_140003482;
        v30 = a1 - 273;
        if (a1 != 273)
        {
            v31 = v30 - 2;
            if (v30 != 2)
            {
                v32 = v31 - 4;
                if (v31 != 4)
                {
                    if (v32 != 8)
                    {
                        if (v32 == 236)
                        {
LABEL_14000310c:
                            *(unsigned int *)&g_14002e540 = (~((int)(v9) >> 4) & 1) * 16 | v9 & 0xffffffef;
                            v2 = 0;
                            GetWindowRect(*(long long *)&g_14002e5b0, &v2);
                            v33 = *(int *)&g_14002ce90;
                            if (*(int *)&g_14002ce90 > 3)
                            {
                                sub_14000ad24(g_14002ce78);
                                (*(long long *)(*(long long *)&g_14002ce78->padding_0[0] + 48))(g_14002ce78);
                                v33 = *(int *)&g_14002ce90;
                            }
                            if ((int)v33 > 4)
                            {
                                sub_14000f680(g_14002ce80);
                                (*(long long *)(*(long long *)g_14002ce80 + 48))(g_14002ce80);
                            }
                            MoveWindow(*(long long *)&g_14002e5b0, v2.left, v2.top, v2.right - v2.left, v2.bottom - v2.top, 1);
                            RedrawWindow(*(long long *)&g_14002e5b0, NULL, NULL, RDW_INVALIDATE);
                            sub_140005414(a0);
                            v34 = sub_140013a04();
                            goto LABEL_1400032e8;
                        }
                    }
                    else
                    {
                        v35 = len >> 16;
                        if ((char)v35 & 16)
                            GetSubMenu(a3, (unsigned int)len & 0xffff);
                        v0 = (v35 == 0xffff ? 0xffffffff : v35);
                        sub_1400045fc();
                    }
                }
                else
                {
                    if (!(a3 & 0xffff0000))
                    {
                        v36 = GetMenuItemID(len, 0);
                        v37 = v36 - 40001;
                        if (v36 != 40001)
                        {
                            v38 = v37 - 5;
                            if (v37 != 5)
                            {
                                v39 = v38 - 16;
                                if (v38 != 16)
                                {
                                    v40 = v39 - 20;
                                    if (v39 != 20)
                                    {
                                        if (v40 != 7)
                                        {
                                            if (v40 == 11)
                                                goto LABEL_1400032d8;
                                        }
                                        else
                                        {
                                            goto LABEL_1400032d8;
                                        }
                                    }
                                    else
                                    {
                                        goto LABEL_1400032d8;
                                    }
                                }
                                else
                                {
                                    goto LABEL_1400032d8;
                                }
                            }
                            else
                            {
LABEL_1400032d8:
                                v34 = sub_140013a04();
LABEL_1400032e8:
                                v0 = 0;
                                sub_1400214a0(v34);
                            }
                        }
                        else
                        {
                            goto LABEL_1400032d8;
                        }
                    }
                }
            }
            else if (!len)
            {
                sub_1400049f0(a0, 0);
            }
            else if (len == 556)
            {
                KillTimer(a0, 0x22c);
                sub_1400049f0(a0, 1);
                if (g_14002e224)
                    SetTimer(*(long long *)&g_14002e5b0, NULL, g_14002e224, NULL);
            }
            else if (len == 555)
            {
                KillTimer(a0, 0x22b);
                v41 = sub_140013a04();
                sub_140021698(v41, g_14002e5d8 * 100 / g_14002e5e0 & 0xffffffff, g_14002e5e8);
            }
        }
        else
        {
            sub_140003564(a0, len & 0xffff);
        }
    }
    else
    {
        v42 = a1;
        v43 = v42 - 1029;
        if (v42 != 1029)
        {
            v44 = v43 - 1;
            if (v43 != 1)
            {
                v45 = v44 - 1;
                if (v44 == 1)
                {
                    if (g_14002e550)
                    {
                        WaitForSingleObject(g_14002e550, 0xffffffff);
                        CloseHandle(g_14002e550);
                    }
                    DestroyWindow(*(long long *)&g_14002e5b0);
                }
                else if (v45 == 3)
                {
                    sub_14001d094(a0, a3);
                }
                else if (v45 == 4)
                {
                    sub_1400053a4();
                    SetWindowLongPtrW(a0, 0, 0x40b);
                    return v46;
                }
            }
            else
            {
                v47 = GetDlgItem(a0, 1000);
                v48 = 0x2;
                goto LABEL_14000349c;
            }
        }
        else
        {
LABEL_140003482:
            v47 = GetDlgItem(a0, 1000);
            v48 = 0x1;
LABEL_14000349c:
            if ((unsigned int)SendMessageW(v47, 4876, v48, NULL) != 0xffffffff)
            {
                v5 = 0;
                v3 = 1000;
                v2 = GetDlgItem(a0, 1000);
                v4 = 0xfffffdd9;
                if (sub_140004928(&v2) && *(int *)&g_14002e240 != 0xffffffff)
                    SendMessageW((*(long long *)(*(long long *)(&g_14002ce60.field_0)[*(int *)&g_14002e240] + 40))((&g_14002ce60.field_0)[*(int *)&g_14002e240]), a1, len, a3);
            }
            else
            {
                MessageBeep(MB_APPLMODAL);
            }
        }
    }
    return v50;
}

