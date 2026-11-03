   000000014001893d  call       0x1400214a0
   0000000140018942  mov        rcx, qword ptr [rsp + 0x240]
   000000014001894a  xor        rcx, rsp
   000000014001894d  call       0x140022220
   0000000140018952  mov        rbx, qword ptr [rsp + 0x290]
   000000014001895a  add        rsp, 0x250
   0000000140018961  pop        r15
   0000000140018963  pop        r14
   0000000140018965  pop        rdi
   0000000140018966  pop        rsi
   0000000140018967  pop        rbp
   0000000140018968  ret        
   0000000140018969  int3       
   000000014001896a  int3       
   000000014001896b  int3       
   000000014001896c  int3       
   000000014001896d  int3       
   000000014001896e  int3       
   000000014001896f  int3       
   0000000140018970  sub        rsp, 0xa8
   0000000140018977  mov        eax, edx
   0000000140018979  sub        eax, 0xdaf
   000000014001897e  je         0x1400189d1
   0000000140018980  sub        eax, 5
   0000000140018983  je         0x140018998
   0000000140018985  sub        eax, 1
   0000000140018988  je         0x140018998
   000000014001898a  sub        eax, 1
   000000014001898d  je         0x140018998
   000000014001898f  cmp        eax, 1
   0000000140018992  jne        0x140018a4c
   0000000140018998  mov        edx, edx
   000000014001899a  lea        r8, [rip + 0x1553f]
   00000001400189a1  lea        rcx, [rip + 0xb8]
   00000001400189a8  call       qword ptr [rip + 0xc571]
   00000001400189af  nop        dword ptr [rax + rax]
   00000001400189b4  test       eax, eax
   00000001400189b6  jne        0x140018a4c
   00000001400189bc  xor        ecx, ecx
   00000001400189be  add        rsp, 0xa8
   00000001400189c5  jmp        qword ptr [rip + 0xbdec]
   00000001400189cc  int3       
   00000001400189cd  int3       
   00000001400189ce  int3       
   00000001400189cf  int3       
   00000001400189d0  int3       
   00000001400189d1  xor        edx, edx
   00000001400189d3  lea        rcx, [rsp + 0x30]
   00000001400189d8  lea        r8d, [rdx + 0x70]
   00000001400189dc  call       0x140001a86
   00000001400189e1  lea        rax, [rip + 0xd3d0]
   00000001400189e8  mov        dword ptr [rsp + 0x30], 0x70
   00000001400189f0  mov        qword ptr [rsp + 0x40], rax
   00000001400189f5  lea        rcx, [rsp + 0x30]
   00000001400189fa  lea        rax, [rip + 0xd60f]
   0000000140018a01  mov        dword ptr [rsp + 0x34], 0x600
   0000000140018a09  mov        qword ptr [rsp + 0x48], rax
   0000000140018a0e  mov        rax, qword ptr [rip + 0x15b9b]
   0000000140018a15  mov        qword ptr [rsp + 0x38], rax
   0000000140018a1a  mov        dword ptr [rsp + 0x60], 1
>> 0000000140018a22  call       qword ptr [rip + 0x185f7]
   0000000140018a29  nop        dword ptr [rax + rax]
   0000000140018a2e  call       0x140013a04
   0000000140018a33  and        dword ptr [rsp + 0x20], 0
   0000000140018a38  xor        r9d, r9d
   0000000140018a3b  mov        ecx, eax
   0000000140018a3d  mov        r8d, 0xdaf
   0000000140018a43  lea        edx, [r9 + 2]
   0000000140018a47  call       0x1400214a0
   0000000140018a4c  add        rsp, 0xa8
   0000000140018a53  ret        
   0000000140018a54  int3       
   0000000140018a55  int3       
   0000000140018a56  int3       
   0000000140018a57  int3       
   0000000140018a58  int3       
   0000000140018a59  int3       
   0000000140018a5a  int3       
   0000000140018a5b  int3       
   0000000140018a5c  int3       
   0000000140018a5d  int3       
   0000000140018a5e  int3       
   0000000140018a5f  int3       
   0000000140018a60  push       rbx
   0000000140018a62  sub        rsp, 0x20
   0000000140018a66  mov        rbx, rdx
   0000000140018a69  call       qword ptr [rip + 0xc498]
   0000000140018a70  nop        dword ptr [rax + rax]
   0000000140018a75  mov        rcx, qword ptr [rip + 0x143f4]
   0000000140018a7c  mov        edx, ebx
   0000000140018a7e  add        rsp, 0x20
   0000000140018a82  pop        rbx
   0000000140018a83  jmp        0x1400187bc
   0000000140018a88  int3       
   0000000140018a89  int3       
   0000000140018a8a  int3       
   0000000140018a8b  int3       
   0000000140018a8c  int3       
   0000000140018a8d  int3       
   0000000140018a8e  int3       
   0000000140018a8f  int3       
   0000000140018a90  mov        qword ptr [rsp + 0x20], rbx
   0000000140018a95  push       rbp
   0000000140018a96  push       rsi
   0000000140018a97  push       rdi
   0000000140018a98  push       r12
   0000000140018a9a  push       r13
   0000000140018a9c  push       r14
   0000000140018a9e  push       r15
   0000000140018aa0  sub        rsp, 0x50
   0000000140018aa4  mov        rax, qword ptr [rip + 0x13a55]
   0000000140018aab  xor        rax, rsp
   0000000140018aae  mov        qword ptr [rsp + 0x48], rax
   0000000140018ab3  lea        rdi, [rcx + 0x28]
   0000000140018ab7  mov        rsi, rcx
   0000000140018aba  xor        r13d, r13d
   0000000140018abd  mov        rcx, rdi
   0000000140018ac0  mov        r12d, r8d
   0000000140018ac3  mov        dword ptr [rsp + 0x30], r13d
   0000000140018ac8  mov        r15d, edx
   0000000140018acb  call       qword ptr [rip + 0xc6ce]
   0000000140018ad2  nop        dword ptr [rax + rax]
   0000000140018ad7  mov        rcx, qword ptr [rsi + 0x18]
   0000000140018adb  test       eax, eax
   0000000140018add  je         0x140018b35
   0000000140018adf  lea        rdx, [rsp + 0x30]
   0000000140018ae4  call       0x140018150
   0000000140018ae9  mov        rcx, rdi
   0000000140018aec  test       rax, rax
   0000000140018aef  jne        0x140018b02
   0000000140018af1  call       qword ptr [rip + 0xc6c8]
   0000000140018af8  nop        dword ptr [rax + rax]
   0000000140018afd  jmp        0x140018c71
   0000000140018b02  mov        rax, qword ptr [rax + 0x18]
   0000000140018b06  mov        ebx, dword ptr [rax + 0x14]
   0000000140018b09  call       qword ptr [rip + 0xc6b0]
   0000000140018b10  nop        dword ptr [rax + rax]
   0000000140018b15  mov        edi, 1
   0000000140018b1a  mov        eax, edi
   0000000140018b1c  sub        eax, ebx
   0000000140018b1e  neg        eax
   0000000140018b20  mov        eax, dword ptr [rsp + 0x30]
   0000000140018b24  lea        ebp, [rdi + 2]
   0000000140018b27  sbb        r14d, r14d
   0000000140018b2a  and        r14d, ebp
   0000000140018b2d  cmp        ebx, edi
   0000000140018b2f  cmovne     ebp, r13d
   0000000140018b33  jmp        0x140018b85
   0000000140018b35  xor        r9d, r9d
   0000000140018b38  xor        r8d, r8d
