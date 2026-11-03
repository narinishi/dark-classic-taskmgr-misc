   00000001400095b0  push       r12
   00000001400095b2  push       r13
   00000001400095b4  push       r14
   00000001400095b6  push       r15
   00000001400095b8  lea        rbp, [rax - 0x5f]
   00000001400095bc  sub        rsp, 0xb0
   00000001400095c3  mov        ebx, edx
   00000001400095c5  mov        rsi, r9
   00000001400095c8  mov        edx, 0xffffffeb
   00000001400095cd  mov        rdi, r8
   00000001400095d0  mov        r12, rcx
   00000001400095d3  call       qword ptr [rip + 0x1b2d6]
   00000001400095da  nop        dword ptr [rax + rax]
   00000001400095df  xor        r15d, r15d
   00000001400095e2  mov        r8, rsi
   00000001400095e5  mov        rdx, rdi
   00000001400095e8  mov        dword ptr [rbp - 0x49], r15d
   00000001400095ec  mov        ecx, ebx
   00000001400095ee  mov        r14, rax
   00000001400095f1  call       0x140002228
   00000001400095f6  lea        r13d, [r15 + 1]
   00000001400095fa  cmp        eax, r13d
   00000001400095fd  jne        0x140009607
   00000001400095ff  mov        rax, r13
   0000000140009602  jmp        0x1400099d5
   0000000140009607  mov        eax, 0x135
   000000014000960c  cmp        ebx, eax
   000000014000960e  ja         0x1400098e4
   0000000140009614  je         0x140009887
   000000014000961a  mov        eax, ebx
   000000014000961c  sub        eax, 5
   000000014000961f  je         0x14000987a
   0000000140009625  sub        eax, 0x26
   0000000140009628  je         0x140009800
   000000014000962e  sub        eax, 0x78
   0000000140009631  je         0x140009907
   0000000140009637  sub        eax, 0x6d
   000000014000963a  je         0x1400096d3
   0000000140009640  cmp        eax, r13d
   0000000140009643  jne        0x1400097f9
   0000000140009649  mov        ebx, 0xdb2
   000000014000964e  cmp        di, bx
   0000000140009651  jne        0x1400097f9
   0000000140009657  mov        edi, 0x70
   000000014000965c  lea        rcx, [rbp - 0x39]
   0000000140009660  mov        r8d, edi
   0000000140009663  xor        edx, edx
   0000000140009665  call       0x140001a86
   000000014000966a  lea        rax, [rip + 0x1c41f]
   0000000140009671  mov        dword ptr [rbp - 0x39], edi
   0000000140009674  mov        qword ptr [rbp - 0x29], rax
   0000000140009678  lea        rcx, [rbp - 0x39]
   000000014000967c  lea        rax, [rip + 0x1c41d]
   0000000140009683  mov        dword ptr [rbp - 0x35], 0x600
   000000014000968a  mov        qword ptr [rbp - 0x21], rax
   000000014000968e  lea        rax, [rip + 0x1c453]
   0000000140009695  mov        qword ptr [rbp - 0x19], rax
   0000000140009699  mov        rax, qword ptr [rip + 0x24f10]
   00000001400096a0  mov        qword ptr [rbp - 0x31], rax
   00000001400096a4  mov        dword ptr [rbp - 9], r13d
>> 00000001400096a8  call       qword ptr [rip + 0x27971]
   00000001400096af  nop        dword ptr [rax + rax]
   00000001400096b4  call       0x140013a04
   00000001400096b9  mov        ecx, eax
   00000001400096bb  mov        dword ptr [rsp + 0x20], r15d
   00000001400096c0  xor        r9d, r9d
   00000001400096c3  lea        edx, [rdi - 0x6d]
   00000001400096c6  mov        r8d, ebx
   00000001400096c9  call       0x1400214a0
   00000001400096ce  jmp        0x1400097f9
   00000001400096d3  mov        r8, rsi
   00000001400096d6  mov        edx, 0xffffffeb
   00000001400096db  mov        rcx, r12
   00000001400096de  call       qword ptr [rip + 0x1b013]
   00000001400096e5  nop        dword ptr [rax + rax]
   00000001400096ea  mov        ebx, 0xfffffff0
   00000001400096ef  mov        rcx, r12
   00000001400096f2  mov        edx, ebx
   00000001400096f4  call       qword ptr [rip + 0x1b32d]
   00000001400096fb  nop        dword ptr [rax + rax]
   0000000140009700  mov        edx, ebx
   0000000140009702  mov        rcx, r12
   0000000140009705  bts        eax, 0x19
   0000000140009709  mov        r8d, eax
   000000014000970c  call       qword ptr [rip + 0x1b31d]
   0000000140009713  nop        dword ptr [rax + rax]
   0000000140009718  lea        r8, [rbp - 0x49]
   000000014000971c  lea        edx, [rbx + 0x12]
   000000014000971f  call       0x14002206c
   0000000140009724  cmp        dword ptr [rbp - 0x49], r15d
   0000000140009728  je         0x140009758
   000000014000972a  mov        edx, 0xdb2
   000000014000972f  mov        rcx, r12
   0000000140009732  call       qword ptr [rip + 0x1b2d7]
   0000000140009739  nop        dword ptr [rax + rax]
   000000014000973e  mov        r9, r13
   0000000140009741  xor        r8d, r8d
   0000000140009744  mov        rcx, rax
   0000000140009747  mov        edx, 0x160c
   000000014000974c  call       qword ptr [rip + 0x1b125]
   0000000140009753  nop        dword ptr [rax + rax]
   0000000140009758  mov        esi, 0xffffffec
   000000014000975d  mov        rcx, r12
   0000000140009760  mov        edx, esi
   0000000140009762  call       qword ptr [rip + 0x1b2bf]
   0000000140009769  nop        dword ptr [rax + rax]
   000000014000976e  bt         eax, 0x16
   0000000140009772  jae        0x1400097f9
   0000000140009778  mov        edx, 0x3ec
   000000014000977d  mov        rcx, r12
   0000000140009780  call       qword ptr [rip + 0x1b289]
   0000000140009787  nop        dword ptr [rax + rax]
   000000014000978c  mov        rcx, rax
   000000014000978f  mov        edx, esi
   0000000140009791  mov        rbx, rax
   0000000140009794  call       qword ptr [rip + 0x1b28d]
   000000014000979b  nop        dword ptr [rax + rax]
   00000001400097a0  mov        edi, 0xffafffff
   00000001400097a5  mov        edx, esi
   00000001400097a7  and        eax, edi
   00000001400097a9  mov        rcx, rbx
   00000001400097ac  mov        r8d, eax
   00000001400097af  call       qword ptr [rip + 0x1b27a]
   00000001400097b6  nop        dword ptr [rax + rax]
   00000001400097bb  mov        edx, 0x3ed
   00000001400097c0  mov        rcx, r12
   00000001400097c3  call       qword ptr [rip + 0x1b246]
   00000001400097ca  nop        dword ptr [rax + rax]
   00000001400097cf  mov        rcx, rax
   00000001400097d2  mov        edx, esi
   00000001400097d4  mov        rbx, rax
   00000001400097d7  call       qword ptr [rip + 0x1b24a]
   00000001400097de  nop        dword ptr [rax + rax]
   00000001400097e3  mov        edx, esi
   00000001400097e5  mov        rcx, rbx
   00000001400097e8  and        eax, edi
   00000001400097ea  mov        r8d, eax
   00000001400097ed  call       qword ptr [rip + 0x1b23c]
   00000001400097f4  nop        dword ptr [rax + rax]
   00000001400097f9  xor        eax, eax
   00000001400097fb  jmp        0x1400099d5
   0000000140009800  mov        ecx, 0x1388
   0000000140009805  cmp        rdi, rcx
   0000000140009808  jb         0x14000982f
   000000014000980a  mov        eax, dword ptr [r14 + 0xd8]
   0000000140009811  add        eax, ecx
   0000000140009813  cmp        rdi, rax
   0000000140009816  ja         0x1400097f9
   0000000140009818  lea        r8d, [rdi - 0x1388]
   000000014000981f  mov        rdx, rsi
