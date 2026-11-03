/*
 * taskmgr-dark-neo.exe
 * label: SetWindowTheme
 * function: 0x14000dae0
 * site: 0x14000db64 sites=0x14000db64
 */

typedef struct st_14000dae0_0 {
    char padding_0[48];
    struct st_14000dae0_1 *field_30;
} st_14000dae0_0;

typedef struct st_14000dae0_1 {
    unsigned long long field_0;
} st_14000dae0_1;

unsigned int sub_14000dae0(unsigned long a0, unsigned int a1, unsigned short a2, IntPtr a3)
{
    st_14000dae0_0 **v1;  // rsi
    HWND v2;  // rbx
    IntPtr v3;  // rdx

    v1 = GetWindowLongPtrW(a0, 16);
    if (!v1)
    {
        if (a1 != 272)
            return 0;
    }
    else
    {
        if (a1 != 272)
        {
            if (a1 != 273)
                return 0;
            if (a2 == 1)
            {
                sub_14000e794(v1);
                sub_14000dc2c(a0);
                sub_14000e970(v1);
                *v1->field_30(v1);
                v3 = 0x1;
            }
            else
            {
                v3 = 0x2;
                if (a2 != 2)
                    return 0;
            }
            EndDialog(a0, v3);
            return 0;
        }
    }
    SetWindowLongPtrW(a0, 16, a3);
    v2 = GetDlgItem(a0, 245);
    SetWindowTheme(v2, L"Explorer", NULL);
    SendMessageW(v2, 4150, NULL, 0x10024);
    sub_14000de6c(a0);
    SetFocus(v2);
    return 0;
}

