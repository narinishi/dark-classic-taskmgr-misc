/*
 * taskmgr-dark-neo.exe
 * label: GetMenu
 * function: 0x140005cc4
 * site: 0x140005cd1 sites=0x140005cd1
 */

extern unsigned int g_14002e228;
extern unsigned int g_14002e22c;
extern char g_14002e244;
extern char g_14002e248;
extern char g_14002e24c;
extern char g_14002e250;
extern char g_14002e254;
extern char g_14002e258;
extern char g_14002e25c;
extern unsigned int g_14002e540;
extern HWND g_14002e5b0;

void sub_140005cc4(void)
{
    HMENU v1;  // rbx

    v1 = GetMenu(g_14002e5b0);
    if (!v1)
        return;
    CheckMenuRadioItem(v1, 60000, 60067, g_14002e228 + 60000, 0);
    CheckMenuRadioItem(v1, 40022, 40025, g_14002e22c + 40022, 0);
    CheckMenuItem(v1, 40006, (g_14002e540 & 4) * 2);
    CheckMenuItem(v1, 40007, (g_14002e540 & 1) * 8);
    CheckMenuItem(v1, 40056, g_14002e540 & 8);
    CheckMenuItem(v1, 40099, (g_14002e540 & 16) >> 1);
    CheckMenuItem(v1, 40065, (g_14002e540 & 32) >> 2);
    DeleteMenu(v1, 40098, MF_UNHILITE);
    CheckMenuItem(v1, 3220, (g_14002e540 & 128) >> 4);
    CheckMenuItem(v1, 2408, (0 < (unsigned int)*(int *)&g_14002e258 ? 8 : 0));
    CheckMenuItem(v1, 2407, (0 < (unsigned int)*(int *)&g_14002e244 ? 8 : 0));
    CheckMenuItem(v1, 2401, (0 < (unsigned int)*(int *)&g_14002e248 ? 8 : 0));
    CheckMenuItem(v1, 2402, (0 < (unsigned int)*(int *)&g_14002e24c ? 8 : 0));
    CheckMenuItem(v1, 2403, (0 < (unsigned int)*(int *)&g_14002e250 ? 8 : 0));
    CheckMenuItem(v1, 2405, (0 < (unsigned int)*(int *)&g_14002e254 ? 8 : 0));
    CheckMenuItem(v1, 2410, (0 < (unsigned int)*(int *)&g_14002e25c ? 8 : 0));
    return;
}

