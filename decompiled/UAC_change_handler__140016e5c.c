/* UAC_change_handler @ 0x140016e5c (site 0x140016e5c) */

typedef struct st_140014e00_0 {
    char padding_0[8];
    unsigned long long field_8;
} st_140014e00_0;

typedef struct st_140016e5c_0 {
    unsigned int field_0;
    char padding_4[28];
    unsigned long long field_20;
} st_140016e5c_0;

unsigned int sub_140016e5c(st_140014e00_0 *a0, unsigned long long a1, unsigned long a2, unsigned int a3)
{
    unsigned int v3;  // ebx
    unsigned int v4;  // r14d
    HANDLE v5;  // rdi
    unsigned int v6;  // esi
    unsigned int v7;  // ebp
    st_140016e5c_0 *v8;  // rax
    st_140016e5c_0 *v9;  // rbx
    unsigned int v0;  // [bp-0x38]
    HANDLE v1;  // [bp-0x30], Other Possible Types: unsigned long long

    v3 = 0;
    v4 = a1;
    if (sub_140014e00(a0, a1, 40077, 40078, 40079, 0) == 1)
    {
        v5 = OpenProcess(PROCESS_QUERY_INFORMATION, 0, v4);
        if (v5)
        {
            v1 = 0;
            v6 = 0;
            v7 = 0;
            v8 = sub_140012604();
            v9 = v8;
            if (v8)
            {
                while (1)
                {
                    if (v8[2].field_0 != v4 || a2 != v8->field_20)
                    {
                        if (!v8->field_0)
                            break;
                        v7 += v8->field_0;
                        v8 = v7 + (char *)v9;
                    }
                    else
                    {
                        v6 = 1;
                        break;
                    }
                }
                HeapFree(GetProcessHeap(), HEAP_NONE, v9);
                if (!v6)
                    goto LABEL_140016fb0;
                if (OpenProcessToken(v5, TOKEN_ADJUST_DEFAULT, &v1))
                {
                    v0 = a3 == 2;
                    v3 = (!SetTokenInformation(v1, TokenVirtualizationEnabled, &v0, 4) ? (unsigned int)(unsigned long long)GetLastError() : 0);
                    CloseHandle(v1);
                }
                else
                {
                    v3 = (unsigned long long)GetLastError();
                }
            }
            else
            {
LABEL_140016fb0:
                v3 = 6;
            }
            CloseHandle(v5);
        }
        else
        {
            v3 = (unsigned long long)GetLastError();
        }
        if (v3)
            sub_140002414(a0->field_8, 40075, v3);
    }
    return v3;
}

