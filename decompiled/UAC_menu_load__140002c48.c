/* UAC_menu_load @ 0x140002c48 (site 0x140002c48) */

extern HINSTANCE g_14002e5a0;

HMENU sub_140002c48(unsigned long a0, unsigned short a1)
{
    HMENU v1;  // rbx
    HMENU v2;  // rax

    v1 = LoadMenuW(g_14002e5a0, a1);
    if (!v1)
        return NULL;
    v2 = GetSubMenu(v1, 0);
    if (v2)
        RemoveMenu(v1, 0, MF_BYPOSITION);
    DestroyMenu(v1);
    return v2;
}

