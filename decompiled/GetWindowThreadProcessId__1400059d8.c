/*
 * taskmgr-dark-neo.exe
 * label: GetWindowThreadProcessId
 * function: 0x1400059d8
 * site: 0x140005b29 sites=0x140005b29
 */

extern HINSTANCE g_14002e5a0;
extern HANDLE g_14002e5c0;

int sub_1400059d8(unsigned int a0)
{
    unsigned int v4;  // eax
    unsigned int v5;  // ebx
    unsigned int v14;  // eax
    unsigned int v15;  // eax
    unsigned int v6;  // eax
    HWND v7;  // rax
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    unsigned int v13;  // eax
    unsigned int v0[2];  // [bp-0x238], Other Possible Types: unsigned int
    UIntPtr v1;  // [bp-0x230], Other Possible Types: unsigned long long
    WCHAR v2[264];  // [bp-0x228]

    v0 = 0;
    v1 = 0;
    g_14002e5c0 = CreateMutexW(NULL, 1, L"Local\\TASKMGR.879e4d63-6c0e-4544-97f2-1244bd3f6de0");
    if (!g_14002e5c0)
    {
        v4 = (unsigned long long)GetLastError();
        v5 = v4;
        if (!v4)
        {
            v5 = 0x80004005;
        }
        else if (!((int)v4 <= 0))
        {
            goto LABEL_140005a3e;
        }
    }
    else
    {
        v4 = (unsigned long long)GetLastError();
        v5 = 0;
        if (v4)
        {
            if ((int)v4 > 0)
            {
LABEL_140005a3e:
                v5 = v4 & 0xffff | 0x80070000;
                goto LABEL_140005a47;
            }
            else
            {
                v5 = v4;
                goto LABEL_140005a47;
            }
        }
    }
LABEL_140005a47:
    if ((int)v5 >= 0)
    {
        return v15;
    }
    else if ((unsigned short)v5 != 183)
    {
        return v14;
    }
    else if (!a0)
    {
        ReleaseMutex(g_14002e5c0);
        return v9;
    }
    else
    {
        WaitForSingleObject(g_14002e5c0, 10000);
        if (LoadStringW(g_14002e5a0, 10003, v2, 260) <= 0)
        {
            v6 = (unsigned long long)GetLastError();
            if (!v6)
                return v13;
            if ((int)v6 > 0)
                v6 = v6 & 0xffff | 0x80070000;
            if ((int)v6 < 0)
                return v12;
        }
        v7 = FindWindowW(0x8002, v2);
        if (!v7)
            return v11;
        GetWindowThreadProcessId(v7, v0);
        AllowSetForegroundWindow(v0);
        if (!SendMessageTimeoutW(v7, 1035, NULL, NULL, SMTO_ABORTIFHUNG, 10000, &v1))
        {
            v8 = (unsigned long long)GetLastError();
            if ((int)v8 > 0)
            {
                if ((int)(v8 & 0xffff | 0x80070000) < 0)
                    return v10;
            }
            else
            {
                if ((int)v8 < 0)
                    return v10;
            }
        }
        if (v1 != 0x40b)
            return v10;
        return v9;
    }
}

