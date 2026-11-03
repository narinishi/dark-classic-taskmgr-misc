   0000000140011afd  int3       
   0000000140011afe  int3       
   0000000140011aff  int3       
   0000000140011b00  int3       
   0000000140011b01  int3       
   0000000140011b02  int3       
   0000000140011b03  int3       
   0000000140011b04  mov        rax, rsp
   0000000140011b07  mov        qword ptr [rax + 8], rbx
   0000000140011b0b  mov        qword ptr [rax + 0x10], rsi
   0000000140011b0f  mov        qword ptr [rax + 0x18], rdi
   0000000140011b13  push       rbp
   0000000140011b14  lea        rbp, [rax - 0x1e8]
   0000000140011b1b  sub        rsp, 0x2e0
   0000000140011b22  mov        rax, qword ptr [rip + 0x1a9d7]
   0000000140011b29  xor        rax, rsp
   0000000140011b2c  mov        qword ptr [rbp + 0x1d0], rax
   0000000140011b33  mov        rsi, qword ptr [rip + 0x1ca76]
   0000000140011b3a  lea        rcx, [rsp + 0x50]
   0000000140011b3f  mov        edi, edx
   0000000140011b41  xor        edx, edx
   0000000140011b43  lea        r8d, [rdx + 0x70]
   0000000140011b47  call       0x140001a86
   0000000140011b4c  and        qword ptr [rsp + 0x40], 0
   0000000140011b52  lea        rdx, [rbp - 0x40]
   0000000140011b56  mov        r8d, 0x104
   0000000140011b5c  xor        ecx, ecx
   0000000140011b5e  call       qword ptr [rip + 0x130eb]
   0000000140011b65  nop        dword ptr [rax + rax]
   0000000140011b6a  test       eax, eax
   0000000140011b6c  jne        0x140011b91
   0000000140011b6e  call       qword ptr [rip + 0x13003]
   0000000140011b75  nop        dword ptr [rax + rax]
   0000000140011b7a  mov        ebx, eax
   0000000140011b7c  test       eax, eax
   0000000140011b7e  jle        0x140011b89
   0000000140011b80  movzx      ebx, ax
   0000000140011b83  or         ebx, 0x80070000
   0000000140011b89  test       ebx, ebx
   0000000140011b8b  js         0x140011ccc
   0000000140011b91  test       edi, edi
   0000000140011b93  mov        dword ptr [rsp + 0x50], 0x70
   0000000140011b9b  lea        rcx, [rip + 0x14216]
   0000000140011ba2  mov        dword ptr [rsp + 0x54], 0x400
   0000000140011baa  lea        rax, [rip + 0x13edf]
   0000000140011bb1  mov        qword ptr [rsp + 0x58], rsi
   0000000140011bb6  cmove      rax, rcx
   0000000140011bba  mov        dword ptr [rbp - 0x80], 1
   0000000140011bc1  mov        rcx, qword ptr [rip + 0x1c9f8]
   0000000140011bc8  mov        qword ptr [rsp + 0x60], rax
   0000000140011bcd  lea        rax, [rbp - 0x40]
   0000000140011bd1  mov        qword ptr [rsp + 0x68], rax
   0000000140011bd6  lea        rax, [rip + 0x141eb]
   0000000140011bdd  mov        qword ptr [rsp + 0x70], rax
   0000000140011be2  test       rcx, rcx
   0000000140011be5  je         0x140011bfb
   0000000140011be7  call       qword ptr [rip + 0x12fba]
   0000000140011bee  nop        dword ptr [rax + rax]
   0000000140011bf3  and        qword ptr [rip + 0x1c9c5], 0
   0000000140011bfb  lea        rcx, [rsp + 0x50]
>> 0000000140011c00  call       qword ptr [rip + 0x1f419]
   0000000140011c07  nop        dword ptr [rax + rax]
   0000000140011c0c  test       eax, eax
   0000000140011c0e  je         0x140011c17
   0000000140011c10  xor        ebx, ebx
   0000000140011c12  jmp        0x140011ccc
   0000000140011c17  call       qword ptr [rip + 0x12f5a]
   0000000140011c1e  nop        dword ptr [rax + rax]
   0000000140011c23  mov        ebx, eax
   0000000140011c25  test       eax, eax
   0000000140011c27  jle        0x140011c32
   0000000140011c29  movzx      ebx, ax
   0000000140011c2c  or         ebx, 0x80070000
   0000000140011c32  test       ebx, ebx
   0000000140011c34  jns        0x140011ccc
   0000000140011c3a  xor        ecx, ecx
   0000000140011c3c  call       0x1400059d8
   0000000140011c41  movzx      eax, bx
   0000000140011c44  mov        r8d, 0x4ec
   0000000140011c4a  cmp        eax, r8d
   0000000140011c4d  jne        0x140011ccc
   0000000140011c4f  and        qword ptr [rsp + 0x30], 0
   0000000140011c55  lea        rax, [rsp + 0x40]
   0000000140011c5a  and        dword ptr [rsp + 0x28], 0
   0000000140011c5f  xor        r9d, r9d
   0000000140011c62  xor        edx, edx
   0000000140011c64  mov        qword ptr [rsp + 0x20], rax
   0000000140011c69  mov        ecx, 0x1300
   0000000140011c6e  call       qword ptr [rip + 0x13023]
   0000000140011c75  nop        dword ptr [rax + rax]
   0000000140011c7a  test       eax, eax
   0000000140011c7c  je         0x140011c82
   0000000140011c7e  xor        ebx, ebx
   0000000140011c80  jmp        0x140011ca3
   0000000140011c82  call       qword ptr [rip + 0x12eef]
   0000000140011c89  nop        dword ptr [rax + rax]
   0000000140011c8e  mov        ebx, eax
   0000000140011c90  test       eax, eax
   0000000140011c92  je         0x140011cc7
   0000000140011c94  jle        0x140011c9f
   0000000140011c96  movzx      ebx, ax
   0000000140011c99  or         ebx, 0x80070000
   0000000140011c9f  test       ebx, ebx
   0000000140011ca1  js         0x140011ccc
   0000000140011ca3  mov        rdx, qword ptr [rsp + 0x40]
   0000000140011ca8  lea        r8, [rbp - 0x40]
   0000000140011cac  mov        rcx, qword ptr [rip + 0x1c8fd]
   0000000140011cb3  mov        r9d, 0x10
   0000000140011cb9  call       qword ptr [rip + 0x12b70]
   0000000140011cc0  nop        dword ptr [rax + rax]
   0000000140011cc5  jmp        0x140011ccc
   0000000140011cc7  mov        ebx, 0x80004005
   0000000140011ccc  mov        rcx, qword ptr [rsp + 0x40]
   0000000140011cd1  test       rcx, rcx
   0000000140011cd4  je         0x140011ce2
   0000000140011cd6  call       qword ptr [rip + 0x12f1b]
   0000000140011cdd  nop        dword ptr [rax + rax]
   0000000140011ce2  mov        eax, ebx
   0000000140011ce4  mov        rcx, qword ptr [rbp + 0x1d0]
   0000000140011ceb  xor        rcx, rsp
   0000000140011cee  call       0x140022220
   0000000140011cf3  lea        r11, [rsp + 0x2e0]
   0000000140011cfb  mov        rbx, qword ptr [r11 + 0x10]
   0000000140011cff  mov        rsi, qword ptr [r11 + 0x18]
   0000000140011d03  mov        rdi, qword ptr [r11 + 0x20]
   0000000140011d07  mov        rsp, r11
   0000000140011d0a  pop        rbp
   0000000140011d0b  ret        
   0000000140011d0c  int3       
   0000000140011d0d  int3       
   0000000140011d0e  int3       
   0000000140011d0f  int3       
   0000000140011d10  int3       
   0000000140011d11  int3       
   0000000140011d12  int3       
   0000000140011d13  int3       
   0000000140011d14  mov        rax, rsp
   0000000140011d17  mov        qword ptr [rax + 0x10], rbx
   0000000140011d1b  mov        qword ptr [rax + 0x18], rbp
   0000000140011d1f  push       rsi
   0000000140011d20  push       rdi
   0000000140011d21  push       r14
   0000000140011d23  sub        rsp, 0x60
   0000000140011d27  mov        ebx, dword ptr [rcx + 0x284]
   0000000140011d2d  xorps      xmm0, xmm0
   0000000140011d30  and        dword ptr [rax + 8], 0
   0000000140011d34  add        rbx, rbx
   0000000140011d37  movups     xmmword ptr [rax - 0x48], xmm0
   0000000140011d3b  mov        rsi, r8
   0000000140011d3e  mov        r14, rdx
