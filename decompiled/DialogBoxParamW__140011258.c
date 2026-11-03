/*
 * taskmgr-dark-neo.exe
 * label: DialogBoxParamW
 * function: 0x140011258
 * site: 0x14001153e sites=0x14001153e,0x140011600
 */

typedef struct IO_STATUS_BLOCK {
    union {
        int Status;
        void* Pointer;
    } Anonymous;
    UIntPtr Information;
} IO_STATUS_BLOCK;

typedef struct st_140011258_0 {
    unsigned int field_0;
    char padding_4[4];
    int *field_8;
    HANDLE field_10;
} st_140011258_0;

typedef struct st_140011258_1 {
    unsigned int field_0;
    char padding_4[28];
    unsigned long long field_20;
} st_140011258_1;

extern enum PROCESS_ACCESS_RIGHTS g_140025e58;
extern HINSTANCE g_14002e5a0;
extern void g_14002e5b0;

int sub_140011258(unsigned int a0, unsigned long a1, PWSTR a2)
{
    unsigned int v8;  // r15d
    unsigned int v9;  // ebx
    unsigned short *v20;  // rax
    HANDLE v21;  // r14
    HANDLE v22;  // rax
    HANDLE count;  // rax
    unsigned int v24;  // eax
    unsigned int v26;  // eax
    unsigned int v27;  // eax
    st_140011258_0 *v10;  // rsi
    enum PROCESS_ACCESS_RIGHTS *v11;  // r14
    unsigned int v12;  // edi
    HANDLE v13;  // rax
    unsigned int v14;  // r14d
    st_140011258_1 *v15;  // rax
    st_140011258_1 *v16;  // rdi
    char v0;  // [bp-0x288]
    int v1;  // [bp-0x284], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x280]
    PWSTR v3;  // [bp-0x278], Other Possible Types: unsigned int (32 bits)[2]
    IO_STATUS_BLOCK v4;  // [bp-0x270], Other Possible Types: uint128_t
    unsigned short v5;  // [bp-0x258]
    WCHAR v6[264];  // [bp-0x258]

    v8 = 0;
    v3 = a2;
    v2 = 0;
    v5 = 0;
    v9 = 14;
    v10 = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, 0x18);
    if (v10)
    {
        v10->field_0 = a0;
        v11 = &g_140025e58;
        v10->field_8 = NULL;
        v12 = 0;
        do
        {
            if (v12 > 3)
            {
                v9 = (unsigned long long)GetLastError();
                goto LABEL_14001161c;
            }
        } while ((v13 = OpenProcess(*v11, 0, a0), v12 += 1, v11 += 1, v10->field_8 = v13, !v13));
        v14 = 0;
        v15 = sub_140012604();
        v16 = v15;
        if (v15)
        {
            while (1)
            {
                if (v15[2].field_0 != a0 || a1 != v15->field_20)
                {
                    if (!v15->field_0)
                        break;
                    v8 += v15->field_0;
                    v15 = v8 + (char *)v16;
                }
                else
                {
                    v14 = 1;
                    break;
                }
            }
            HeapFree(GetProcessHeap(), HEAP_NONE, v16);
            if (!v14)
                goto LABEL_1400115c8;
            if (GetTempPath2W(260, v6) && PathAppendW(v6, v3))
            {
                v1 = 0;
                if (IsWow64Process(v10->field_8, &v1) && v1)
                {
                    v20 = StrStrW(v6, " ");
                    if (v20)
                        *v20 = 0;
                }
                PathRemoveExtensionW(v6);
                if (!PathAddExtensionW(v6, "."))
                    sub_14000f304(v6, 260, ".");
                ordinal.75.shell32.dll(v6, v6, 0, 0);
                v21 = CreateFileW(v6, 0x40010000, FILE_SHARE_NONE, NULL, CREATE_ALWAYS, SECURITY_ANONYMOUS, NULL);
                if (v21 != 0xffffffffffffffff)
                {
                    v22 = GetCurrentProcess();
                    if (DuplicateHandle(GetCurrentProcess(), v21, v22, &v10->field_10, 0, 0, DUPLICATE_SAME_ACCESS) && !(v3 = 0, count = CreateThread(NULL, NULL, sub_140017a20, v10, THREAD_CREATE_RUN_IMMEDIATELY, v3), !count))
                    {
                        v2 = 1;
                        v9 = (unsigned int)DialogBoxParamW(g_14002e5a0, 0x1bb, *(long long *)&g_14002e5b0, sub_140011980, count);
                        if (v9 == 1223)
                        {
                            v0 = 1;
                            v4 = 0;
                            NtSetInformationFile(v21, &v4, &v0, 1, FileDispositionInformation);
                        }
                        CloseHandle(count);
                    }
                    else
                    {
                        v9 = (unsigned long long)GetLastError();
                    }
                    CloseHandle(v21);
                }
                else
                {
                    v9 = (unsigned long long)GetLastError();
                }
            }
        }
        else
        {
LABEL_1400115c8:
            v9 = 6;
        }
        if (!v2)
        {
LABEL_14001161c:
            if (v10->field_8)
                CloseHandle(v10->field_8);
            if (v10->field_10)
                CloseHandle(v10->field_10);
            HeapFree(GetProcessHeap(), HEAP_NONE, v10);
        }
        else if (!v9)
        {
            DialogBoxParamW(g_14002e5a0, 0x1bc, *(long long *)&g_14002e5b0, sub_140011aa0, v6);
            return v24;
        }
        if (v9 == 1223)
            return v26;
    }
    sub_140002414(*(long long *)&g_14002e5b0, 40129, v9);
    return v27;
}

