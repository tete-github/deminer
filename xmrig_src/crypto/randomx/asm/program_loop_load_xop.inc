	lea rcx, [rsi+rax]
	mov [rsp+16], rcx
	xor r8,  qword ptr [rcx+0]
	xor r9,  qword ptr [rcx+8]
	xor r10, qword ptr [rcx+16]
	xor r11, qword ptr [rcx+24]
	xor r12, qword ptr [rcx+32]
	xor r13, qword ptr [rcx+40]
	xor r14, qword ptr [rcx+48]
	xor r15, qword ptr [rcx+56]
	lea rcx, [rsi+rdx]
	mov [rsp+24], rcx
	cvtdq2pd xmm0, qword ptr [rcx+0]
	cvtdq2pd xmm1, qword ptr [rcx+8]
	cvtdq2pd xmm2, qword ptr [rcx+16]
	cvtdq2pd xmm3, qword ptr [rcx+24]
	cvtdq2pd xmm4, qword ptr [rcx+32]
	cvtdq2pd xmm5, qword ptr [rcx+40]
	cvtdq2pd xmm6, qword ptr [rcx+48]
	cvtdq2pd xmm7, qword ptr [rcx+56]
	vpcmov xmm4, xmm4, xmm14, xmm13
	vpcmov xmm5, xmm5, xmm14, xmm13
	vpcmov xmm6, xmm6, xmm14, xmm13
	vpcmov xmm7, xmm7, xmm14, xmm13
