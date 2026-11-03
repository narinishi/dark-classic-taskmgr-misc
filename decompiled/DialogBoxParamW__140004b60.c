/*
 * taskmgr-dark-neo.exe
 * label: DialogBoxParamW
 * function: 0x140004b60
 * site: 0x140004dbf sites=0x140004dbf
 */

extern HINSTANCE g_14002e5a0;
extern HWND g_14002e5b0;

void sub_140004b60(unsigned long a0)
{
    HICON v6;  // rsi
    unsigned int v7;  // eax
    unsigned long long *v16;  // rax
    unsigned int v8;  // cc_dep1
    unsigned int v9;  // cc_dep1
    unsigned int v11;  // cc_dep1
    unsigned int v12;  // edi
    unsigned int v14;  // eax
    HMODULE v15;  // rax
    enum IMAGE_FLAGS v0;  // [bp-0x670], Other Possible Types: unsigned long
    int v1[4];  // [bp-0x658], Other Possible Types: unsigned int
    WCHAR v2[264];  // [bp-0x648]
    WCHAR v3[264];  // [bp-0x438]
    Char v4[528];  // [bp-0x228]

    v0 = LR_DEFAULTSIZE;
    v6 = LoadImageW(g_14002e5a0, 0x6b, IMAGE_ICON, 0, 0, v0);
    if (!((char *)v6 + 1 & 0xfffffffffffffffe))
    {
        v7 = (unsigned long long)GetLastError();
        if ((int)v7 > 0)
        {
            if ((int)(v7 & 0xffff | 0x80070000) < 0)
                goto LABEL_140004dcb;
        }
        else
        {
            if ((int)v7 < 0)
                goto LABEL_140004dcb;
        }
    }
    if (LoadStringW(g_14002e5a0, 10001, v3, 260) <= 0)
    {
        v8 = (unsigned long long)GetLastError();
        if (!v8)
            goto LABEL_140004dcb;
        if ((int)v8 > 0)
        {
            if ((int)(v8 & 0xffff | 0x80070000) >= 0)
                goto LABEL_140004c3b;
        }
        else
        {
            if ((int)v8 >= 0)
                goto LABEL_140004c3b;
        }
    }
    else
    {
LABEL_140004c3b:
        if (LoadStringW(g_14002e5a0, 10002, v2, 260) <= 0)
        {
            v9 = (unsigned long long)GetLastError();
            if (!v9)
                goto LABEL_140004dcb;
            if ((int)v9 > 0)
            {
                if ((int)(v9 & 0xffff | 0x80070000) >= 0)
                    goto LABEL_140004c83;
            }
            else
            {
                if ((int)v9 >= 0)
                    goto LABEL_140004c83;
            }
        }
        else
        {
LABEL_140004c83:
            if (!GetCurrentDirectoryW(260, v4))
            {
                v11 = (unsigned long long)GetLastError();
                if (!v11)
                    goto LABEL_140004dcb;
                if ((int)v11 > 0)
                {
                    if ((int)(v11 & 0xffff | 0x80070000) >= 0)
                        goto LABEL_140004cc1;
                }
                else
                {
                    if ((int)v11 >= 0)
                        goto LABEL_140004cc1;
                }
            }
            else
            {
LABEL_140004cc1:
                v12 = ((int)(sub_140005bdc(0, 1)) >> 31 & 0xffffffc0) + 84;
                if ((char)v12 & 64)
                {
                    v1 = 0;
                    if (!IsWow64Process(GetCurrentProcess(), v1))
                    {
                        v14 = (unsigned long long)GetLastError();
                        if ((int)v14 > 0)
                        {
                            if ((int)(v14 & 0xffff | 0x80070000) < 0)
                                goto LABEL_140004d27;
                        }
                        else
                        {
                            if ((int)v14 < 0)
                                goto LABEL_140004d27;
                        }
                    }
                    if (!v1)
                        goto LABEL_140004d2c;
LABEL_140004d27:
                    v12 &= 0xffffffbf;
                }
LABEL_140004d2c:
                v15 = GetModuleHandleA("shell32.dll");
                if (!v15 || (v16 = GetProcAddress(v15, 0x3d), !v16 || (v0 = _INSERT(CONCAT(v0, 0), 0, v12), (int)v16(g_14002e5b0, v6, v4, v3, v2, v0) < 0 && (unsigned int)(unsigned long long)GetLastError() == 120)))
                    DialogBoxParamW(g_14002e5a0, 0x8c, g_14002e5b0, sub_140004e20, NULL);
            }
        }
    }
LABEL_140004dcb:
    if (v6)
        DestroyIcon(v6);
    return;
}

