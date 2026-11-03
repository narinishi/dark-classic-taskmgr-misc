   00000001400168e3  xor        rcx, rsp
   00000001400168e6  call       0x140022220
   00000001400168eb  lea        r11, [rsp + 0x280]
   00000001400168f3  mov        rbx, qword ptr [r11 + 0x38]
   00000001400168f7  mov        rsi, qword ptr [r11 + 0x40]
   00000001400168fb  mov        rdi, qword ptr [r11 + 0x48]
   00000001400168ff  mov        rsp, r11
   0000000140016902  pop        r15
   0000000140016904  pop        r14
   0000000140016906  pop        r13
   0000000140016908  pop        r12
   000000014001690a  pop        rbp
   000000014001690b  ret        
   000000014001690c  int3       
   000000014001690d  mov        eax, 0x80004005
   0000000140016912  jmp        0x1400168dc
   0000000140016914  int3       
   0000000140016915  int3       
   0000000140016916  int3       
   0000000140016917  int3       
   0000000140016918  int3       
   0000000140016919  int3       
   000000014001691a  int3       
   000000014001691b  int3       
   000000014001691c  mov        qword ptr [rsp + 0x10], rbx
   0000000140016921  push       rbp
   0000000140016922  lea        rbp, [rsp - 0x1d0]
   000000014001692a  sub        rsp, 0x2d0
   0000000140016931  mov        rax, qword ptr [rip + 0x15bc8]
   0000000140016938  xor        rax, rsp
   000000014001693b  mov        qword ptr [rbp + 0x1c0], rax
   0000000140016942  and        qword ptr [rsp + 0x30], 0
   0000000140016948  lea        r8, [rbp - 0x50]
   000000014001694c  call       0x140014cf0
   0000000140016951  mov        ebx, eax
   0000000140016953  test       eax, eax
   0000000140016955  js         0x140016a06
   000000014001695b  and        qword ptr [rsp + 0x20], 0
   0000000140016961  lea        r8, [rsp + 0x30]
   0000000140016966  xor        r9d, r9d
   0000000140016969  lea        rcx, [rbp - 0x50]
   000000014001696d  xor        edx, edx
   000000014001696f  call       qword ptr [rip + 0xe6da]
   0000000140016976  nop        dword ptr [rax + rax]
   000000014001697b  mov        ebx, eax
   000000014001697d  test       eax, eax
   000000014001697f  js         0x140016a06
   0000000140016985  xor        edx, edx
   0000000140016987  lea        rcx, [rsp + 0x40]
   000000014001698c  lea        r8d, [rdx + 0x70]
   0000000140016990  call       0x140001a86
   0000000140016995  lea        rax, [rip + 0xf404]
   000000014001699c  mov        dword ptr [rsp + 0x40], 0x70
   00000001400169a4  mov        qword ptr [rsp + 0x50], rax
   00000001400169a9  lea        rcx, [rsp + 0x40]
   00000001400169ae  mov        rax, qword ptr [rsp + 0x30]
   00000001400169b3  mov        qword ptr [rbp - 0x80], rax
   00000001400169b7  mov        rax, qword ptr [rip + 0x17bf2]
   00000001400169be  mov        qword ptr [rsp + 0x48], rax
   00000001400169c3  mov        dword ptr [rsp + 0x44], 0x400c
>> 00000001400169cb  call       qword ptr [rip + 0x1a64e]
   00000001400169d2  nop        dword ptr [rax + rax]
   00000001400169d7  mov        rcx, qword ptr [rsp + 0x30]
   00000001400169dc  call       qword ptr [rip + 0xe675]
   00000001400169e3  nop        dword ptr [rax + rax]
   00000001400169e8  mov        rcx, qword ptr [rip + 0x17bc1]
   00000001400169ef  xor        r9d, r9d
   00000001400169f2  xor        r8d, r8d
   00000001400169f5  mov        edx, 0x86
   00000001400169fa  call       qword ptr [rip + 0xde77]
   0000000140016a01  nop        dword ptr [rax + rax]
   0000000140016a06  mov        eax, ebx
   0000000140016a08  mov        rcx, qword ptr [rbp + 0x1c0]
   0000000140016a0f  xor        rcx, rsp
   0000000140016a12  call       0x140022220
   0000000140016a17  mov        rbx, qword ptr [rsp + 0x2e8]
   0000000140016a1f  add        rsp, 0x2d0
   0000000140016a26  pop        rbp
   0000000140016a27  ret        
   0000000140016a28  int3       
   0000000140016a29  int3       
   0000000140016a2a  int3       
   0000000140016a2b  int3       
   0000000140016a2c  int3       
   0000000140016a2d  int3       
   0000000140016a2e  int3       
   0000000140016a2f  int3       
   0000000140016a30  mov        rax, rsp
   0000000140016a33  mov        qword ptr [rax + 0x10], rbx
   0000000140016a37  mov        qword ptr [rax + 0x18], rsi
   0000000140016a3b  mov        qword ptr [rax + 0x20], rdi
   0000000140016a3f  push       rbp
   0000000140016a40  push       r14
   0000000140016a42  push       r15
   0000000140016a44  lea        rbp, [rax - 0x5f]
   0000000140016a48  sub        rsp, 0x90
   0000000140016a4f  mov        rax, qword ptr [rip + 0x15aaa]
   0000000140016a56  xor        rax, rsp
   0000000140016a59  mov        qword ptr [rbp + 0x37], rax
   0000000140016a5d  mov        rdi, rcx
   0000000140016a60  lea        rdx, [rbp + 0x27]
   0000000140016a64  mov        rcx, qword ptr [rcx + 8]
   0000000140016a68  xorps      xmm0, xmm0
   0000000140016a6b  movups     xmmword ptr [rbp + 0x27], xmm0
   0000000140016a6f  call       qword ptr [rip + 0xdfc2]
   0000000140016a76  nop        dword ptr [rax + rax]
   0000000140016a7b  mov        ecx, 3
   0000000140016a80  call       qword ptr [rip + 0xdc89]
   0000000140016a87  nop        dword ptr [rax + rax]
   0000000140016a8c  mov        rsi, rax
   0000000140016a8f  test       rax, rax
   0000000140016a92  je         0x140016c5a
   0000000140016a98  mov        rcx, qword ptr [rdi + 8]
   0000000140016a9c  xorps      xmm0, xmm0
   0000000140016a9f  mov        edx, 0x3f2
   0000000140016aa4  movups     xmmword ptr [rbp - 9], xmm0
   0000000140016aa8  call       qword ptr [rip + 0xdf61]
   0000000140016aaf  nop        dword ptr [rax + rax]
   0000000140016ab4  mov        rcx, rax
   0000000140016ab7  lea        rdx, [rbp - 9]
   0000000140016abb  mov        rbx, rax
   0000000140016abe  call       qword ptr [rip + 0xdc03]
   0000000140016ac5  nop        dword ptr [rax + rax]
   0000000140016aca  mov        rdx, qword ptr [rdi + 8]
   0000000140016ace  lea        r8, [rbp - 9]
   0000000140016ad2  mov        r9d, 2
   0000000140016ad8  xor        ecx, ecx
   0000000140016ada  call       qword ptr [rip + 0xdf27]
   0000000140016ae1  nop        dword ptr [rax + rax]
   0000000140016ae6  mov        ecx, dword ptr [rip + 0x17a88]
   0000000140016aec  xor        r8d, r8d
   0000000140016aef  mov        r14d, dword ptr [rbp + 0x33]
   0000000140016af3  add        ecx, ecx
   0000000140016af5  mov        r15d, dword ptr [rbp + 0x2f]
   0000000140016af9  sub        r14d, ecx
   0000000140016afc  sub        r14d, dword ptr [rbp + 3]
   0000000140016b00  sub        r15d, ecx
   0000000140016b03  mov        ecx, dword ptr [rbp - 5]
   0000000140016b06  mov        rdx, rbx
   0000000140016b09  sub        r15d, dword ptr [rbp - 1]
   0000000140016b0d  add        ecx, r14d
   0000000140016b10  mov        r9d, dword ptr [rbp - 9]
   0000000140016b14  mov        dword ptr [rsp + 0x38], 0x15
   0000000140016b1c  add        r9d, r15d
   0000000140016b1f  and        dword ptr [rsp + 0x30], 0
   0000000140016b24  and        dword ptr [rsp + 0x28], 0
   0000000140016b29  mov        dword ptr [rsp + 0x20], ecx
   0000000140016b2d  mov        rcx, rsi
   0000000140016b30  call       qword ptr [rip + 0xdbe1]
   0000000140016b37  nop        dword ptr [rax + rax]
