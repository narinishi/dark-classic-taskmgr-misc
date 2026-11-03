/* UAC_dialog_callback @ 0x140015020 (site 0x140015020) */

unsigned int sub_140015020(HWND a0, unsigned int a1, unsigned long long a2)
{
    unsigned long len;  // r8
    unsigned long long v2;  // r9

    if (a1)
    {
        if (a1 != 8)
            return 0;
        if (!a2)
            goto LABEL_14001503b;
        len = a1 - 7;
        v2 = len & 0xffffffff;
    }
    else
    {
LABEL_14001503b:
        v2 = 0;
        len = 1;
    }
    SendMessageW(a0, 1135, len, v2);
    return 0;
}

