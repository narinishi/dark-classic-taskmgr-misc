/*
 * taskmgr-dark-neo.exe
 * label: GetWindowThreadProcessId
 * function: 0x14001ac6c
 * site: 0x14001ae77 sites=0x14001ae77,0x14001af54,0x14001af7b,0x14001b0f0
 */

typedef struct st_14001ac6c_0 {
    char padding_0[32];
    unsigned int field_20;
    char padding_24[12];
    unsigned int field_30;
} st_14001ac6c_0;

extern char g_14002e540;
extern HWND g_14002e5b0;

void sub_14001ac6c(st_14001ac6c_0 *a0, unsigned int a1)
{
    unsigned long long i;  // r12
    unsigned int v9;  // edi
    enum SHOW_WINDOW_CMD v18;  // r14d
    void* node;  // r15
    unsigned long long v20;  // r12
    HWND v21;  // rax
    enum TILE_WINDOWS_HOW v22;  // edx
    unsigned int v24;  // ecx
    unsigned int v25;  // ecx
    unsigned int v26;  // ecx
    unsigned int v27;  // ecx
    st_14001ac6c_0 *v10;  // rsi
    unsigned int v28;  // ecx
    unsigned long v29;  // rbx
    unsigned long v30;  // rax
    unsigned int v31;  // eax
    unsigned int v32;  // edx
    void* v33;  // r15
    unsigned int v34;  // ebx
    unsigned int v35;  // ecx
    void* iter;  // r14
    unsigned long long v37;  // r12
    unsigned int v11;  // r8d
    HWND v38;  // rax
    void* v39;  // rax
    void* v40;  // rdi
    HDESK v41;  // rax
    unsigned int v44;  // ecx
    unsigned long v45;  // rbx
    unsigned long v46;  // rbx
    unsigned int v12;  // r8d
    HANDLE v48;  // rax
    HWND v49;  // r14
    unsigned int v13;  // r8d
    unsigned int v14;  // r8d
    unsigned int v15;  // r8d
    unsigned int v16;  // r8d
    void* v17;  // rbx
    void* v0;  // [bp-0x88], Other Possible Types: long long
    HDESK v1;  // [bp-0x68]
    uint128_t v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x48]
    st_14001ac6c_0 *v4;  // [bp+0x8]
    unsigned int v5[2];  // [bp+0x10]
    unsigned int v6;  // [bp+0x18]
    unsigned long v7;  // [bp+0x18]

    v4 = a0;
    i = 0;
    v9 = a1;
    v10 = a0;
    if ((int)a1 <= 40041)
    {
        if (a1 == 40041)
        {
            v5 = (unsigned int (32 bits)[2])0;
            v17 = sub_14001a5c0();
            if (v17)
                sub_14001a200();
            v0 = v17;
            CascadeWindows(GetDesktopWindow(), 0, NULL, v5, v0);
            goto LABEL_14001b279;
        }
        v11 = v9;
        v12 = v11 - 1048;
        if (v11 == 1048)
            goto LABEL_14001b123;
        v13 = v12 - 1;
        if (v12 == 1)
            goto LABEL_14001b07c;
        v14 = v13 - 1;
        if (v13 == 1)
            goto LABEL_14001aec9;
        v15 = v14 - 28993;
        if (v14 == 28993)
        {
            v5 = (unsigned int (32 bits)[2])0;
            v17 = sub_14001a5c0();
            if (v17)
                sub_14001a200();
            v21 = GetDesktopWindow();
            v22 = MDITILE_VERTICAL;
            goto LABEL_14001b25e;
        }
        v16 = v15 - 9958;
        if (v15 == 9958)
        {
            SendMessageW(g_14002e5b0, 273, v9 & 0xffff, NULL);
            v10->field_20 = 0;
            return;
        }
        if (v16 != 38 && v16 != 39)
            goto LABEL_14001b2b7;
        v5 = (unsigned int (32 bits)[2])0;
        v17 = sub_14001a5c0();
        if (v17)
        {
            if (v5)
            {
                i = (unsigned long long)v5;
                v18 = (v9 != 40039 ? SW_MAXIMIZE : SW_MINIMIZE);
                node = v17;
                do
                {
                    v20 = i;
                    ShowWindowAsync(*(long long *)node, v18);
                    node += 8;
                    i = v20 - 1;
                } while (i);
            }
            goto LABEL_14001b27e;
        }
    }
    else
    {
        v24 = v9;
        v25 = v24 - 40042;
        if (v24 != 40042)
        {
            v26 = v25 - 2;
            if (v25 != 2)
            {
                v27 = v26 - 1;
                if (v26 != 1)
                {
                    v28 = v27 - 1;
                    if (v27 == 1)
                    {
LABEL_14001aec9:
                        v5 = (unsigned int (32 bits)[2])0;
                        v33 = sub_14001a5c0(v10, 1, v5);
                        v34 = 0xffffffff;
                        v35 = (short)GetKeyState(0x11);
                        v6 = 0;
                        if (!v33)
                        {
                            v10->field_20 = 0;
                            return;
                        }
                        if (v5)
                        {
                            iter = v33;
                            i = (unsigned long long)v5;
                            do
                            {
                                v37 = i;
                                v5 = (unsigned int (32 bits)[2])0;
                                v7 = *(long long *)iter;
                                v3 = 0;
                                *(uint128_t *)&v1 = 0;
                                v2 = 0;
                                GetWindowThreadProcessId(v7, v5);
                                v38 = HungWindowFromGhostWindow(v7);
                                if (v38)
                                    GetWindowThreadProcessId(v38, v5);
                                if (v5 != v34)
                                {
                                    v39 = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, 0x28);
                                    v40 = &v1;
                                    if (v39)
                                        v40 = v39;
                                    v41 = GetThreadDesktop(GetCurrentThreadId());
                                    *(unsigned int *)&v40[16] = 0;
                                    *(HDESK *)v40 = v41;
                                    *(unsigned long *)&v40[8] = v7;
                                    *(unsigned int *)&v40[20] = v6;
                                    *(unsigned int *)&v40[24] = v9;
                                    *(unsigned int [2])&v40[28] = v5;
                                    if (v39)
                                    {
                                        *(unsigned int *)&v40[32] = 1;
                                        if (!SHCreateThread(sub_14001a030, v40, 0x11, NULL))
                                            HeapFree(GetProcessHeap(), HEAP_NONE, v40);
                                    }
                                    else
                                    {
                                        *(unsigned int *)&v40[32] = 0;
                                        sub_14001a030(v40);
                                    }
                                    v34 = (unsigned int)v5;
                                }
                                iter += 8;
                                i = v37 - 1;
                            } while (i);
                            v10 = v4;
                        }
                        HeapFree(GetProcessHeap(), HEAP_NONE, v33);
                        v10->field_20 = i;
                        return;
                    }
                    if (v28 != 1 && v28 != 0x55)
                        goto LABEL_14001b2b7;
                    v5 = (unsigned int (32 bits)[2])0;
                    v17 = sub_14001a5c0(v10, 1, v5);
                    if (v17)
                    {
                        v29 = *(long long *)v17;
                        v5 = (unsigned int (32 bits)[2])0;
                        v30 = HungWindowFromGhostWindow(*(long long *)v17);
                        if (v30)
                            v29 = v30;
                        v31 = GetWindowThreadProcessId(v29, v5);
                        if (v5)
                        {
                            v32 = 1029;
                            if (v9 != 40131)
                                v32 = 1025;
                            PostMessageW(g_14002e5b0, v32, v31, (unsigned long long)v5);
                            goto LABEL_14001aeb5;
                        }
                    }
                }
                else
                {
LABEL_14001b07c:
                    v5 = (unsigned int (32 bits)[2])0;
                    v17 = sub_14001a5c0(v10, 1, v5);
                    if (v17)
                    {
                        sub_14001a200();
                        v44 = (unsigned int)(v5 - 1);
                        v45 = v44;
                        if ((int)v44 >= 0)
                        {
                            do
                            {
                                v46 = v45;
                                v0 = NULL;
                                SetWindowPos(*(long long *)((char *)v17 + 8 * v46), NULL, 0, 0, (unsigned int)v0, 0, 16387);
                                v45 = v46 - 1;
                            } while (!(v46 - 1 >> 63 & 1));
                        }
                        v5 = (unsigned int (32 bits)[2])0;
                        if (GetWindowThreadProcessId(*(long long *)v17, v5))
                            AllowSetForegroundWindow(v5);
                        SetForegroundWindow(*(long long *)v17);
LABEL_14001aeb5:
                        v48 = GetProcessHeap();
                        goto LABEL_14001b28d;
                    }
                }
            }
            else
            {
LABEL_14001b123:
                v5 = (unsigned int (32 bits)[2])0;
                v17 = sub_14001a5c0(v10, v10->field_30, v5);
                if (v17)
                {
                    if (IsIconic(*(long long *)v17))
                        ShowWindowAsync(*(long long *)v17, SW_RESTORE);
                    v49 = GetLastActivePopup(*(long long *)v17);
                    if (!IsWindow(v49))
                    {
                        MessageBeep(MB_APPLMODAL);
                        HeapFree(GetProcessHeap(), HEAP_NONE, v17);
                        v10->field_20 = 0;
                        return;
                    }
                    else if (((unsigned int)(GetWindowLongW(v49, 0xfffffff0)) >> 27 & 1) != 1)
                    {
                        SwitchToThisWindow(v49, 1);
                        if (g_14002e540 & 1)
                            ShowWindow(g_14002e5b0, SW_MINIMIZE);
                    }
                    else
                    {
                        MessageBeep(MB_APPLMODAL);
                    }
LABEL_14001b27e:
                    v48 = GetProcessHeap();
LABEL_14001b28d:
                    HeapFree(v48, HEAP_NONE, v17);
                }
            }
        }
        else
        {
            v5 = (unsigned int (32 bits)[2])0;
            v17 = sub_14001a5c0(v10, v10->field_30, v5);
            if (v17)
                sub_14001a200();
            v21 = GetDesktopWindow();
            v22 = MDITILE_HORIZONTAL;
LABEL_14001b25e:
            v0 = v17;
            TileWindows(v21, v22, NULL, v5, v0);
LABEL_14001b279:
            if (v17)
                goto LABEL_14001b27e;
        }
    }
    *(unsigned int *)&v0 = i;
    sub_1400214a0(sub_140013a04() & 0xffffffff, 0, v9, 0, v0);
LABEL_14001b2b7:
    v10->field_20 = i;
    return;
}

