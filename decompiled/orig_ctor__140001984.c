/*
 * taskmgr-dark-neo.exe
 * label: orig_ctor
 * function: 0x140001984
 * site: 0x140001984
 */

typedef struct FILETIME {
    unsigned int dwLowDateTime;
    unsigned int dwHighDateTime;
} FILETIME;

extern unsigned long long g_14002c500;
extern unsigned long long g_14002c540;

void _security_init_cookie(void)
{
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    FILETIME v0;  // [bp+0x8], Other Possible Types: unsigned long, unsigned long long
    long long v1;  // [bp+0x10], Other Possible Types: unsigned long long
    FILETIME v2;  // [bp+0x18], Other Possible Types: unsigned long long

    v2 = 0;
    v1 = 0;
    v3 = g_14002c500;
    if (v3 == 47936899621426)
    {
        GetSystemTimeAsFileTime(&v2);
        v0 = v2;
        v0 = (unsigned long long)(v0 ^ GetCurrentProcessId() & 0xffffffff);
        v0 ^= GetCurrentThreadId() & 0xffffffff;
        v0 ^= (GetTickCount() & 0xffffffff) * 0x1000000;
        v0 = GetTickCount() & 0xffffffff ^ v0 ^ &v0;
        QueryPerformanceCounter(&v1);
        v4 = ((unsigned int)v1 * 0x100000000 ^ v1 ^ v0) & 0xffffffffffff;
        v3 = v4;
        if (v3 == 47936899621426)
        {
            v3 = 47936899621427;
            v4 = 47936899621427;
        }
        g_14002c500 = v4;
    }
    g_14002c540 = ~v3;
    return;
}

