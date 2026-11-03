/*
 * taskmgr-dark-neo.exe
 * label: DialogBoxParamW
 * function: 0x140003564
 * site: 0x1400037ad sites=0x1400037ad
 */

typedef struct st_140003564_3 {
    struct st_140003564_4 *field_0;
    char padding_8[120];
    unsigned int field_80;
} st_140003564_3;

typedef struct PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    unsigned int dwProcessId;
    unsigned int dwThreadId;
} PROCESS_INFORMATION;

typedef struct st_140003564_0 {
    char padding_0[16];
    struct st_140003564_1 *field_10;
    struct st_140003564_1 *field_18;
} st_140003564_0;

typedef struct st_140003564_24 {
    char padding_0[40];
    struct st_140003564_1 *field_28;
    struct st_140003564_1 *field_30;
} st_140003564_24;

typedef struct st_140003564_1 {
    unsigned long long field_0;
} st_140003564_1;

typedef struct st_140003564_4 {
    struct st_140003564_0 *field_0;
} st_140003564_4;

typedef struct STARTUPINFOW {
    unsigned int cb;
    PWSTR lpReserved;
    PWSTR lpDesktop;
    PWSTR lpTitle;
    unsigned int dwX;
    unsigned int dwY;
    unsigned int dwXSize;
    unsigned int dwYSize;
    unsigned int dwXCountChars;
    unsigned int dwYCountChars;
    unsigned int dwFillAttribute;
    enum STARTUPINFOW_FLAGS dwFlags;
    unsigned short wShowWindow;
    unsigned short cbReserved2;
    Byte *lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
} STARTUPINFOW;

typedef struct Guid {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    char Data4[8];
} Guid;

extern char g_140025860;
extern Guid g_140025878;
extern Guid g_140025888;
extern st_140003564_4 *g_14002ce60;
extern st_140003564_3 *g_14002ce68;
extern st_140003564_4 *g_14002ce70;
extern st_140003564_4 *g_14002ce78;
extern st_140003564_3 *g_14002ce80;
extern st_140003564_4 *g_14002ce88;
extern unsigned int g_14002ce90;
extern unsigned int g_14002e224;
extern unsigned int g_14002e228;
extern unsigned int g_14002e22c;
extern unsigned int g_14002e240;
extern unsigned int g_14002e244;
extern unsigned int g_14002e248;
extern unsigned int g_14002e24c;
extern unsigned int g_14002e250;
extern unsigned int g_14002e254;
extern unsigned int g_14002e258;
extern unsigned int g_14002e25c;
extern unsigned int g_14002e540;
extern HINSTANCE g_14002e5a0;
extern HWND g_14002e5b0;

void sub_140003564(unsigned long a0, int a1)
{
    unsigned long v11;  // rsi
    unsigned int v12;  // r14d
    unsigned int v21;  // ecx
    unsigned int v22;  // ecx
    unsigned int v23;  // ecx
    unsigned int v24;  // ecx
    st_140003564_3 *v25;  // rax
    void* v26;  // r9
    PWSTR v27;  // rdx
    unsigned int v28;  // ecx
    unsigned int v29;  // ecx
    unsigned int v30;  // ecx
    unsigned long len;  // rdi
    unsigned int v31;  // ecx
    st_140003564_24 **v33;  // rcx
    unsigned int v34;  // ecx
    unsigned int v35;  // ecx
    unsigned int v36;  // ecx
    unsigned int v37;  // ecx
    unsigned int v38;  // ecx
    HICON v39;  // r15
    unsigned int v40;  // ecx
    unsigned int v14;  // edx
    unsigned int v41;  // eax
    HANDLE count;  // rax
    unsigned long long v43;  // rbx
    void* iter;  // rcx
    unsigned long long v46;  // rbx
    void* v47;  // rax
    unsigned int v48;  // edi
    unsigned int v49;  // edi
    unsigned int v50;  // edi
    unsigned int v15;  // ecx
    unsigned int v51;  // ecx
    unsigned int v52;  // ecx
    unsigned int v53;  // ecx
    unsigned int v54;  // ecx
    unsigned int v55;  // eax
    unsigned int v56;  // ecx
    unsigned int v57;  // ecx
    unsigned long v58;  // rcx
    unsigned int v59;  // ecx
    int v60;  // r15d
    unsigned int v16;  // ecx
    unsigned int v62;  // ecx
    unsigned int v63;  // ecx
    unsigned int v64;  // ecx
    unsigned int v65;  // ecx
    unsigned int v67;  // eax
    unsigned int v17;  // ecx
    unsigned int v18;  // ecx
    unsigned int v19;  // ecx
    unsigned long v20;  // rcx
    char v0;  // [bp-0x140025968]
    st_140003564_3 *v1;  // [bp-0x308], Other Possible Types: long long
    st_140003564_0 **v2;  // [bp-0x2d8], Other Possible Types: unsigned long long
    PROCESS_INFORMATION v3;  // [bp-0x2d0], Other Possible Types: unsigned int, unsigned long
    uint128_t v4;  // [bp-0x2d0]
    unsigned long long v5;  // [bp-0x2c8]
    unsigned int v6;  // [bp-0x2c0], Other Possible Types: unsigned long long
    unsigned int v7;  // [bp-0x2bc]
    STARTUPINFOW v8;  // [bp-0x2b8]
    char v9;  // [bp-0x248]

    v11 = a1;
    v12 = 0;
    len = v11;
    v14 = 0;
    if ((int)v11 >= 60003)
    {
        if ((int)v11 <= 60067)
        {
            v14 = v11 - 60003;
            v11 = 60003;
            goto LABEL_140003efd;
        }
        goto LABEL_140003edc;
    }
    if ((int)len <= 40022)
    {
        if ((unsigned int)len == 40022)
            goto LABEL_140003b9b;
        if ((int)len <= 2410)
        {
            if ((unsigned int)len != 2410)
            {
                if ((int)len <= 2403)
                {
                    if ((unsigned int)len != 2403)
                    {
                        v15 = len;
                        v16 = v15 - 2;
                        if (v15 == 2)
                            goto LABEL_140003994;
                        v17 = v16 - 1046;
                        if (v16 == 1046 || !(v18 = v17 - 1, v17 != 1 && (v19 = v18 - 1, v18 != 1)))
                        {
                            if (g_14002e240)
                            {
                                if (g_14002e240 == 1)
                                {
                                    sub_140012bd4(g_14002ce68, len & 0xffff, 0);
                                    return;
                                }
                                return;
                            }
                            else
                            {
                                sub_14001ac6c(g_14002ce60, len & 0xffffffff);
                                return;
                            }
                        }
                        v20 = v19 - 1351;
                        if (v19 == 1351)
                        {
                            g_14002e248 = !g_14002e248;
                            sub_140005cc4(v20);
                            goto LABEL_140003663;
                        }
                        if ((unsigned int)v20 == 1)
                        {
                            g_14002e24c = !g_14002e24c;
                            goto LABEL_140003641;
                        }
                    }
                    else
                    {
                        g_14002e250 = !g_14002e250;
                        goto LABEL_140003641;
                    }
                }
                else
                {
                    v21 = len;
                    v22 = v21 - 2404;
                    if (v21 != 2404)
                    {
                        v23 = v22 - 1;
                        if (v22 != 1)
                        {
                            v24 = v23 - 1;
                            if (v23 != 1)
                            {
                                if (v24 != 1)
                                {
                                    if (v24 == 2)
                                    {
                                        g_14002e258 = !g_14002e258;
                                        sub_140005cc4();
                                        if ((int)g_14002ce90 > 4)
                                            sub_14000ee08(g_14002ce80);
                                    }
                                }
                                else
                                {
                                    g_14002e244 = !g_14002e244;
                                    goto LABEL_140003641;
                                }
                            }
                            else
                            {
                                if ((int)g_14002ce90 > 4)
                                {
                                    g_14002ce80->field_80 = 1;
LABEL_140003665:
                                    sub_1400049f0(a0);
                                }
                            }
                        }
                        else
                        {
                            g_14002e254 = !g_14002e254;
                            goto LABEL_140003641;
                        }
                    }
                    else
                    {
                        if ((int)g_14002ce90 > 4)
                        {
                            v25 = g_14002ce80;
                            v26 = sub_14000dae0;
                            v27 = 0x969;
                            goto LABEL_14000379a;
                        }
                    }
                }
            }
            else
            {
                g_14002e25c = !g_14002e25c;
                goto LABEL_140003641;
            }
        }
        else
        {
            if ((int)len <= 30043)
            {
                if ((unsigned int)len == 30043)
                {
                    SendMessageW((*(long long *)(*(long long *)g_14002ce60 + 40))(g_14002ce60), 273, (int)v11, NULL);
                    return;
                }
                v28 = len;
                v29 = v28 - 3220;
                if (v28 != 3220)
                {
                    v30 = v29 - 288;
                    if (v29 == 288 || !(v31 = v30 - 1, v30 != 1 && v30 != 2 && v30 != 3))
                    {
                        SendMessageW((*(long long *)(*(long long *)g_14002ce70 + 40))(g_14002ce70), 273, len, NULL);
                        return;
                    }
                }
                else
                {
                    g_14002e540 = ~g_14002e540 & 128 | 0xffffff7f & g_14002e540;
                    sub_140005cc4(g_14002e540);
                    if ((int)g_14002ce90 > 5)
                    {
                        v33 = g_14002ce88;
                        goto LABEL_140003875;
                    }
                }
            }
            else
            {
                v34 = len;
                v35 = v34 - 40001;
                if (v34 != 40001)
                {
                    v36 = v35 - 1;
                    if (v35 != 1)
                    {
                        v37 = v36 - 4;
                        if (v36 != 4)
                        {
                            v38 = v37 - 1;
                            if (v37 != 1)
                            {
                                if (v38 == 14)
                                {
                                    v39 = LoadIconW(g_14002e5a0, v38 + 93);
                                    if (v39)
                                    {
                                        LoadStringW(g_14002e5a0, 10003, &v9, 260);
                                        ShellAboutW(a0, &v9, NULL, v39);
                                        DestroyIcon(v39);
                                    }
                                }
                            }
                            else
                            {
                                v40 = ~g_14002e540 & 1;
                                v41 = g_14002e540 & 0xfffffffe;
                                goto LABEL_140003935;
                            }
                        }
                        else
                        {
                            *(unsigned int *)&v1 = 0;
                            g_14002e540 = ~g_14002e540 & 4 | g_14002e540 & 0xfffffffb;
                            SetWindowPos(a0, (g_14002e540 & 4) >> 2 | 0xfffffffffffffffe, 0, 0, (unsigned int)v1, 0, 3);
                            goto LABEL_140003641;
                        }
                    }
                    else
                    {
LABEL_140003994:
                        sub_140004fb4(a0);
                    }
                }
                else
                {
                    if (GetKeyState(0x11) >= 0)
                    {
                        *(unsigned int *)&v1 = 0;
                        count = CreateThread(NULL, NULL, sub_140004b60, NULL, (unsigned int)v1, NULL);
                        if (!count)
                            sub_140004b60(0);
                        else
                            CloseHandle(count);
                    }
                    else
                    {
                        memset(&v8, 0, 104);
                        v8 = (STARTUPINFOW)_INSERT(CONCAT(v8, 0), 0, 104);
                        *(unsigned int *)&v8.dwFlags = 1;
                        v8.wShowWindow = 1;
                        v43 = 260;
                        v6 = 0;
                        v4 = 0;
                        if (!ExpandEnvironmentStringsW(L"\"%ComSpec%\"", &v9, 260) && !ExpandEnvironmentStringsW(L"\"%windir%\\system32\\cmd.exe\"", &v9, 260))
                        {
                            iter = &v9;
                            do
                            {
                                v46 = v43;
                            } while (v43 != 0xffffffff80000106 && (v43 = v46, *(short *)(iter + &v0) && (*(short *)iter = *(short *)(iter + &v0), iter += 2, v43 = v46 - 1, v46 != 1)));
                            v47 = iter - 2;
                            if (v43)
                                v47 = iter;
                            *(unsigned short *)v47 = 0;
                        }
                        *(unsigned int *)&v1 = 0;
                        if (CreateProcessW(NULL, &v9, NULL, NULL, (unsigned int)v1, CREATE_DEFAULT_ERROR_MODE, NULL, NULL, &v8, &v3))
                        {
                            CloseHandle(v3.hThread);
                            CloseHandle(v3.hProcess);
                        }
                        else
                        {
                            v12 = (unsigned long long)GetLastError();
                        }
                        v11 = 50101;
                    }
                }
            }
        }
    }
    else if ((int)len <= 40056)
    {
        if ((unsigned int)len == 40056)
        {
            g_14002e540 = ~g_14002e540 & 8 | g_14002e540 & 0xfffffff7;
            sub_140005cc4(g_14002e540);
            if ((int)g_14002ce90 > 3)
                goto LABEL_140003d7d;
        }
        else if ((int)len <= 40041)
        {
            if ((unsigned int)len == 40041)
            {
                SendMessageW((*(long long *)(*(long long *)g_14002ce60 + 40))(g_14002ce60), 273, (int)v11, NULL);
                return;
            }
            v48 = (unsigned int)len - 40023;
            if ((unsigned int)len == 40023 || (v49 = v48 - 1, v48 == 1 || (v50 = v49 - 1, v49 == 1)))
            {
LABEL_140003b9b:
                g_14002e22c = v11 - 40022;
                g_14002e224 = *(int *)(&(&g_140025860)[4 * v11] - 160088);
                KillTimer(g_14002e5b0, NULL);
                if (g_14002e224)
                {
                    SetTimer(g_14002e5b0, NULL, g_14002e224, NULL);
                    goto LABEL_140003641;
                }
            }
            else if (v50 == 14)
            {
                SendMessageW((*(long long *)(*(long long *)g_14002ce60 + 40))(g_14002ce60), 273, (int)v11, NULL);
                return;
            }
            else if (v50 == 15)
            {
                SendMessageW((*(long long *)(*(long long *)g_14002ce60 + 40))(g_14002ce60), 273, (int)v11, NULL);
                return;
            }
        }
        else
        {
            v51 = len;
            v52 = v51 - 40042;
            if (v51 == 40042)
            {
                SendMessageW((*(long long *)(*(long long *)g_14002ce60 + 40))(g_14002ce60), 273, (int)v11, NULL);
                return;
            }
            v53 = v52 - 3;
            if (v52 == 3)
            {
                SendMessageW((*(long long *)(*(long long *)g_14002ce60 + 40))(g_14002ce60), 273, (int)v11, NULL);
                return;
            }
            v54 = v53 - 4;
            if (v53 == 4)
            {
                v2 = 0;
                v55 = CoInitializeEx(NULL, 6);
                if ((int)v55 < 0)
                    v55 = CoInitializeEx(NULL, 4);
                v1 = &v2;
                if (CoCreateInstance(&g_140025878.Data1, 0, CLSCTX_INPROC_SERVER, &g_140025888.Data1, v1) >= 0)
                {
                    *v2->field_18(v2, L"mshelp://windows/?id=0da9bb3d-22c6-4b4d-a020-f75a2a0ef867");
                    *v2->field_10(v2);
                    v3 = 2;
                    v5 = L"HELP_ENTRY_ID_TASKMAN_HELP";
                    WinSqmAddToStream(0, 911, 1, &v3);
                }
                if ((int)v55 >= 0)
                    CoUninitialize();
            }
            else if (v54 != 3)
            {
                if (v54 == 4)
                {
                    if ((int)g_14002ce90 > 4 && g_14002e240 == 4)
                        sub_14000e464(g_14002ce80);
LABEL_140003663:
                    goto LABEL_140003665;
                }
            }
            else
            {
                if ((int)g_14002ce90 > 1)
                {
                    v25 = g_14002ce68;
                    v26 = sub_140014120;
                    v27 = 0x79;
LABEL_14000379a:
                    v1 = v25;
                    DialogBoxParamW(g_14002e5a0, v27, g_14002e5b0, v26, v1);
                }
            }
        }
    }
    else
    {
        if ((int)len > 40101)
        {
LABEL_140003edc:
            v62 = v11;
            v63 = v62 - 40109;
            if (v62 != 40109)
            {
                v64 = v63 - 19891;
                if (v63 == 19891 || (v65 = v64 - 1, v64 == 1 || v64 == 2 || v64 == 3))
                {
LABEL_140003efd:
                    g_14002e228 = v14 - 60000 + (unsigned int)v11;
                    sub_140005cc4();
                    if ((int)g_14002ce90 > 3)
                    {
                        sub_14000ad24(g_14002ce78);
LABEL_140003d7d:
                        v33 = g_14002ce78;
LABEL_140003875:
                        *v33->field_30(v33);
                    }
                }
            }
            else
            {
                if ((int)g_14002ce90 > 5)
                    SendMessageW((*(long long *)(*(long long *)g_14002ce88 + 40))(g_14002ce88), 273, v11 & 0xffffffff, NULL);
            }
        }
        else if ((unsigned int)len != 40101)
        {
            v56 = len;
            v57 = v56 - 40063;
            if (v56 != 40063)
            {
                v58 = v57 - 1;
                if (v57 != 1)
                {
                    v59 = (unsigned int)v58 - 1;
                    if ((unsigned int)v58 == 1)
                    {
                        v40 = ~g_14002e540 & 32;
                        v41 = g_14002e540 & 0xffffffdf;
LABEL_140003935:
                        g_14002e540 = v40 | v41;
LABEL_140003641:
                        sub_140005cc4();
                    }
                    else if (v59 == 0x22)
                    {
                        g_14002e540 = ~g_14002e540 & 16 | g_14002e540 & 0xffffffef;
                        sub_140005cc4(g_14002e540);
                        sub_140005414(a0);
                    }
                    else if (v59 == 35)
                    {
                        goto LABEL_140003dca;
                    }
                }
                else
                {
                    sub_1400053a4(v58);
                }
            }
            else
            {
                ShowWindow(a0, SW_MINIMIZE);
            }
        }
        else
        {
LABEL_140003dca:
            v60 = ((unsigned int)len != 40100 ? 0xffffffff : 1) + g_14002e240;
            if ((int)(((unsigned int)len != 40100 ? 0xffffffff : 1) + g_14002e240) < 0)
                v60 = g_14002ce90 - 1;
            if ((int)g_14002ce90 <= v60)
                v60 = 0;
            SendMessageW(GetDlgItem(g_14002e5b0, 1000), 4876, v60, NULL);
            v7 = 0;
            v5 = 1000;
            v3 = GetDlgItem(g_14002e5b0, 1000);
            v11 = len & 0xffffffff;
            v6 = 0xfffffdd9;
            if (sub_140004928(&v3))
                g_14002e240 = v60;
        }
    }
    v67 = sub_140013a04();
    *(unsigned int *)&v1 = v12;
    sub_1400214a0(v67, g_14002e240, v11 & 0xffffffff, 0, v1);
    return;
}

