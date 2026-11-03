/*
 * taskmgr-dark-neo.exe
 * label: CreateWindowExW
 * function: 0x14000be14
 * site: 0x14000bedb sites=0x14000bedb,0x14000bf9d
 */

typedef struct st_14000be14_0 {
    char padding_0[48];
    HWND field_30;
    char padding_38[104];
    struct st_14000be14_1 *field_a0;
    unsigned int field_a8;
} st_14000be14_0;

typedef struct st_14000be14_1 {
    int *field_0;
} st_14000be14_1;

extern WCHAR g_140025b44;

int sub_14000be14(st_14000be14_0 *a0, unsigned int a1)
{
    int v1;  // esi
    st_14000be14_0 *v2;  // r14
    void* len;  // rax
    unsigned int i;  // ecx
    HWND v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long v7;  // rax
    HWND v8;  // rax
    unsigned long long v9;  // rcx

    v1 = 0;
    if (a1 > a0->field_a8)
    {
        v2 = &a0->field_a0;
        v1 = sub_14000bcb0(v2, a1 * 16);
        if (v1 >= 0)
        {
            len = SendMessageW(a0->field_30, 49, NULL, NULL);
            i = a0->field_a8;
            if (i < a1)
            {
                do
                {
                    v5 = CreateWindowExW(WS_EX_CLIENTEDGE, L"BUTTON", &g_140025b44, 1207959563, 0, 0, 0, 0, a0->field_30, i + 2500, NULL, NULL);
                    *(HWND *)(*(long long *)&v2->padding_0[0] + a0->field_a8 * 16 + 8) = v5;
                    v6 = a0->field_a8 * 2;
                    if (!*(long long *)(*(long long *)&v2->padding_0[0] + v6 * 8 + 8))
                        return -2147024882;
                    if (!a0->field_a8)
                    {
                        v7 = GetDC(*(long long *)(*(long long *)&v2->padding_0[0] + v6 * 8 + 8));
                        if (v7)
                        {
                            sub_14000c040(a0, v7);
                            ReleaseDC(*(long long *)(*(long long *)&v2->padding_0[0] + a0->field_a8 * 16 + 8), v7);
                        }
                    }
                    v8 = CreateWindowExW(WS_EX_NOPARENTNOTIFY, L"DavesFrameClass", &g_140025b44, 1073741831, 0, 0, 0, 0, a0->field_30, NULL, NULL, NULL);
                    *(HWND *)(*(long long *)&v2->padding_0[0] + a0->field_a8 * 16) = v8;
                    v9 = a0->field_a8 * 2;
                    if (!*(long long *)(*(long long *)&v2->padding_0[0] + v9 * 8))
                    {
                        DestroyWindow(*(long long *)(*(long long *)&v2->padding_0[0] + v9 * 8 + 8));
                        return -2147024882;
                    }
                    SendMessageW(*(long long *)(*(long long *)&v2->padding_0[0] + v9 * 8), 48, len, NULL);
                    i = a0->field_a8 + 1;
                    a0->field_a8 = i;
                } while (i < a1);
            }
        }
    }
    return v1;
}

