/*
 * taskmgr-dark-neo.exe
 * label: entry
 * function: 0x140001440
 * site: 0x140001440
 */

typedef struct st_140001440_1 {
    unsigned long long field_0;
} st_140001440_1;

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

extern long long g_140025280;
extern long long g_1400252a0;
extern st_140001440_1 *g_1400252a8;
extern st_140001440_1 *g_1400252c0;
extern int g_14002c800;
extern unsigned int g_14002c804;
extern unsigned int g_14002c820;
extern unsigned long long g_14002f1e8;
extern unsigned int g_14002f1f0;
extern st_140001440_1 *g_14002f1f8;
extern char _wcmdln;

long long _start(void)
{
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rsi
    unsigned short *iter;  // rcx
    unsigned short j;  // ax
    unsigned int v23;  // eax
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r14
    unsigned long long v15;  // r15
    unsigned int v16;  // esi
    unsigned long v17;  // gs
    unsigned long long v18;  // 4101
    st_140001440_1 **v19;  // rdi
    unsigned int v20;  // eax
    unsigned int v0;  // [bp-0x98]
    unsigned int v1;  // [bp-0x94]
    unsigned short *v2;  // [bp-0x90], Other Possible Types: unsigned long
    st_140001440_1 **i;  // [bp-0x88]
    STARTUPINFOW v4;  // [bp-0x78]
    unsigned int v5;  // [bp-0x74]
    unsigned long long v6;  // [bp-0x8]
    unsigned long long v7;  // [bp+0x8]
    unsigned long long v8;  // [bp+0x10]
    unsigned long long v9;  // [bp+0x18]
    unsigned long long v10;  // [bp+0x20]

    _security_init_cookie();
    v7 = v11;
    v8 = v12;
    v9 = v13;
    v10 = v14;
    v6 = v15;
    v5 = 0;
    memset(&v4, 0, 100);
    v0 = 0;
    GetStartupInfoW(&v4);
    v16 = 0;
    while (1)
    {
        v18 = InterlockedCompareExchange64(&g_14002f1e8, *(long long *)(*(long long *)(v17 + 48) + 8), 0);
        if (!v18)
        {
            break;
        }
        else if ((0 == v18 ? 0 : v18) == *(long long *)(*(long long *)(v17 + 48) + 8))
        {
            v16 = 1;
            break;
        }
        else
        {
            Sleep(1000);
        }
    }
    if (g_14002f1f0 == 1)
    {
        _amsg_exit(31);
    }
    else if (!g_14002f1f0)
    {
        g_14002f1f0 = 1;
        v19 = &g_1400252a8;
        i = &g_1400252a8;
        v20 = 0;
        for (v1 = 0; v19 < &g_1400252c0; i = v19 + 1)
        {
            if (!v20)
            {
                if (*v19)
                {
                    v20 = (*v19)();
                    v1 = v20;
                }
            }
        }
    }
    else
    {
        g_14002c804 = 1;
    }
    if (g_14002f1f0 == 1)
    {
        _initterm(&g_140025280, &g_1400252a0);
        g_14002f1f0 = 2;
    }
    if (!v16)
        InterlockedExchange64(&g_14002f1e8, 0);
    if (g_14002f1f8 && sub_1400018f0(&g_14002f1f8))
        g_14002f1f8(0, 2, 0);
    iter = *(long long *)&_wcmdln;
    if (*(long long *)&_wcmdln)
    {
        v2 = *(long long *)&_wcmdln;
        while (1)
        {
            j = *iter;
            if (j <= 32 && (!j || !v0))
                break;
            if (j == 0x22)
            {
                v23 = !v0;
                v0 = v23 & 1;
                v0 = v23;
            }
            iter += 1;
            v2 = iter;
        }
        for (; j - 1 <= 31; j = *iter)
        {
            iter += 1;
            v2 = iter;
        }
        g_14002c800 = sub_14000624c();
        if (!g_14002c820)
        {
            exit(g_14002c800); /* do not return */
        }
        else if (!g_14002c804)
        {
            _cexit();
        }
    }
}

