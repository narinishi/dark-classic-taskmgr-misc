/*
 * taskmgr-dark-neo.exe
 * label: orig_ret
 * function: 0x140001170
 * site: 0x1400011c0
 */

extern long long g_14002c808;
extern unsigned int g_14002c80c;
extern long long g_14002c810;
extern long long g_14002c818;
extern unsigned int g_14002c824;
extern unsigned int g_14002cdb4;
extern unsigned int g_14002cdb8;

long long sub_140001170(void)
{
    g_14002c824 = g_14002cdb8;
    g_14002c80c = __wgetmainargs(&g_14002c808, &g_14002c810, &g_14002c818, g_14002cdb4, &g_14002c824);
    return g_14002c80c;
}

