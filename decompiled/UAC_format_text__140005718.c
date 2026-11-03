/* UAC_format_text @ 0x140005718 (site 0x140005718) */

unsigned int sub_140005718(unsigned short *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, ...)
{
    unsigned long long idx;  // rsi
    unsigned int v4;  // edi
    unsigned int v5;  // eax
    unsigned long long v6;  // rax
    unsigned long long v1;  // [bp+0x18]
    unsigned long long v2;  // [bp+0x20]

    v1 = a2;
    v2 = a3;
    if (a1 - 1 > 0x7ffffffe)
    {
        if (!a1)
            return 2147942487;
        *a0 = 0;
        return 2147942487;
    }
    else
    {
        idx = a1 - 1;
        v4 = 0;
        v5 = _vsnwprintf();
        if ((int)v5 < 0 || (v6 = v5, v6 > idx))
        {
            v4 = 2147942522;
        }
        else if (v6 != idx)
        {
            return 0;
        }
        a0[idx] = 0;
        return v4;
    }
}

