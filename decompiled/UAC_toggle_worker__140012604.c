/* UAC_toggle_worker @ 0x140012604 (site 0x140012604) */

void* sub_140012604(void)
{
    unsigned int v1[2];  // edi
    HANDLE v2;  // rax
    UIntPtr v3;  // r8
    void* v4;  // rbx
    unsigned int v5;  // edi
    unsigned int v0[2];  // [bp+0x8]

    v0 = 0;
    v1 = 0x6400;
    v2 = GetProcessHeap();
    v3 = 0x6400;
    while (1)
    {
        v4 = HeapAlloc(v2, HEAP_NONE, v3);
        if (!v4)
            return NULL;
        v5 = NtQuerySystemInformation(SystemProcessInformation, v4, v1, v0);
        if (!v5)
            return v4;
        HeapFree(GetProcessHeap(), HEAP_NONE, v4);
        if (v5 != 0xc0000004)
            break;
        v1 = v0 + 0x2000 + (v0 >> 4);
        v2 = GetProcessHeap();
        v3 = (unsigned long long)v1;
    }
    if ((int)v5 >= 0)
        return NULL;
    return NULL;
}

