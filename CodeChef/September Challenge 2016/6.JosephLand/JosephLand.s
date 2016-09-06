	.file	"JosephLand.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.section	.text._ZnwmPv,"axG",@progbits,_ZnwmPv,comdat
	.weak	_ZnwmPv
	.type	_ZnwmPv, @function
_ZnwmPv:
.LFB455:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE455:
	.size	_ZnwmPv, .-_ZnwmPv
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
	.type	_ZStL13allocator_arg, @object
	.size	_ZStL13allocator_arg, 1
_ZStL13allocator_arg:
	.zero	1
	.type	_ZStL6ignore, @object
	.size	_ZStL6ignore, 1
_ZStL6ignore:
	.zero	1
	.align 4
	.type	_ZL3INF, @object
	.size	_ZL3INF, 4
_ZL3INF:
	.long	1000000001
	.align 4
	.type	_ZL3MAX, @object
	.size	_ZL3MAX, 4
_ZL3MAX:
	.long	100000
	.section	.text._ZN5qnodeC2Eii,"axG",@progbits,_ZN5qnodeC5Eii,comdat
	.align 2
	.weak	_ZN5qnodeC2Eii
	.type	_ZN5qnodeC2Eii, @function
_ZN5qnodeC2Eii:
.LFB2992:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2992:
	.size	_ZN5qnodeC2Eii, .-_ZN5qnodeC2Eii
	.weak	_ZN5qnodeC1Eii
	.set	_ZN5qnodeC1Eii,_ZN5qnodeC2Eii
	.section	.text._ZNK5qnodeltERKS_,"axG",@progbits,_ZNK5qnodeltERKS_,comdat
	.align 2
	.weak	_ZNK5qnodeltERKS_
	.type	_ZNK5qnodeltERKS_, @function
_ZNK5qnodeltERKS_:
.LFB2994:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	cmpq	%rax, %rdx
	setg	%al
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2994:
	.size	_ZNK5qnodeltERKS_, .-_ZNK5qnodeltERKS_
	.section	.text._ZN4EdgeC2Eii,"axG",@progbits,_ZN4EdgeC5Eii,comdat
	.align 2
	.weak	_ZN4EdgeC2Eii
	.type	_ZN4EdgeC2Eii, @function
_ZN4EdgeC2Eii:
.LFB2996:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2996:
	.size	_ZN4EdgeC2Eii, .-_ZN4EdgeC2Eii
	.weak	_ZN4EdgeC1Eii
	.set	_ZN4EdgeC1Eii,_ZN4EdgeC2Eii
	.globl	E
	.bss
	.align 32
	.type	E, @object
	.size	E, 2400000
E:
	.zero	2400000
	.globl	vis
	.align 32
	.type	vis, @object
	.size	vis, 100000
vis:
	.zero	100000
	.globl	dist
	.align 32
	.type	dist, @object
	.size	dist, 800000
dist:
	.zero	800000
	.text
	.globl	_Z7addedgeiix
	.type	_Z7addedgeiix, @function
_Z7addedgeiix:
.LFB2998:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movq	%rdx, -32(%rbp)
	movq	-32(%rbp), %rax
	movl	%eax, %edx
	movl	-24(%rbp), %ecx
	leaq	-16(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN4EdgeC1Eii
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	E(%rax), %rdx
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSt6vectorI4EdgeSaIS0_EE9push_backEOS0_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2998:
	.size	_Z7addedgeiix, .-_Z7addedgeiix
	.section	.text._ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED2Ev,"axG",@progbits,_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED5Ev,comdat
	.align 2
	.weak	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED2Ev
	.type	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED2Ev, @function
_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED2Ev:
.LFB3001:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EED1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3001:
	.size	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED2Ev, .-_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED2Ev
	.weak	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED1Ev
	.set	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED1Ev,_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED2Ev
	.text
	.globl	_Z9dijikstraii
	.type	_Z9dijikstraii, @function
_Z9dijikstraii:
.LFB2999:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA2999
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$168, %rsp
	.cfi_offset 3, -24
	movl	%edi, -164(%rbp)
	movl	%esi, -168(%rbp)
	movl	$100000, %edx
	movl	$0, %esi
	movl	$vis, %edi
	call	memset
	movl	$0, -20(%rbp)
.L11:
	movl	-20(%rbp), %eax
	cmpl	-164(%rbp), %eax
	je	.L10
	movl	-20(%rbp), %eax
	cltq
	movq	$1000000001, dist(,%rax,8)
	addl	$1, -20(%rbp)
	jmp	.L11
.L10:
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EEC1Ev
	leaq	-112(%rbp), %rdx
	leaq	-81(%rbp), %rcx
	leaq	-144(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC1ERKS5_OS3_
.LEHE0:
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EED1Ev
.L13:
	leaq	-144(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE5emptyEv
	xorl	$1, %eax
	testb	%al, %al
	je	.L12
	leaq	-144(%rbp), %rax
	movq	%rax, %rdi
.LEHB1:
	call	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv
	jmp	.L13
.L12:
	movl	-168(%rbp), %eax
	cltq
	movq	$0, dist(,%rax,8)
	movl	-168(%rbp), %ecx
	leaq	-80(%rbp), %rax
	movl	$0, %edx
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN5qnodeC1Eii
	leaq	-80(%rbp), %rdx
	leaq	-144(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE4pushEOS0_
	leaq	-160(%rbp), %rax
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZN5qnodeC1Eii
.L19:
	leaq	-144(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE5emptyEv
	xorl	$1, %eax
	testb	%al, %al
	je	.L14
	leaq	-144(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3topEv
	movq	8(%rax), %rdx
	movq	(%rax), %rax
	movq	%rax, -160(%rbp)
	movq	%rdx, -152(%rbp)
	leaq	-144(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv
	movl	-160(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	cltq
	movzbl	vis(%rax), %eax
	testb	%al, %al
	jne	.L25
	movl	-28(%rbp), %eax
	cltq
	movb	$1, vis(%rax)
	movl	$0, -24(%rbp)
.L18:
	movl	-24(%rbp), %eax
	movslq	%eax, %rbx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	$E, %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv
	cmpq	%rax, %rbx
	setne	%al
	testb	%al, %al
	je	.L19
	movl	-24(%rbp), %eax
	movslq	%eax, %rcx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	$E, %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6vectorI4EdgeSaIS0_EEixEm
	movl	(%rax), %eax
	movl	%eax, -32(%rbp)
	movl	-24(%rbp), %eax
	movslq	%eax, %rcx
	movl	-28(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	$E, %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6vectorI4EdgeSaIS0_EEixEm
	movq	8(%rax), %rax
	movq	%rax, -40(%rbp)
	movl	-32(%rbp), %eax
	cltq
	movzbl	vis(%rax), %eax
	xorl	$1, %eax
	testb	%al, %al
	je	.L17
	movl	-32(%rbp), %eax
	cltq
	movq	dist(,%rax,8), %rdx
	movl	-28(%rbp), %eax
	cltq
	movq	dist(,%rax,8), %rcx
	movq	-40(%rbp), %rax
	addq	%rcx, %rax
	cmpq	%rax, %rdx
	jle	.L17
	movl	-28(%rbp), %eax
	cltq
	movq	dist(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movl	-32(%rbp), %eax
	cltq
	movq	%rdx, dist(,%rax,8)
	movl	-32(%rbp), %eax
	cltq
	movq	dist(,%rax,8), %rax
	movl	%eax, %edx
	movl	-32(%rbp), %ecx
	leaq	-64(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_ZN5qnodeC1Eii
	leaq	-64(%rbp), %rdx
	leaq	-144(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE4pushEOS0_
.LEHE1:
.L17:
	addl	$1, -24(%rbp)
	jmp	.L18
.L25:
	nop
	jmp	.L19
.L14:
	leaq	-144(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED1Ev
	jmp	.L24
.L22:
	movq	%rax, %rbx
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume
.L23:
	movq	%rax, %rbx
	leaq	-144(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume
.LEHE2:
.L24:
	addq	$168, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2999:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA2999:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2999-.LLSDACSB2999
.LLSDACSB2999:
	.uleb128 .LEHB0-.LFB2999
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L22-.LFB2999
	.uleb128 0
	.uleb128 .LEHB1-.LFB2999
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L23-.LFB2999
	.uleb128 0
	.uleb128 .LEHB2-.LFB2999
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE2999:
	.text
	.size	_Z9dijikstraii, .-_Z9dijikstraii
	.globl	main
	.type	main, @function
main:
.LFB3003:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3003
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	movabsq	$-40002800176, %r11
	addq	%r11, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movl	$115, %esi
	movl	$_ZSt4cout, %edi
.LEHB3:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-76(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movq	%rax, %rdx
	leaq	-80(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSirsERi
	movl	$-1, -400080(%rbp)
	movl	$48, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -20(%rbp)
.L28:
	movl	-76(%rbp), %eax
	subl	$1, %eax
	cmpl	-20(%rbp), %eax
	je	.L27
	leaq	-400084(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movq	%rax, %rdx
	leaq	-400088(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSirsERi
	movl	-400084(%rbp), %eax
	leal	-1(%rax), %ecx
	movl	-400088(%rbp), %eax
	leal	-1(%rax), %edx
	movslq	%ecx, %rax
	movl	%edx, -400080(%rbp,%rax,4)
	addl	$1, -20(%rbp)
	jmp	.L28
.L27:
	movl	$97, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$1, -24(%rbp)
.L32:
	movl	-76(%rbp), %eax
	cmpl	%eax, -24(%rbp)
	je	.L29
	movl	$1, -28(%rbp)
	movl	-24(%rbp), %eax
	cltq
	movl	-400080(%rbp,%rax,4), %eax
	movl	%eax, -32(%rbp)
.L31:
	cmpl	$0, -32(%rbp)
	je	.L30
	movabsq	$-40000400080, %rax
	leaq	-16(%rbp), %rbx
	leaq	(%rbx,%rax), %rdx
	movl	-32(%rbp), %eax
	cltq
	movl	-24(%rbp), %ecx
	movslq	%ecx, %rcx
	imulq	$100000, %rcx, %rcx
	addq	%rax, %rcx
	movl	-28(%rbp), %eax
	movl	%eax, (%rdx,%rcx,4)
	movl	-32(%rbp), %eax
	cltq
	movl	-400080(%rbp,%rax,4), %eax
	movl	%eax, -32(%rbp)
	addl	$1, -28(%rbp)
	jmp	.L31
.L30:
	movabsq	$-40000400080, %rax
	leaq	-16(%rbp), %rbx
	leaq	(%rbx,%rax), %rdx
	movl	-24(%rbp), %eax
	cltq
	imulq	$400000, %rax, %rax
	addq	%rax, %rdx
	movl	-28(%rbp), %eax
	movl	%eax, (%rdx)
	addl	$1, -24(%rbp)
	jmp	.L32
.L29:
	movl	$48, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE3:
	movabsq	$-40002800096, %rax
	leaq	-16(%rbp), %rbx
	addq	%rbx, %rax
	movl	$99999, %ebx
	movq	%rax, %r12
.L34:
	testq	%rbx, %rbx
	js	.L33
	movq	%r12, %rdi
	call	_ZNSt6vectorI6ticketSaIS0_EEC1Ev
	addq	$24, %r12
	subq	$1, %rbx
	jmp	.L34
.L33:
	movl	$0, -36(%rbp)
.L36:
	movl	-80(%rbp), %eax
	cmpl	%eax, -36(%rbp)
	je	.L35
	movabsq	$-40000400084, %rax
	leaq	-16(%rbp), %rbx
	addq	%rbx, %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
.LEHB4:
	call	_ZNSirsERi
	movq	%rax, %rdx
	movabsq	$-40002800128, %rax
	leaq	-16(%rbp), %rbx
	addq	%rbx, %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSirsERi
	movq	%rax, %rdx
	movabsq	$-40002800128, %rax
	leaq	-16(%rbp), %rbx
	addq	%rbx, %rax
	addq	$8, %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSirsERx
	movabsq	$-40000400084, %rax
	leaq	-16(%rbp), %rbx
	addq	%rbx, %rax
	movl	(%rax), %eax
	movabsq	$-40002800096, %rdx
	leaq	-16(%rbp), %rcx
	addq	%rdx, %rcx
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movabsq	$-40002800128, %rdx
	leaq	-16(%rbp), %rbx
	addq	%rbx, %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6vectorI6ticketSaIS0_EE9push_backERKS0_
	addl	$1, -36(%rbp)
	jmp	.L36
.L35:
	movl	$1, -40(%rbp)
.L43:
	movl	-76(%rbp), %eax
	cmpl	%eax, -40(%rbp)
	je	.L37
	movl	-40(%rbp), %eax
	cltq
	movl	-400080(%rbp,%rax,4), %eax
	movl	%eax, -52(%rbp)
	movq	$1000000001, -48(%rbp)
.L42:
	cmpl	$-1, -52(%rbp)
	je	.L38
	movabsq	$-40002800096, %rax
	leaq	-16(%rbp), %rcx
	addq	%rax, %rcx
	movl	-40(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI6ticketSaIS0_EE5beginEv
	movq	%rax, %rdx
	movabsq	$-40002800144, %rax
	leaq	-16(%rbp), %rbx
	addq	%rbx, %rax
	movq	%rdx, (%rax)
	movq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI6ticketSaIS0_EE3endEv
	movq	%rax, %rdx
	movabsq	$-40002800160, %rax
	leaq	-16(%rbp), %rcx
	addq	%rcx, %rax
	movq	%rdx, (%rax)
.L41:
	movabsq	$-40002800160, %rax
	leaq	-16(%rbp), %rsi
	leaq	(%rsi,%rax), %rdx
	movabsq	$-40002800144, %rax
	leaq	-16(%rbp), %rbx
	addq	%rbx, %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxxneIP6ticketSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_
	testb	%al, %al
	je	.L42
	movabsq	$-40002800144, %rax
	leaq	-16(%rbp), %rcx
	addq	%rcx, %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	movl	(%rax), %edx
	movabsq	$-40000400080, %rax
	leaq	-16(%rbp), %rsi
	addq	%rsi, %rax
	movl	-52(%rbp), %ecx
	movslq	%ecx, %rcx
	movl	-40(%rbp), %esi
	movslq	%esi, %rsi
	imulq	$100000, %rsi, %rsi
	addq	%rsi, %rcx
	movl	(%rax,%rcx,4), %eax
	cmpl	%eax, %edx
	jl	.L40
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	cmpq	-48(%rbp), %rax
	jge	.L40
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -48(%rbp)
.L40:
	movabsq	$-40002800144, %rax
	leaq	-16(%rbp), %rdi
	addq	%rdi, %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEppEv
	jmp	.L41
.L38:
	movq	-48(%rbp), %rdx
	movl	-40(%rbp), %ecx
	movl	-52(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	_Z7addedgeiix
	addl	$1, -40(%rbp)
	jmp	.L43
.L37:
	movl	$49, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	-76(%rbp), %eax
	movl	$0, %esi
	movl	%eax, %edi
	call	_Z9dijikstraii
	movabsq	$-40002800100, %rax
	leaq	-16(%rbp), %rbx
	addq	%rbx, %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
.L45:
	movabsq	$-40002800100, %rax
	leaq	-16(%rbp), %rcx
	addq	%rcx, %rax
	movl	(%rax), %eax
	leal	-1(%rax), %edx
	movabsq	$-40002800100, %rcx
	leaq	-16(%rbp), %rsi
	addq	%rsi, %rcx
	movl	%edx, (%rcx)
	testl	%eax, %eax
	setne	%al
	testb	%al, %al
	je	.L44
	movabsq	$-40002800164, %rax
	leaq	-16(%rbp), %rdi
	addq	%rdi, %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movabsq	$-40002800164, %rax
	leaq	-16(%rbp), %rbx
	addq	%rbx, %rax
	movl	(%rax), %eax
	subl	$1, %eax
	cltq
	movq	dist(,%rax,8), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEx
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE4:
	jmp	.L45
.L44:
	movabsq	$-40002800096, %rax
	leaq	-16(%rbp), %rcx
	leaq	(%rcx,%rax), %rbx
	addq	$2400000, %rbx
.L47:
	movabsq	$-40002800096, %rax
	leaq	-16(%rbp), %rsi
	addq	%rsi, %rax
	cmpq	%rax, %rbx
	je	.L46
	subq	$24, %rbx
	movq	%rbx, %rdi
	call	_ZNSt6vectorI6ticketSaIS0_EED1Ev
	jmp	.L47
.L46:
	movl	$0, %eax
	jmp	.L53
.L52:
	movq	%rax, %r12
	movabsq	$-40002800096, %rax
	leaq	-16(%rbp), %rdi
	leaq	(%rdi,%rax), %rbx
	addq	$2400000, %rbx
.L51:
	movabsq	$-40002800096, %rax
	leaq	-16(%rbp), %rcx
	addq	%rcx, %rax
	cmpq	%rax, %rbx
	je	.L50
	subq	$24, %rbx
	movq	%rbx, %rdi
	call	_ZNSt6vectorI6ticketSaIS0_EED1Ev
	jmp	.L51
.L50:
	movq	%r12, %rax
	movq	%rax, %rdi
.LEHB5:
	call	_Unwind_Resume
.LEHE5:
.L53:
	movabsq	$40002800176, %r11
	addq	%r11, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3003:
	.section	.gcc_except_table
.LLSDA3003:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3003-.LLSDACSB3003
.LLSDACSB3003:
	.uleb128 .LEHB3-.LFB3003
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB4-.LFB3003
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L52-.LFB3003
	.uleb128 0
	.uleb128 .LEHB5-.LFB3003
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE3003:
	.text
	.size	main, .-main
	.section	.text._ZNSt6vectorI4EdgeSaIS0_EEC2Ev,"axG",@progbits,_ZNSt6vectorI4EdgeSaIS0_EEC5Ev,comdat
	.align 2
	.weak	_ZNSt6vectorI4EdgeSaIS0_EEC2Ev
	.type	_ZNSt6vectorI4EdgeSaIS0_EEC2Ev, @function
_ZNSt6vectorI4EdgeSaIS0_EEC2Ev:
.LFB3214:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3214
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EEC2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3214:
	.section	.gcc_except_table
.LLSDA3214:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3214-.LLSDACSB3214
.LLSDACSB3214:
.LLSDACSE3214:
	.section	.text._ZNSt6vectorI4EdgeSaIS0_EEC2Ev,"axG",@progbits,_ZNSt6vectorI4EdgeSaIS0_EEC5Ev,comdat
	.size	_ZNSt6vectorI4EdgeSaIS0_EEC2Ev, .-_ZNSt6vectorI4EdgeSaIS0_EEC2Ev
	.weak	_ZNSt6vectorI4EdgeSaIS0_EEC1Ev
	.set	_ZNSt6vectorI4EdgeSaIS0_EEC1Ev,_ZNSt6vectorI4EdgeSaIS0_EEC2Ev
	.section	.text._ZNSt6vectorI4EdgeSaIS0_EED2Ev,"axG",@progbits,_ZNSt6vectorI4EdgeSaIS0_EED5Ev,comdat
	.align 2
	.weak	_ZNSt6vectorI4EdgeSaIS0_EED2Ev
	.type	_ZNSt6vectorI4EdgeSaIS0_EED2Ev, @function
_ZNSt6vectorI4EdgeSaIS0_EED2Ev:
.LFB3217:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3217
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt8_DestroyIP4EdgeS0_EvT_S2_RSaIT0_E
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3217:
	.section	.gcc_except_table
.LLSDA3217:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3217-.LLSDACSB3217
.LLSDACSB3217:
.LLSDACSE3217:
	.section	.text._ZNSt6vectorI4EdgeSaIS0_EED2Ev,"axG",@progbits,_ZNSt6vectorI4EdgeSaIS0_EED5Ev,comdat
	.size	_ZNSt6vectorI4EdgeSaIS0_EED2Ev, .-_ZNSt6vectorI4EdgeSaIS0_EED2Ev
	.weak	_ZNSt6vectorI4EdgeSaIS0_EED1Ev
	.set	_ZNSt6vectorI4EdgeSaIS0_EED1Ev,_ZNSt6vectorI4EdgeSaIS0_EED2Ev
	.section	.text._ZSt4moveIR4EdgeEONSt16remove_referenceIT_E4typeEOS3_,"axG",@progbits,_ZSt4moveIR4EdgeEONSt16remove_referenceIT_E4typeEOS3_,comdat
	.weak	_ZSt4moveIR4EdgeEONSt16remove_referenceIT_E4typeEOS3_
	.type	_ZSt4moveIR4EdgeEONSt16remove_referenceIT_E4typeEOS3_, @function
_ZSt4moveIR4EdgeEONSt16remove_referenceIT_E4typeEOS3_:
.LFB3220:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3220:
	.size	_ZSt4moveIR4EdgeEONSt16remove_referenceIT_E4typeEOS3_, .-_ZSt4moveIR4EdgeEONSt16remove_referenceIT_E4typeEOS3_
	.section	.text._ZNSt6vectorI4EdgeSaIS0_EE9push_backEOS0_,"axG",@progbits,_ZNSt6vectorI4EdgeSaIS0_EE9push_backEOS0_,comdat
	.align 2
	.weak	_ZNSt6vectorI4EdgeSaIS0_EE9push_backEOS0_
	.type	_ZNSt6vectorI4EdgeSaIS0_EE9push_backEOS0_, @function
_ZNSt6vectorI4EdgeSaIS0_EE9push_backEOS0_:
.LFB3219:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIR4EdgeEONSt16remove_referenceIT_E4typeEOS3_
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6vectorI4EdgeSaIS0_EE12emplace_backIJS0_EEEvDpOT_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3219:
	.size	_ZNSt6vectorI4EdgeSaIS0_EE9push_backEOS0_, .-_ZNSt6vectorI4EdgeSaIS0_EE9push_backEOS0_
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EEC2Ev,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EEC5Ev,comdat
	.align 2
	.weak	_ZNSt6vectorI5qnodeSaIS0_EEC2Ev
	.type	_ZNSt6vectorI5qnodeSaIS0_EEC2Ev, @function
_ZNSt6vectorI5qnodeSaIS0_EEC2Ev:
.LFB3222:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3222
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3222:
	.section	.gcc_except_table
.LLSDA3222:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3222-.LLSDACSB3222
.LLSDACSB3222:
.LLSDACSE3222:
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EEC2Ev,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EEC5Ev,comdat
	.size	_ZNSt6vectorI5qnodeSaIS0_EEC2Ev, .-_ZNSt6vectorI5qnodeSaIS0_EEC2Ev
	.weak	_ZNSt6vectorI5qnodeSaIS0_EEC1Ev
	.set	_ZNSt6vectorI5qnodeSaIS0_EEC1Ev,_ZNSt6vectorI5qnodeSaIS0_EEC2Ev
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EED2Ev,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EED5Ev,comdat
	.align 2
	.weak	_ZNSt6vectorI5qnodeSaIS0_EED2Ev
	.type	_ZNSt6vectorI5qnodeSaIS0_EED2Ev, @function
_ZNSt6vectorI5qnodeSaIS0_EED2Ev:
.LFB3225:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3225
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt8_DestroyIP5qnodeS0_EvT_S2_RSaIT0_E
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3225:
	.section	.gcc_except_table
.LLSDA3225:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3225-.LLSDACSB3225
.LLSDACSB3225:
.LLSDACSE3225:
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EED2Ev,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EED5Ev,comdat
	.size	_ZNSt6vectorI5qnodeSaIS0_EED2Ev, .-_ZNSt6vectorI5qnodeSaIS0_EED2Ev
	.weak	_ZNSt6vectorI5qnodeSaIS0_EED1Ev
	.set	_ZNSt6vectorI5qnodeSaIS0_EED1Ev,_ZNSt6vectorI5qnodeSaIS0_EED2Ev
	.section	.text._ZSt4moveIRSt6vectorI5qnodeSaIS1_EEEONSt16remove_referenceIT_E4typeEOS6_,"axG",@progbits,_ZSt4moveIRSt6vectorI5qnodeSaIS1_EEEONSt16remove_referenceIT_E4typeEOS6_,comdat
	.weak	_ZSt4moveIRSt6vectorI5qnodeSaIS1_EEEONSt16remove_referenceIT_E4typeEOS6_
	.type	_ZSt4moveIRSt6vectorI5qnodeSaIS1_EEEONSt16remove_referenceIT_E4typeEOS6_, @function
_ZSt4moveIRSt6vectorI5qnodeSaIS1_EEEONSt16remove_referenceIT_E4typeEOS6_:
.LFB3228:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3228:
	.size	_ZSt4moveIRSt6vectorI5qnodeSaIS1_EEEONSt16remove_referenceIT_E4typeEOS6_, .-_ZSt4moveIRSt6vectorI5qnodeSaIS1_EEEONSt16remove_referenceIT_E4typeEOS6_
	.section	.text._ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC2ERKS5_OS3_,"axG",@progbits,_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC5ERKS5_OS3_,comdat
	.align 2
	.weak	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC2ERKS5_OS3_
	.type	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC2ERKS5_OS3_, @function
_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC2ERKS5_OS3_:
.LFB3229:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3229
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$32, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIRSt6vectorI5qnodeSaIS1_EEEONSt16remove_referenceIT_E4typeEOS6_
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EEC1EOS2_
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EE3endEv
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EE5beginEv
	subq	$8, %rsp
	pushq	%r12
	movq	%rbx, %rsi
	movq	%rax, %rdi
.LEHB6:
	.cfi_escape 0x2e,0x10
	call	_ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_
.LEHE6:
	addq	$16, %rsp
	jmp	.L66
.L65:
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB7:
	call	_Unwind_Resume
.LEHE7:
.L66:
	leaq	-16(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3229:
	.section	.gcc_except_table
.LLSDA3229:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3229-.LLSDACSB3229
.LLSDACSB3229:
	.uleb128 .LEHB6-.LFB3229
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L65-.LFB3229
	.uleb128 0
	.uleb128 .LEHB7-.LFB3229
	.uleb128 .LEHE7-.LEHB7
	.uleb128 0
	.uleb128 0
.LLSDACSE3229:
	.section	.text._ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC2ERKS5_OS3_,"axG",@progbits,_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC5ERKS5_OS3_,comdat
	.size	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC2ERKS5_OS3_, .-_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC2ERKS5_OS3_
	.weak	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC1ERKS5_OS3_
	.set	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC1ERKS5_OS3_,_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EEC2ERKS5_OS3_
	.section	.text._ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE5emptyEv,"axG",@progbits,_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE5emptyEv,comdat
	.align 2
	.weak	_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE5emptyEv
	.type	_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE5emptyEv, @function
_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE5emptyEv:
.LFB3231:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE5emptyEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3231:
	.size	_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE5emptyEv, .-_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE5emptyEv
	.section	.text._ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv,"axG",@progbits,_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv,comdat
	.align 2
	.weak	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv
	.type	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv, @function
_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv:
.LFB3232:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$16, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EE3endEv
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EE5beginEv
	subq	$8, %rsp
	pushq	%r12
	movq	%rbx, %rsi
	movq	%rax, %rdi
	call	_ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_
	addq	$16, %rsp
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EE8pop_backEv
	nop
	leaq	-16(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3232:
	.size	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv, .-_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv
	.section	.text._ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_,"axG",@progbits,_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_,comdat
	.weak	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	.type	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_, @function
_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_:
.LFB3234:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3234:
	.size	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_, .-_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	.section	.text._ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE4pushEOS0_,"axG",@progbits,_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE4pushEOS0_,comdat
	.align 2
	.weak	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE4pushEOS0_
	.type	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE4pushEOS0_, @function
_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE4pushEOS0_:
.LFB3233:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$16, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EE9push_backEOS0_
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EE3endEv
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EE5beginEv
	subq	$8, %rsp
	pushq	%r12
	movq	%rbx, %rsi
	movq	%rax, %rdi
	call	_ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_
	addq	$16, %rsp
	nop
	leaq	-16(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3233:
	.size	_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE4pushEOS0_, .-_ZNSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE4pushEOS0_
	.section	.text._ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3topEv,"axG",@progbits,_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3topEv,comdat
	.align 2
	.weak	_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3topEv
	.type	_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3topEv, @function
_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3topEv:
.LFB3235:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE5frontEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3235:
	.size	_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3topEv, .-_ZNKSt14priority_queueI5qnodeSt6vectorIS0_SaIS0_EESt4lessIS0_EE3topEv
	.section	.text._ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv,"axG",@progbits,_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv
	.type	_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv, @function
_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv:
.LFB3236:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$4, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3236:
	.size	_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv, .-_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv
	.section	.text._ZNSt6vectorI4EdgeSaIS0_EEixEm,"axG",@progbits,_ZNSt6vectorI4EdgeSaIS0_EEixEm,comdat
	.align 2
	.weak	_ZNSt6vectorI4EdgeSaIS0_EEixEm
	.type	_ZNSt6vectorI4EdgeSaIS0_EEixEm, @function
_ZNSt6vectorI4EdgeSaIS0_EEixEm:
.LFB3237:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rdx
	salq	$4, %rdx
	addq	%rdx, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3237:
	.size	_ZNSt6vectorI4EdgeSaIS0_EEixEm, .-_ZNSt6vectorI4EdgeSaIS0_EEixEm
	.section	.text._ZNSt6vectorI6ticketSaIS0_EEC2Ev,"axG",@progbits,_ZNSt6vectorI6ticketSaIS0_EEC5Ev,comdat
	.align 2
	.weak	_ZNSt6vectorI6ticketSaIS0_EEC2Ev
	.type	_ZNSt6vectorI6ticketSaIS0_EEC2Ev, @function
_ZNSt6vectorI6ticketSaIS0_EEC2Ev:
.LFB3242:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3242
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EEC2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3242:
	.section	.gcc_except_table
.LLSDA3242:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3242-.LLSDACSB3242
.LLSDACSB3242:
.LLSDACSE3242:
	.section	.text._ZNSt6vectorI6ticketSaIS0_EEC2Ev,"axG",@progbits,_ZNSt6vectorI6ticketSaIS0_EEC5Ev,comdat
	.size	_ZNSt6vectorI6ticketSaIS0_EEC2Ev, .-_ZNSt6vectorI6ticketSaIS0_EEC2Ev
	.weak	_ZNSt6vectorI6ticketSaIS0_EEC1Ev
	.set	_ZNSt6vectorI6ticketSaIS0_EEC1Ev,_ZNSt6vectorI6ticketSaIS0_EEC2Ev
	.section	.text._ZNSt6vectorI6ticketSaIS0_EED2Ev,"axG",@progbits,_ZNSt6vectorI6ticketSaIS0_EED5Ev,comdat
	.align 2
	.weak	_ZNSt6vectorI6ticketSaIS0_EED2Ev
	.type	_ZNSt6vectorI6ticketSaIS0_EED2Ev, @function
_ZNSt6vectorI6ticketSaIS0_EED2Ev:
.LFB3245:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3245
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt8_DestroyIP6ticketS0_EvT_S2_RSaIT0_E
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3245:
	.section	.gcc_except_table
.LLSDA3245:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3245-.LLSDACSB3245
.LLSDACSB3245:
.LLSDACSE3245:
	.section	.text._ZNSt6vectorI6ticketSaIS0_EED2Ev,"axG",@progbits,_ZNSt6vectorI6ticketSaIS0_EED5Ev,comdat
	.size	_ZNSt6vectorI6ticketSaIS0_EED2Ev, .-_ZNSt6vectorI6ticketSaIS0_EED2Ev
	.weak	_ZNSt6vectorI6ticketSaIS0_EED1Ev
	.set	_ZNSt6vectorI6ticketSaIS0_EED1Ev,_ZNSt6vectorI6ticketSaIS0_EED2Ev
	.section	.text._ZNSt6vectorI6ticketSaIS0_EE9push_backERKS0_,"axG",@progbits,_ZNSt6vectorI6ticketSaIS0_EE9push_backERKS0_,comdat
	.align 2
	.weak	_ZNSt6vectorI6ticketSaIS0_EE9push_backERKS0_
	.type	_ZNSt6vectorI6ticketSaIS0_EE9push_backERKS0_, @function
_ZNSt6vectorI6ticketSaIS0_EE9push_backERKS0_:
.LFB3248:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, %rdx
	je	.L82
	movq	-8(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI6ticketEE9constructIS0_JRKS0_EEEvRS1_PT_DpOT0_
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	leaq	16(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	jmp	.L84
.L82:
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6vectorI6ticketSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_
.L84:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3248:
	.size	_ZNSt6vectorI6ticketSaIS0_EE9push_backERKS0_, .-_ZNSt6vectorI6ticketSaIS0_EE9push_backERKS0_
	.section	.text._ZNSt6vectorI6ticketSaIS0_EE5beginEv,"axG",@progbits,_ZNSt6vectorI6ticketSaIS0_EE5beginEv,comdat
	.align 2
	.weak	_ZNSt6vectorI6ticketSaIS0_EE5beginEv
	.type	_ZNSt6vectorI6ticketSaIS0_EE5beginEv, @function
_ZNSt6vectorI6ticketSaIS0_EE5beginEv:
.LFB3249:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC1ERKS2_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3249:
	.size	_ZNSt6vectorI6ticketSaIS0_EE5beginEv, .-_ZNSt6vectorI6ticketSaIS0_EE5beginEv
	.section	.text._ZNSt6vectorI6ticketSaIS0_EE3endEv,"axG",@progbits,_ZNSt6vectorI6ticketSaIS0_EE3endEv,comdat
	.align 2
	.weak	_ZNSt6vectorI6ticketSaIS0_EE3endEv
	.type	_ZNSt6vectorI6ticketSaIS0_EE3endEv, @function
_ZNSt6vectorI6ticketSaIS0_EE3endEv:
.LFB3250:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	leaq	8(%rax), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC1ERKS2_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3250:
	.size	_ZNSt6vectorI6ticketSaIS0_EE3endEv, .-_ZNSt6vectorI6ticketSaIS0_EE3endEv
	.section	.text._ZN9__gnu_cxxneIP6ticketSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_,"axG",@progbits,_ZN9__gnu_cxxneIP6ticketSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_,comdat
	.weak	_ZN9__gnu_cxxneIP6ticketSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_
	.type	_ZN9__gnu_cxxneIP6ticketSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_, @function
_ZN9__gnu_cxxneIP6ticketSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_:
.LFB3251:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEE4baseEv
	movq	(%rax), %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEE4baseEv
	movq	(%rax), %rax
	cmpq	%rax, %rbx
	setne	%al
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3251:
	.size	_ZN9__gnu_cxxneIP6ticketSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_, .-_ZN9__gnu_cxxneIP6ticketSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEppEv,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEppEv,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEppEv
	.type	_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEppEv, @function
_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEppEv:
.LFB3252:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	leaq	16(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3252:
	.size	_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEppEv, .-_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEppEv
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEdeEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEdeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEdeEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEdeEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEdeEv:
.LFB3253:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3253:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEdeEv, .-_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEdeEv
	.section	.text._ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implD2Ev,"axG",@progbits,_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implD5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implD2Ev
	.type	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implD2Ev, @function
_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implD2Ev:
.LFB3350:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaI4EdgeED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3350:
	.size	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implD2Ev, .-_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implD2Ev
	.weak	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implD1Ev
	.set	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implD1Ev,_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implD2Ev
	.section	.text._ZNSt12_Vector_baseI4EdgeSaIS0_EEC2Ev,"axG",@progbits,_ZNSt12_Vector_baseI4EdgeSaIS0_EEC5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI4EdgeSaIS0_EEC2Ev
	.type	_ZNSt12_Vector_baseI4EdgeSaIS0_EEC2Ev, @function
_ZNSt12_Vector_baseI4EdgeSaIS0_EEC2Ev:
.LFB3352:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implC1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3352:
	.size	_ZNSt12_Vector_baseI4EdgeSaIS0_EEC2Ev, .-_ZNSt12_Vector_baseI4EdgeSaIS0_EEC2Ev
	.weak	_ZNSt12_Vector_baseI4EdgeSaIS0_EEC1Ev
	.set	_ZNSt12_Vector_baseI4EdgeSaIS0_EEC1Ev,_ZNSt12_Vector_baseI4EdgeSaIS0_EEC2Ev
	.section	.text._ZNSt12_Vector_baseI4EdgeSaIS0_EED2Ev,"axG",@progbits,_ZNSt12_Vector_baseI4EdgeSaIS0_EED5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI4EdgeSaIS0_EED2Ev
	.type	_ZNSt12_Vector_baseI4EdgeSaIS0_EED2Ev, @function
_ZNSt12_Vector_baseI4EdgeSaIS0_EED2Ev:
.LFB3355:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3355
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$4, %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EE13_M_deallocateEPS0_m
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implD1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3355:
	.section	.gcc_except_table
.LLSDA3355:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3355-.LLSDACSB3355
.LLSDACSB3355:
.LLSDACSE3355:
	.section	.text._ZNSt12_Vector_baseI4EdgeSaIS0_EED2Ev,"axG",@progbits,_ZNSt12_Vector_baseI4EdgeSaIS0_EED5Ev,comdat
	.size	_ZNSt12_Vector_baseI4EdgeSaIS0_EED2Ev, .-_ZNSt12_Vector_baseI4EdgeSaIS0_EED2Ev
	.weak	_ZNSt12_Vector_baseI4EdgeSaIS0_EED1Ev
	.set	_ZNSt12_Vector_baseI4EdgeSaIS0_EED1Ev,_ZNSt12_Vector_baseI4EdgeSaIS0_EED2Ev
	.section	.text._ZNSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv,"axG",@progbits,_ZNSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv
	.type	_ZNSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv, @function
_ZNSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv:
.LFB3357:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3357:
	.size	_ZNSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv, .-_ZNSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv
	.section	.text._ZSt8_DestroyIP4EdgeS0_EvT_S2_RSaIT0_E,"axG",@progbits,_ZSt8_DestroyIP4EdgeS0_EvT_S2_RSaIT0_E,comdat
	.weak	_ZSt8_DestroyIP4EdgeS0_EvT_S2_RSaIT0_E
	.type	_ZSt8_DestroyIP4EdgeS0_EvT_S2_RSaIT0_E, @function
_ZSt8_DestroyIP4EdgeS0_EvT_S2_RSaIT0_E:
.LFB3358:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt8_DestroyIP4EdgeEvT_S2_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3358:
	.size	_ZSt8_DestroyIP4EdgeS0_EvT_S2_RSaIT0_E, .-_ZSt8_DestroyIP4EdgeS0_EvT_S2_RSaIT0_E
	.section	.text._ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE,"axG",@progbits,_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE,comdat
	.weak	_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE
	.type	_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE, @function
_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE:
.LFB3360:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3360:
	.size	_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE, .-_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE
	.section	.text._ZNSt6vectorI4EdgeSaIS0_EE12emplace_backIJS0_EEEvDpOT_,"axG",@progbits,_ZNSt6vectorI4EdgeSaIS0_EE12emplace_backIJS0_EEEvDpOT_,comdat
	.align 2
	.weak	_ZNSt6vectorI4EdgeSaIS0_EE12emplace_backIJS0_EEEvDpOT_
	.type	_ZNSt6vectorI4EdgeSaIS0_EE12emplace_backIJS0_EEEvDpOT_, @function
_ZNSt6vectorI4EdgeSaIS0_EE12emplace_backIJS0_EEEvDpOT_:
.LFB3359:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, %rdx
	je	.L104
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI4EdgeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	leaq	16(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	jmp	.L106
.L104:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6vectorI4EdgeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_
.L106:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3359:
	.size	_ZNSt6vectorI4EdgeSaIS0_EE12emplace_backIJS0_EEEvDpOT_, .-_ZNSt6vectorI4EdgeSaIS0_EE12emplace_backIJS0_EEEvDpOT_
	.section	.text._ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implD2Ev,"axG",@progbits,_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implD5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implD2Ev
	.type	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implD2Ev, @function
_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implD2Ev:
.LFB3363:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaI5qnodeED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3363:
	.size	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implD2Ev, .-_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implD2Ev
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implD1Ev
	.set	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implD1Ev,_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implD2Ev
	.section	.text._ZNSt12_Vector_baseI5qnodeSaIS0_EEC2Ev,"axG",@progbits,_ZNSt12_Vector_baseI5qnodeSaIS0_EEC5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2Ev
	.type	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2Ev, @function
_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2Ev:
.LFB3365:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3365:
	.size	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2Ev, .-_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2Ev
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC1Ev
	.set	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC1Ev,_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2Ev
	.section	.text._ZNSt12_Vector_baseI5qnodeSaIS0_EED2Ev,"axG",@progbits,_ZNSt12_Vector_baseI5qnodeSaIS0_EED5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EED2Ev
	.type	_ZNSt12_Vector_baseI5qnodeSaIS0_EED2Ev, @function
_ZNSt12_Vector_baseI5qnodeSaIS0_EED2Ev:
.LFB3368:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3368
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$4, %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE13_M_deallocateEPS0_m
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implD1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3368:
	.section	.gcc_except_table
.LLSDA3368:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3368-.LLSDACSB3368
.LLSDACSB3368:
.LLSDACSE3368:
	.section	.text._ZNSt12_Vector_baseI5qnodeSaIS0_EED2Ev,"axG",@progbits,_ZNSt12_Vector_baseI5qnodeSaIS0_EED5Ev,comdat
	.size	_ZNSt12_Vector_baseI5qnodeSaIS0_EED2Ev, .-_ZNSt12_Vector_baseI5qnodeSaIS0_EED2Ev
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EED1Ev
	.set	_ZNSt12_Vector_baseI5qnodeSaIS0_EED1Ev,_ZNSt12_Vector_baseI5qnodeSaIS0_EED2Ev
	.section	.text._ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv,"axG",@progbits,_ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv
	.type	_ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv, @function
_ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv:
.LFB3370:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3370:
	.size	_ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv, .-_ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv
	.section	.text._ZSt8_DestroyIP5qnodeS0_EvT_S2_RSaIT0_E,"axG",@progbits,_ZSt8_DestroyIP5qnodeS0_EvT_S2_RSaIT0_E,comdat
	.weak	_ZSt8_DestroyIP5qnodeS0_EvT_S2_RSaIT0_E
	.type	_ZSt8_DestroyIP5qnodeS0_EvT_S2_RSaIT0_E, @function
_ZSt8_DestroyIP5qnodeS0_EvT_S2_RSaIT0_E:
.LFB3371:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt8_DestroyIP5qnodeEvT_S2_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3371:
	.size	_ZSt8_DestroyIP5qnodeS0_EvT_S2_RSaIT0_E, .-_ZSt8_DestroyIP5qnodeS0_EvT_S2_RSaIT0_E
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EEC2EOS2_,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EEC5EOS2_,comdat
	.align 2
	.weak	_ZNSt6vectorI5qnodeSaIS0_EEC2EOS2_
	.type	_ZNSt6vectorI5qnodeSaIS0_EEC2EOS2_, @function
_ZNSt6vectorI5qnodeSaIS0_EEC2EOS2_:
.LFB3373:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIRSt6vectorI5qnodeSaIS1_EEEONSt16remove_referenceIT_E4typeEOS6_
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2EOS2_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3373:
	.size	_ZNSt6vectorI5qnodeSaIS0_EEC2EOS2_, .-_ZNSt6vectorI5qnodeSaIS0_EEC2EOS2_
	.weak	_ZNSt6vectorI5qnodeSaIS0_EEC1EOS2_
	.set	_ZNSt6vectorI5qnodeSaIS0_EEC1EOS2_,_ZNSt6vectorI5qnodeSaIS0_EEC2EOS2_
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EE5beginEv,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EE5beginEv,comdat
	.align 2
	.weak	_ZNSt6vectorI5qnodeSaIS0_EE5beginEv
	.type	_ZNSt6vectorI5qnodeSaIS0_EE5beginEv, @function
_ZNSt6vectorI5qnodeSaIS0_EE5beginEv:
.LFB3375:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC1ERKS2_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3375:
	.size	_ZNSt6vectorI5qnodeSaIS0_EE5beginEv, .-_ZNSt6vectorI5qnodeSaIS0_EE5beginEv
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EE3endEv,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EE3endEv,comdat
	.align 2
	.weak	_ZNSt6vectorI5qnodeSaIS0_EE3endEv
	.type	_ZNSt6vectorI5qnodeSaIS0_EE3endEv, @function
_ZNSt6vectorI5qnodeSaIS0_EE3endEv:
.LFB3376:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	leaq	8(%rax), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC1ERKS2_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3376:
	.size	_ZNSt6vectorI5qnodeSaIS0_EE3endEv, .-_ZNSt6vectorI5qnodeSaIS0_EE3endEv
	.section	.text._ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEC2ES4_,"axG",@progbits,_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEC5ES4_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEC2ES4_
	.type	_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEC2ES4_, @function
_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEC2ES4_:
.LFB3380:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3380:
	.size	_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEC2ES4_, .-_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEC2ES4_
	.weak	_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEC1ES4_
	.set	_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEC1ES4_,_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEC2ES4_
	.section	.text._ZN9__gnu_cxx5__ops16__iter_comp_iterISt4lessI5qnodeEEENS0_15_Iter_comp_iterIT_EES6_,"axG",@progbits,_ZN9__gnu_cxx5__ops16__iter_comp_iterISt4lessI5qnodeEEENS0_15_Iter_comp_iterIT_EES6_,comdat
	.weak	_ZN9__gnu_cxx5__ops16__iter_comp_iterISt4lessI5qnodeEEENS0_15_Iter_comp_iterIT_EES6_
	.type	_ZN9__gnu_cxx5__ops16__iter_comp_iterISt4lessI5qnodeEEENS0_15_Iter_comp_iterIT_EES6_, @function
_ZN9__gnu_cxx5__ops16__iter_comp_iterISt4lessI5qnodeEEENS0_15_Iter_comp_iterIT_EES6_:
.LFB3378:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	leaq	-17(%rbp), %rax
	subq	$8, %rsp
	pushq	%rdx
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEC1ES4_
	addq	$16, %rsp
	movl	%ebx, %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3378:
	.size	_ZN9__gnu_cxx5__ops16__iter_comp_iterISt4lessI5qnodeEEENS0_15_Iter_comp_iterIT_EES6_, .-_ZN9__gnu_cxx5__ops16__iter_comp_iterISt4lessI5qnodeEEENS0_15_Iter_comp_iterIT_EES6_
	.section	.text._ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_,"axG",@progbits,_ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_,comdat
	.weak	_ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_
	.type	_ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_, @function
_ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_:
.LFB3377:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -32(%rbp)
	movq	%rsi, -48(%rbp)
	subq	$8, %rsp
	pushq	%rax
	call	_ZN9__gnu_cxx5__ops16__iter_comp_iterISt4lessI5qnodeEEENS0_15_Iter_comp_iterIT_EES6_
	addq	$16, %rsp
	movq	-48(%rbp), %rdx
	movq	-32(%rbp), %rax
	subq	$8, %rsp
	pushq	%rbx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_T0_
	addq	$16, %rsp
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3377:
	.size	_ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_, .-_ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_
	.section	.text._ZNKSt6vectorI5qnodeSaIS0_EE5emptyEv,"axG",@progbits,_ZNKSt6vectorI5qnodeSaIS0_EE5emptyEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI5qnodeSaIS0_EE5emptyEv
	.type	_ZNKSt6vectorI5qnodeSaIS0_EE5emptyEv, @function
_ZNKSt6vectorI5qnodeSaIS0_EE5emptyEv:
.LFB3382:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE3endEv
	movq	%rax, -32(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE5beginEv
	movq	%rax, -16(%rbp)
	leaq	-32(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxxeqIPK5qnodeSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3382:
	.size	_ZNKSt6vectorI5qnodeSaIS0_EE5emptyEv, .-_ZNKSt6vectorI5qnodeSaIS0_EE5emptyEv
	.section	.text._ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_,"axG",@progbits,_ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_,comdat
	.weak	_ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_
	.type	_ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_, @function
_ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_:
.LFB3383:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$32, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -32(%rbp)
	movq	%rsi, -48(%rbp)
	leaq	-32(%rbp), %rdx
	leaq	-48(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
	cmpq	$1, %rax
	setg	%al
	testb	%al, %al
	je	.L126
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmmEv
	subq	$8, %rsp
	pushq	%r12
	call	_ZN9__gnu_cxx5__ops16__iter_comp_iterISt4lessI5qnodeEEENS0_15_Iter_comp_iterIT_EES6_
	addq	$16, %rsp
	movq	-48(%rbp), %rdx
	movq	-48(%rbp), %rcx
	movq	-32(%rbp), %rax
	subq	$8, %rsp
	pushq	%rbx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_SD_T0_
	addq	$16, %rsp
.L126:
	nop
	leaq	-16(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3383:
	.size	_ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_, .-_ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EE8pop_backEv,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EE8pop_backEv,comdat
	.align 2
	.weak	_ZNSt6vectorI5qnodeSaIS0_EE8pop_backEv
	.type	_ZNSt6vectorI5qnodeSaIS0_EE8pop_backEv, @function
_ZNSt6vectorI5qnodeSaIS0_EE8pop_backEv:
.LFB3384:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3384
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	leaq	-16(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI5qnodeEE7destroyIS0_EEvRS1_PT_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3384:
	.section	.gcc_except_table
.LLSDA3384:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3384-.LLSDACSB3384
.LLSDACSB3384:
.LLSDACSE3384:
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EE8pop_backEv,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EE8pop_backEv,comdat
	.size	_ZNSt6vectorI5qnodeSaIS0_EE8pop_backEv, .-_ZNSt6vectorI5qnodeSaIS0_EE8pop_backEv
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EE9push_backEOS0_,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EE9push_backEOS0_,comdat
	.align 2
	.weak	_ZNSt6vectorI5qnodeSaIS0_EE9push_backEOS0_
	.type	_ZNSt6vectorI5qnodeSaIS0_EE9push_backEOS0_, @function
_ZNSt6vectorI5qnodeSaIS0_EE9push_backEOS0_:
.LFB3385:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EE12emplace_backIJS0_EEEvDpOT_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3385:
	.size	_ZNSt6vectorI5qnodeSaIS0_EE9push_backEOS0_, .-_ZNSt6vectorI5qnodeSaIS0_EE9push_backEOS0_
	.section	.text._ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_,"axG",@progbits,_ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_,comdat
	.weak	_ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_
	.type	_ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_, @function
_ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_:
.LFB3386:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$64, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -64(%rbp)
	movq	%rsi, -80(%rbp)
	leaq	-80(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmiEl
	movq	%rax, -32(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	8(%rax), %rdx
	movq	(%rax), %rax
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	subq	$8, %rsp
	pushq	%rbx
	call	_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EES6_
	addq	$16, %rsp
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	%rax, %rbx
	leaq	-64(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
	leaq	-1(%rax), %rsi
	movl	(%rbx), %edx
	movq	8(%rbx), %rdi
	movq	-64(%rbp), %rax
	subq	$8, %rsp
	pushq	%r12
	movl	%edx, %ecx
	movq	%rdi, %r8
	movl	$0, %edx
	movq	%rax, %rdi
	call	_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops14_Iter_comp_valISt4lessIS2_EEEEvT_T0_SE_T1_T2_
	addq	$16, %rsp
	nop
	leaq	-16(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3386:
	.size	_ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_, .-_ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEESt4lessIS2_EEvT_SA_T0_
	.section	.text._ZNKSt6vectorI5qnodeSaIS0_EE5frontEv,"axG",@progbits,_ZNKSt6vectorI5qnodeSaIS0_EE5frontEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI5qnodeSaIS0_EE5frontEv
	.type	_ZNKSt6vectorI5qnodeSaIS0_EE5frontEv, @function
_ZNKSt6vectorI5qnodeSaIS0_EE5frontEv:
.LFB3387:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE5beginEv
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3387:
	.size	_ZNKSt6vectorI5qnodeSaIS0_EE5frontEv, .-_ZNKSt6vectorI5qnodeSaIS0_EE5frontEv
	.section	.text._ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implD2Ev,"axG",@progbits,_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implD5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implD2Ev
	.type	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implD2Ev, @function
_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implD2Ev:
.LFB3392:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaI6ticketED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3392:
	.size	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implD2Ev, .-_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implD2Ev
	.weak	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implD1Ev
	.set	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implD1Ev,_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implD2Ev
	.section	.text._ZNSt12_Vector_baseI6ticketSaIS0_EEC2Ev,"axG",@progbits,_ZNSt12_Vector_baseI6ticketSaIS0_EEC5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI6ticketSaIS0_EEC2Ev
	.type	_ZNSt12_Vector_baseI6ticketSaIS0_EEC2Ev, @function
_ZNSt12_Vector_baseI6ticketSaIS0_EEC2Ev:
.LFB3394:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implC1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3394:
	.size	_ZNSt12_Vector_baseI6ticketSaIS0_EEC2Ev, .-_ZNSt12_Vector_baseI6ticketSaIS0_EEC2Ev
	.weak	_ZNSt12_Vector_baseI6ticketSaIS0_EEC1Ev
	.set	_ZNSt12_Vector_baseI6ticketSaIS0_EEC1Ev,_ZNSt12_Vector_baseI6ticketSaIS0_EEC2Ev
	.section	.text._ZNSt12_Vector_baseI6ticketSaIS0_EED2Ev,"axG",@progbits,_ZNSt12_Vector_baseI6ticketSaIS0_EED5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI6ticketSaIS0_EED2Ev
	.type	_ZNSt12_Vector_baseI6ticketSaIS0_EED2Ev, @function
_ZNSt12_Vector_baseI6ticketSaIS0_EED2Ev:
.LFB3397:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3397
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$4, %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EE13_M_deallocateEPS0_m
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implD1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3397:
	.section	.gcc_except_table
.LLSDA3397:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3397-.LLSDACSB3397
.LLSDACSB3397:
.LLSDACSE3397:
	.section	.text._ZNSt12_Vector_baseI6ticketSaIS0_EED2Ev,"axG",@progbits,_ZNSt12_Vector_baseI6ticketSaIS0_EED5Ev,comdat
	.size	_ZNSt12_Vector_baseI6ticketSaIS0_EED2Ev, .-_ZNSt12_Vector_baseI6ticketSaIS0_EED2Ev
	.weak	_ZNSt12_Vector_baseI6ticketSaIS0_EED1Ev
	.set	_ZNSt12_Vector_baseI6ticketSaIS0_EED1Ev,_ZNSt12_Vector_baseI6ticketSaIS0_EED2Ev
	.section	.text._ZNSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv,"axG",@progbits,_ZNSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv
	.type	_ZNSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv, @function
_ZNSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv:
.LFB3399:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3399:
	.size	_ZNSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv, .-_ZNSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv
	.section	.text._ZSt8_DestroyIP6ticketS0_EvT_S2_RSaIT0_E,"axG",@progbits,_ZSt8_DestroyIP6ticketS0_EvT_S2_RSaIT0_E,comdat
	.weak	_ZSt8_DestroyIP6ticketS0_EvT_S2_RSaIT0_E
	.type	_ZSt8_DestroyIP6ticketS0_EvT_S2_RSaIT0_E, @function
_ZSt8_DestroyIP6ticketS0_EvT_S2_RSaIT0_E:
.LFB3400:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt8_DestroyIP6ticketEvT_S2_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3400:
	.size	_ZSt8_DestroyIP6ticketS0_EvT_S2_RSaIT0_E, .-_ZSt8_DestroyIP6ticketS0_EvT_S2_RSaIT0_E
	.section	.text._ZSt7forwardIRK6ticketEOT_RNSt16remove_referenceIS3_E4typeE,"axG",@progbits,_ZSt7forwardIRK6ticketEOT_RNSt16remove_referenceIS3_E4typeE,comdat
	.weak	_ZSt7forwardIRK6ticketEOT_RNSt16remove_referenceIS3_E4typeE
	.type	_ZSt7forwardIRK6ticketEOT_RNSt16remove_referenceIS3_E4typeE, @function
_ZSt7forwardIRK6ticketEOT_RNSt16remove_referenceIS3_E4typeE:
.LFB3402:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3402:
	.size	_ZSt7forwardIRK6ticketEOT_RNSt16remove_referenceIS3_E4typeE, .-_ZSt7forwardIRK6ticketEOT_RNSt16remove_referenceIS3_E4typeE
	.section	.text._ZNSt16allocator_traitsISaI6ticketEE9constructIS0_JRKS0_EEEvRS1_PT_DpOT0_,"axG",@progbits,_ZNSt16allocator_traitsISaI6ticketEE9constructIS0_JRKS0_EEEvRS1_PT_DpOT0_,comdat
	.weak	_ZNSt16allocator_traitsISaI6ticketEE9constructIS0_JRKS0_EEEvRS1_PT_DpOT0_
	.type	_ZNSt16allocator_traitsISaI6ticketEE9constructIS0_JRKS0_EEEvRS1_PT_DpOT0_, @function
_ZNSt16allocator_traitsISaI6ticketEE9constructIS0_JRKS0_EEEvRS1_PT_DpOT0_:
.LFB3401:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardIRK6ticketEOT_RNSt16remove_referenceIS3_E4typeE
	movq	%rax, %rdx
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI6ticketE9constructIS1_JRKS1_EEEvPT_DpOT0_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3401:
	.size	_ZNSt16allocator_traitsISaI6ticketEE9constructIS0_JRKS0_EEEvRS1_PT_DpOT0_, .-_ZNSt16allocator_traitsISaI6ticketEE9constructIS0_JRKS0_EEEvRS1_PT_DpOT0_
	.section	.rodata
.LC0:
	.string	"vector::_M_emplace_back_aux"
	.section	.text._ZNSt6vectorI6ticketSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_,"axG",@progbits,_ZNSt6vectorI6ticketSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_,comdat
	.align 2
	.weak	_ZNSt6vectorI6ticketSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_
	.type	_ZNSt6vectorI6ticketSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_, @function
_ZNSt6vectorI6ticketSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_:
.LFB3403:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3403
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movq	%rsi, -64(%rbp)
	movq	-56(%rbp), %rax
	movl	$.LC0, %edx
	movl	$1, %esi
	movq	%rax, %rdi
.LEHB8:
	call	_ZNKSt6vectorI6ticketSaIS0_EE12_M_check_lenEmPKc
	movq	%rax, -32(%rbp)
	movq	-56(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EE11_M_allocateEm
.LEHE8:
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardIRK6ticketEOT_RNSt16remove_referenceIS3_E4typeE
	movq	%rax, %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-56(%rbp), %rax
	movq	%rbx, %rdx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI6ticketEE9constructIS0_JRKS0_EEEvRS1_PT_DpOT0_
	movq	$0, -24(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	movq	-56(%rbp), %rax
	movq	8(%rax), %rsi
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movq	-40(%rbp), %rdx
	movq	%rax, %rdi
.LEHB9:
	call	_ZSt34__uninitialized_move_if_noexcept_aIP6ticketS1_SaIS0_EET0_T_S4_S3_RT1_
.LEHE9:
	movq	%rax, -24(%rbp)
	addq	$16, -24(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB10:
	call	_ZSt8_DestroyIP6ticketS0_EvT_S2_RSaIT0_E
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$4, %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	(%rax), %rcx
	movq	-56(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EE13_M_deallocateEPS0_m
.LEHE10:
	movq	-56(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-56(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-32(%rbp), %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, 16(%rax)
	jmp	.L148
.L146:
	movq	%rax, %rdi
	call	__cxa_begin_catch
	cmpq	$0, -24(%rbp)
	jne	.L143
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB11:
	call	_ZNSt16allocator_traitsISaI6ticketEE7destroyIS0_EEvRS1_PT_
	jmp	.L144
.L143:
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdx
	movq	-24(%rbp), %rcx
	movq	-40(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt8_DestroyIP6ticketS0_EvT_S2_RSaIT0_E
.L144:
	movq	-56(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	-40(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI6ticketSaIS0_EE13_M_deallocateEPS0_m
	call	__cxa_rethrow
.LEHE11:
.L147:
	movq	%rax, %rbx
	call	__cxa_end_catch
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB12:
	call	_Unwind_Resume
.LEHE12:
.L148:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3403:
	.section	.gcc_except_table
	.align 4
.LLSDA3403:
	.byte	0xff
	.byte	0x3
	.uleb128 .LLSDATT3403-.LLSDATTD3403
.LLSDATTD3403:
	.byte	0x1
	.uleb128 .LLSDACSE3403-.LLSDACSB3403
.LLSDACSB3403:
	.uleb128 .LEHB8-.LFB3403
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB9-.LFB3403
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L146-.LFB3403
	.uleb128 0x1
	.uleb128 .LEHB10-.LFB3403
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB11-.LFB3403
	.uleb128 .LEHE11-.LEHB11
	.uleb128 .L147-.LFB3403
	.uleb128 0
	.uleb128 .LEHB12-.LFB3403
	.uleb128 .LEHE12-.LEHB12
	.uleb128 0
	.uleb128 0
.LLSDACSE3403:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3403:
	.section	.text._ZNSt6vectorI6ticketSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_,"axG",@progbits,_ZNSt6vectorI6ticketSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_,comdat
	.size	_ZNSt6vectorI6ticketSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_, .-_ZNSt6vectorI6ticketSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC2ERKS2_,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC5ERKS2_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC2ERKS2_
	.type	_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC2ERKS2_, @function
_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC2ERKS2_:
.LFB3405:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3405:
	.size	_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC2ERKS2_, .-_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC2ERKS2_
	.weak	_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC1ERKS2_
	.set	_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC1ERKS2_,_ZN9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEEC2ERKS2_
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEE4baseEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEE4baseEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEE4baseEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEE4baseEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEE4baseEv:
.LFB3407:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3407:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEE4baseEv, .-_ZNK9__gnu_cxx17__normal_iteratorIP6ticketSt6vectorIS1_SaIS1_EEE4baseEv
	.section	.text._ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implC2Ev,"axG",@progbits,_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implC5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implC2Ev
	.type	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implC2Ev, @function
_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implC2Ev:
.LFB3443:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaI4EdgeEC2Ev
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 16(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3443:
	.size	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implC2Ev, .-_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implC2Ev
	.weak	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implC1Ev
	.set	_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implC1Ev,_ZNSt12_Vector_baseI4EdgeSaIS0_EE12_Vector_implC2Ev
	.section	.text._ZNSaI4EdgeED2Ev,"axG",@progbits,_ZNSaI4EdgeED5Ev,comdat
	.align 2
	.weak	_ZNSaI4EdgeED2Ev
	.type	_ZNSaI4EdgeED2Ev, @function
_ZNSaI4EdgeED2Ev:
.LFB3446:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI4EdgeED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3446:
	.size	_ZNSaI4EdgeED2Ev, .-_ZNSaI4EdgeED2Ev
	.weak	_ZNSaI4EdgeED1Ev
	.set	_ZNSaI4EdgeED1Ev,_ZNSaI4EdgeED2Ev
	.section	.text._ZNSt12_Vector_baseI4EdgeSaIS0_EE13_M_deallocateEPS0_m,"axG",@progbits,_ZNSt12_Vector_baseI4EdgeSaIS0_EE13_M_deallocateEPS0_m,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI4EdgeSaIS0_EE13_M_deallocateEPS0_m
	.type	_ZNSt12_Vector_baseI4EdgeSaIS0_EE13_M_deallocateEPS0_m, @function
_ZNSt12_Vector_baseI4EdgeSaIS0_EE13_M_deallocateEPS0_m:
.LFB3448:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L156
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI4EdgeEE10deallocateERS1_PS0_m
.L156:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3448:
	.size	_ZNSt12_Vector_baseI4EdgeSaIS0_EE13_M_deallocateEPS0_m, .-_ZNSt12_Vector_baseI4EdgeSaIS0_EE13_M_deallocateEPS0_m
	.section	.text._ZSt8_DestroyIP4EdgeEvT_S2_,"axG",@progbits,_ZSt8_DestroyIP4EdgeEvT_S2_,comdat
	.weak	_ZSt8_DestroyIP4EdgeEvT_S2_
	.type	_ZSt8_DestroyIP4EdgeEvT_S2_, @function
_ZSt8_DestroyIP4EdgeEvT_S2_:
.LFB3449:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Destroy_auxILb1EE9__destroyIP4EdgeEEvT_S4_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3449:
	.size	_ZSt8_DestroyIP4EdgeEvT_S2_, .-_ZSt8_DestroyIP4EdgeEvT_S2_
	.section	.text._ZNSt16allocator_traitsISaI4EdgeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_,"axG",@progbits,_ZNSt16allocator_traitsISaI4EdgeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_,comdat
	.weak	_ZNSt16allocator_traitsISaI4EdgeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	.type	_ZNSt16allocator_traitsISaI4EdgeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_, @function
_ZNSt16allocator_traitsISaI4EdgeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_:
.LFB3450:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rdx
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI4EdgeE9constructIS1_JS1_EEEvPT_DpOT0_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3450:
	.size	_ZNSt16allocator_traitsISaI4EdgeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_, .-_ZNSt16allocator_traitsISaI4EdgeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	.section	.text._ZNSt6vectorI4EdgeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_,"axG",@progbits,_ZNSt6vectorI4EdgeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_,comdat
	.align 2
	.weak	_ZNSt6vectorI4EdgeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_
	.type	_ZNSt6vectorI4EdgeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_, @function
_ZNSt6vectorI4EdgeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_:
.LFB3451:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3451
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movq	%rsi, -64(%rbp)
	movq	-56(%rbp), %rax
	movl	$.LC0, %edx
	movl	$1, %esi
	movq	%rax, %rdi
.LEHB13:
	call	_ZNKSt6vectorI4EdgeSaIS0_EE12_M_check_lenEmPKc
	movq	%rax, -32(%rbp)
	movq	-56(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EE11_M_allocateEm
.LEHE13:
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-56(%rbp), %rax
	movq	%rbx, %rdx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI4EdgeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	movq	$0, -24(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	movq	-56(%rbp), %rax
	movq	8(%rax), %rsi
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movq	-40(%rbp), %rdx
	movq	%rax, %rdi
.LEHB14:
	call	_ZSt34__uninitialized_move_if_noexcept_aIP4EdgeS1_SaIS0_EET0_T_S4_S3_RT1_
.LEHE14:
	movq	%rax, -24(%rbp)
	addq	$16, -24(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB15:
	call	_ZSt8_DestroyIP4EdgeS0_EvT_S2_RSaIT0_E
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$4, %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	(%rax), %rcx
	movq	-56(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EE13_M_deallocateEPS0_m
.LEHE15:
	movq	-56(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-56(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-32(%rbp), %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, 16(%rax)
	jmp	.L166
.L164:
	movq	%rax, %rdi
	call	__cxa_begin_catch
	cmpq	$0, -24(%rbp)
	jne	.L161
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB16:
	call	_ZNSt16allocator_traitsISaI4EdgeEE7destroyIS0_EEvRS1_PT_
	jmp	.L162
.L161:
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdx
	movq	-24(%rbp), %rcx
	movq	-40(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt8_DestroyIP4EdgeS0_EvT_S2_RSaIT0_E
.L162:
	movq	-56(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	-40(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI4EdgeSaIS0_EE13_M_deallocateEPS0_m
	call	__cxa_rethrow
.LEHE16:
.L165:
	movq	%rax, %rbx
	call	__cxa_end_catch
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB17:
	call	_Unwind_Resume
.LEHE17:
.L166:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3451:
	.section	.gcc_except_table
	.align 4
.LLSDA3451:
	.byte	0xff
	.byte	0x3
	.uleb128 .LLSDATT3451-.LLSDATTD3451
.LLSDATTD3451:
	.byte	0x1
	.uleb128 .LLSDACSE3451-.LLSDACSB3451
.LLSDACSB3451:
	.uleb128 .LEHB13-.LFB3451
	.uleb128 .LEHE13-.LEHB13
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB14-.LFB3451
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L164-.LFB3451
	.uleb128 0x1
	.uleb128 .LEHB15-.LFB3451
	.uleb128 .LEHE15-.LEHB15
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB16-.LFB3451
	.uleb128 .LEHE16-.LEHB16
	.uleb128 .L165-.LFB3451
	.uleb128 0
	.uleb128 .LEHB17-.LFB3451
	.uleb128 .LEHE17-.LEHB17
	.uleb128 0
	.uleb128 0
.LLSDACSE3451:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3451:
	.section	.text._ZNSt6vectorI4EdgeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_,"axG",@progbits,_ZNSt6vectorI4EdgeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_,comdat
	.size	_ZNSt6vectorI4EdgeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_, .-_ZNSt6vectorI4EdgeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_
	.section	.text._ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2Ev,"axG",@progbits,_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2Ev
	.type	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2Ev, @function
_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2Ev:
.LFB3453:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaI5qnodeEC2Ev
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 16(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3453:
	.size	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2Ev, .-_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2Ev
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC1Ev
	.set	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC1Ev,_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2Ev
	.section	.text._ZNSaI5qnodeED2Ev,"axG",@progbits,_ZNSaI5qnodeED5Ev,comdat
	.align 2
	.weak	_ZNSaI5qnodeED2Ev
	.type	_ZNSaI5qnodeED2Ev, @function
_ZNSaI5qnodeED2Ev:
.LFB3456:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI5qnodeED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3456:
	.size	_ZNSaI5qnodeED2Ev, .-_ZNSaI5qnodeED2Ev
	.weak	_ZNSaI5qnodeED1Ev
	.set	_ZNSaI5qnodeED1Ev,_ZNSaI5qnodeED2Ev
	.section	.text._ZNSt12_Vector_baseI5qnodeSaIS0_EE13_M_deallocateEPS0_m,"axG",@progbits,_ZNSt12_Vector_baseI5qnodeSaIS0_EE13_M_deallocateEPS0_m,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EE13_M_deallocateEPS0_m
	.type	_ZNSt12_Vector_baseI5qnodeSaIS0_EE13_M_deallocateEPS0_m, @function
_ZNSt12_Vector_baseI5qnodeSaIS0_EE13_M_deallocateEPS0_m:
.LFB3458:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L171
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI5qnodeEE10deallocateERS1_PS0_m
.L171:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3458:
	.size	_ZNSt12_Vector_baseI5qnodeSaIS0_EE13_M_deallocateEPS0_m, .-_ZNSt12_Vector_baseI5qnodeSaIS0_EE13_M_deallocateEPS0_m
	.section	.text._ZSt8_DestroyIP5qnodeEvT_S2_,"axG",@progbits,_ZSt8_DestroyIP5qnodeEvT_S2_,comdat
	.weak	_ZSt8_DestroyIP5qnodeEvT_S2_
	.type	_ZSt8_DestroyIP5qnodeEvT_S2_, @function
_ZSt8_DestroyIP5qnodeEvT_S2_:
.LFB3459:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Destroy_auxILb1EE9__destroyIP5qnodeEEvT_S4_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3459:
	.size	_ZSt8_DestroyIP5qnodeEvT_S2_, .-_ZSt8_DestroyIP5qnodeEvT_S2_
	.section	.text._ZSt4moveIRSaI5qnodeEEONSt16remove_referenceIT_E4typeEOS4_,"axG",@progbits,_ZSt4moveIRSaI5qnodeEEONSt16remove_referenceIT_E4typeEOS4_,comdat
	.weak	_ZSt4moveIRSaI5qnodeEEONSt16remove_referenceIT_E4typeEOS4_
	.type	_ZSt4moveIRSaI5qnodeEEONSt16remove_referenceIT_E4typeEOS4_, @function
_ZSt4moveIRSaI5qnodeEEONSt16remove_referenceIT_E4typeEOS4_:
.LFB3461:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3461:
	.size	_ZSt4moveIRSaI5qnodeEEONSt16remove_referenceIT_E4typeEOS4_, .-_ZSt4moveIRSaI5qnodeEEONSt16remove_referenceIT_E4typeEOS4_
	.section	.text._ZNSt12_Vector_baseI5qnodeSaIS0_EEC2EOS2_,"axG",@progbits,_ZNSt12_Vector_baseI5qnodeSaIS0_EEC5EOS2_,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2EOS2_
	.type	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2EOS2_, @function
_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2EOS2_:
.LFB3462:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdi
	call	_ZSt4moveIRSaI5qnodeEEONSt16remove_referenceIT_E4typeEOS4_
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC1EOS1_
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_impl12_M_swap_dataERS3_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3462:
	.size	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2EOS2_, .-_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2EOS2_
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC1EOS2_
	.set	_ZNSt12_Vector_baseI5qnodeSaIS0_EEC1EOS2_,_ZNSt12_Vector_baseI5qnodeSaIS0_EEC2EOS2_
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS2_,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC5ERKS2_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS2_
	.type	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS2_, @function
_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS2_:
.LFB3465:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3465:
	.size	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS2_, .-_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS2_
	.weak	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC1ERKS2_
	.set	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC1ERKS2_,_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS2_
	.section	.text._ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_T0_,"axG",@progbits,_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_T0_,comdat
	.weak	_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_T0_
	.type	_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_T0_, @function
_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_T0_:
.LFB3467:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%rdi, -64(%rbp)
	movq	%rsi, -80(%rbp)
	leaq	-64(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
	cmpq	$1, %rax
	setle	%al
	testb	%al, %al
	jne	.L182
	leaq	-64(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	subq	$2, %rax
	movq	%rax, %rdx
	shrq	$63, %rdx
	addq	%rdx, %rax
	sarq	%rax
	movq	%rax, -8(%rbp)
.L181:
	movq	-8(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	movq	%rax, -32(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	8(%rax), %rdx
	movq	(%rax), %rax
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movl	(%rax), %ecx
	movq	8(%rax), %r8
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rsi
	movq	-64(%rbp), %rax
	subq	$8, %rsp
	movzbl	16(%rbp), %edi
	pushq	%rdi
	movq	%rax, %rdi
	call	_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_T0_SE_T1_T2_
	addq	$16, %rsp
	cmpq	$0, -8(%rbp)
	je	.L183
	subq	$1, -8(%rbp)
	jmp	.L181
.L182:
	nop
	jmp	.L177
.L183:
	nop
.L177:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3467:
	.size	_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_T0_, .-_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_T0_
	.section	.text._ZNKSt6vectorI5qnodeSaIS0_EE5beginEv,"axG",@progbits,_ZNKSt6vectorI5qnodeSaIS0_EE5beginEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI5qnodeSaIS0_EE5beginEv
	.type	_ZNKSt6vectorI5qnodeSaIS0_EE5beginEv, @function
_ZNKSt6vectorI5qnodeSaIS0_EE5beginEv:
.LFB3468:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC1ERKS3_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3468:
	.size	_ZNKSt6vectorI5qnodeSaIS0_EE5beginEv, .-_ZNKSt6vectorI5qnodeSaIS0_EE5beginEv
	.section	.text._ZNKSt6vectorI5qnodeSaIS0_EE3endEv,"axG",@progbits,_ZNKSt6vectorI5qnodeSaIS0_EE3endEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI5qnodeSaIS0_EE3endEv
	.type	_ZNKSt6vectorI5qnodeSaIS0_EE3endEv, @function
_ZNKSt6vectorI5qnodeSaIS0_EE3endEv:
.LFB3469:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC1ERKS3_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3469:
	.size	_ZNKSt6vectorI5qnodeSaIS0_EE3endEv, .-_ZNKSt6vectorI5qnodeSaIS0_EE3endEv
	.section	.text._ZN9__gnu_cxxeqIPK5qnodeSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_,"axG",@progbits,_ZN9__gnu_cxxeqIPK5qnodeSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_,comdat
	.weak	_ZN9__gnu_cxxeqIPK5qnodeSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_
	.type	_ZN9__gnu_cxxeqIPK5qnodeSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_, @function
_ZN9__gnu_cxxeqIPK5qnodeSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_:
.LFB3470:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEE4baseEv
	movq	(%rax), %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEE4baseEv
	movq	(%rax), %rax
	cmpq	%rax, %rbx
	sete	%al
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3470:
	.size	_ZN9__gnu_cxxeqIPK5qnodeSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_, .-_ZN9__gnu_cxxeqIPK5qnodeSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_
	.section	.text._ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_,"axG",@progbits,_ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_,comdat
	.weak	_ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
	.type	_ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_, @function
_ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_:
.LFB3471:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEE4baseEv
	movq	(%rax), %rax
	movq	%rax, %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEE4baseEv
	movq	(%rax), %rax
	subq	%rax, %rbx
	movq	%rbx, %rax
	sarq	$4, %rax
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3471:
	.size	_ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_, .-_ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmmEv,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmmEv,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmmEv
	.type	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmmEv, @function
_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmmEv:
.LFB3472:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	leaq	-16(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3472:
	.size	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmmEv, .-_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmmEv
	.section	.text._ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_SD_T0_,"axG",@progbits,_ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_SD_T0_,comdat
	.weak	_ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_SD_T0_
	.type	_ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_SD_T0_, @function
_ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_SD_T0_:
.LFB3473:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -48(%rbp)
	movq	%rsi, -64(%rbp)
	movq	%rdx, -80(%rbp)
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	8(%rax), %rdx
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	8(%rax), %rdx
	movq	(%rax), %rax
	movq	%rax, (%rbx)
	movq	%rdx, 8(%rbx)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	%rax, %rbx
	leaq	-48(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxxmiIP5qnodeSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
	movq	%rax, %rdi
	movl	(%rbx), %edx
	movq	8(%rbx), %rsi
	movq	-48(%rbp), %rax
	subq	$8, %rsp
	movzbl	16(%rbp), %ecx
	pushq	%rcx
	movl	%edx, %ecx
	movq	%rsi, %r8
	movq	%rdi, %rdx
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_T0_SE_T1_T2_
	addq	$16, %rsp
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3473:
	.size	_ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_SD_T0_, .-_ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEENS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_SD_SD_T0_
	.section	.text._ZNSt16allocator_traitsISaI5qnodeEE7destroyIS0_EEvRS1_PT_,"axG",@progbits,_ZNSt16allocator_traitsISaI5qnodeEE7destroyIS0_EEvRS1_PT_,comdat
	.weak	_ZNSt16allocator_traitsISaI5qnodeEE7destroyIS0_EEvRS1_PT_
	.type	_ZNSt16allocator_traitsISaI5qnodeEE7destroyIS0_EEvRS1_PT_, @function
_ZNSt16allocator_traitsISaI5qnodeEE7destroyIS0_EEvRS1_PT_:
.LFB3474:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI5qnodeE7destroyIS1_EEvPT_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3474:
	.size	_ZNSt16allocator_traitsISaI5qnodeEE7destroyIS0_EEvRS1_PT_, .-_ZNSt16allocator_traitsISaI5qnodeEE7destroyIS0_EEvRS1_PT_
	.section	.text._ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE,"axG",@progbits,_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE,comdat
	.weak	_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE
	.type	_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE, @function
_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE:
.LFB3476:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3476:
	.size	_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE, .-_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EE12emplace_backIJS0_EEEvDpOT_,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EE12emplace_backIJS0_EEEvDpOT_,comdat
	.align 2
	.weak	_ZNSt6vectorI5qnodeSaIS0_EE12emplace_backIJS0_EEEvDpOT_
	.type	_ZNSt6vectorI5qnodeSaIS0_EE12emplace_backIJS0_EEEvDpOT_, @function
_ZNSt6vectorI5qnodeSaIS0_EE12emplace_backIJS0_EEEvDpOT_:
.LFB3475:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, %rdx
	je	.L199
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI5qnodeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	leaq	16(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	jmp	.L201
.L199:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6vectorI5qnodeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_
.L201:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3475:
	.size	_ZNSt6vectorI5qnodeSaIS0_EE12emplace_backIJS0_EEEvDpOT_, .-_ZNSt6vectorI5qnodeSaIS0_EE12emplace_backIJS0_EEEvDpOT_
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmiEl,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmiEl,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmiEl
	.type	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmiEl, @function
_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmiEl:
.LFB3477:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rdx
	salq	$4, %rdx
	negq	%rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC1ERKS2_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3477:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmiEl, .-_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEmiEl
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv:
.LFB3478:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3478:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv, .-_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	.section	.text._ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EES6_,"axG",@progbits,_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EES6_,comdat
	.weak	_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EES6_
	.type	_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EES6_, @function
_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EES6_:
.LFB3479:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	leaq	-17(%rbp), %rax
	subq	$8, %rsp
	pushq	%rdx
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC1ES4_
	addq	$16, %rsp
	movl	%ebx, %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3479:
	.size	_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EES6_, .-_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EES6_
	.section	.text._ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops14_Iter_comp_valISt4lessIS2_EEEEvT_T0_SE_T1_T2_,"axG",@progbits,_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops14_Iter_comp_valISt4lessIS2_EEEEvT_T0_SE_T1_T2_,comdat
	.weak	_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops14_Iter_comp_valISt4lessIS2_EEEEvT_T0_SE_T1_T2_
	.type	_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops14_Iter_comp_valISt4lessIS2_EEEEvT_T0_SE_T1_T2_, @function
_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops14_Iter_comp_valISt4lessIS2_EEEEvT_T0_SE_T1_T2_:
.LFB3480:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -80(%rbp)
	movq	%rsi, -72(%rbp)
	movq	%rdx, -88(%rbp)
	movl	%ecx, %eax
	movq	%r8, %rcx
	movq	%rcx, %rdx
	movq	%rax, -112(%rbp)
	movq	%rdx, -104(%rbp)
	movq	-72(%rbp), %rax
	subq	$1, %rax
	movq	%rax, %rdx
	shrq	$63, %rdx
	addq	%rdx, %rax
	sarq	%rax
	movq	%rax, -24(%rbp)
.L212:
	movq	-72(%rbp), %rax
	cmpq	-88(%rbp), %rax
	jle	.L209
	movq	-24(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	movq	%rax, %rcx
	leaq	-112(%rbp), %rax
	movq	%rax, %rdx
	movq	%rcx, %rsi
	leaq	16(%rbp), %rdi
	call	_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEES3_EEbT_RT0_
	testb	%al, %al
	je	.L209
	movl	$1, %eax
	jmp	.L210
.L209:
	movl	$0, %eax
.L210:
	testb	%al, %al
	je	.L211
	movq	-72(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rbx
	movq	-24(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	movq	%rax, -48(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	8(%rax), %rdx
	movq	(%rax), %rax
	movq	%rax, (%rbx)
	movq	%rdx, 8(%rbx)
	movq	-24(%rbp), %rax
	movq	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	subq	$1, %rax
	movq	%rax, %rdx
	shrq	$63, %rdx
	addq	%rdx, %rax
	sarq	%rax
	movq	%rax, -24(%rbp)
	jmp	.L212
.L211:
	movq	-72(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	movq	%rax, -32(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rbx
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	8(%rax), %rdx
	movq	(%rax), %rax
	movq	%rax, (%rbx)
	movq	%rdx, 8(%rbx)
	nop
	addq	$104, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3480:
	.size	_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops14_Iter_comp_valISt4lessIS2_EEEEvT_T0_SE_T1_T2_, .-_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops14_Iter_comp_valISt4lessIS2_EEEEvT_T0_SE_T1_T2_
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEdeEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEdeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEdeEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEdeEv:
.LFB3481:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3481:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEdeEv, .-_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	.section	.text._ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implC2Ev,"axG",@progbits,_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implC5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implC2Ev
	.type	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implC2Ev, @function
_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implC2Ev:
.LFB3484:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaI6ticketEC2Ev
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 16(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3484:
	.size	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implC2Ev, .-_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implC2Ev
	.weak	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implC1Ev
	.set	_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implC1Ev,_ZNSt12_Vector_baseI6ticketSaIS0_EE12_Vector_implC2Ev
	.section	.text._ZNSaI6ticketED2Ev,"axG",@progbits,_ZNSaI6ticketED5Ev,comdat
	.align 2
	.weak	_ZNSaI6ticketED2Ev
	.type	_ZNSaI6ticketED2Ev, @function
_ZNSaI6ticketED2Ev:
.LFB3487:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI6ticketED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3487:
	.size	_ZNSaI6ticketED2Ev, .-_ZNSaI6ticketED2Ev
	.weak	_ZNSaI6ticketED1Ev
	.set	_ZNSaI6ticketED1Ev,_ZNSaI6ticketED2Ev
	.section	.text._ZNSt12_Vector_baseI6ticketSaIS0_EE13_M_deallocateEPS0_m,"axG",@progbits,_ZNSt12_Vector_baseI6ticketSaIS0_EE13_M_deallocateEPS0_m,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI6ticketSaIS0_EE13_M_deallocateEPS0_m
	.type	_ZNSt12_Vector_baseI6ticketSaIS0_EE13_M_deallocateEPS0_m, @function
_ZNSt12_Vector_baseI6ticketSaIS0_EE13_M_deallocateEPS0_m:
.LFB3489:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L219
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI6ticketEE10deallocateERS1_PS0_m
.L219:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3489:
	.size	_ZNSt12_Vector_baseI6ticketSaIS0_EE13_M_deallocateEPS0_m, .-_ZNSt12_Vector_baseI6ticketSaIS0_EE13_M_deallocateEPS0_m
	.section	.text._ZSt8_DestroyIP6ticketEvT_S2_,"axG",@progbits,_ZSt8_DestroyIP6ticketEvT_S2_,comdat
	.weak	_ZSt8_DestroyIP6ticketEvT_S2_
	.type	_ZSt8_DestroyIP6ticketEvT_S2_, @function
_ZSt8_DestroyIP6ticketEvT_S2_:
.LFB3490:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Destroy_auxILb1EE9__destroyIP6ticketEEvT_S4_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3490:
	.size	_ZSt8_DestroyIP6ticketEvT_S2_, .-_ZSt8_DestroyIP6ticketEvT_S2_
	.section	.text._ZN9__gnu_cxx13new_allocatorI6ticketE9constructIS1_JRKS1_EEEvPT_DpOT0_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI6ticketE9constructIS1_JRKS1_EEEvPT_DpOT0_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI6ticketE9constructIS1_JRKS1_EEEvPT_DpOT0_
	.type	_ZN9__gnu_cxx13new_allocatorI6ticketE9constructIS1_JRKS1_EEEvPT_DpOT0_, @function
_ZN9__gnu_cxx13new_allocatorI6ticketE9constructIS1_JRKS1_EEEvPT_DpOT0_:
.LFB3491:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardIRK6ticketEOT_RNSt16remove_referenceIS3_E4typeE
	movq	%rax, %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$16, %edi
	call	_ZnwmPv
	movq	%rax, %rcx
	testq	%rcx, %rcx
	je	.L224
	movq	(%rbx), %rax
	movq	8(%rbx), %rdx
	movq	%rax, (%rcx)
	movq	%rdx, 8(%rcx)
.L224:
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3491:
	.size	_ZN9__gnu_cxx13new_allocatorI6ticketE9constructIS1_JRKS1_EEEvPT_DpOT0_, .-_ZN9__gnu_cxx13new_allocatorI6ticketE9constructIS1_JRKS1_EEEvPT_DpOT0_
	.section	.text._ZSt3maxImERKT_S2_S2_,"axG",@progbits,_ZSt3maxImERKT_S2_S2_,comdat
	.weak	_ZSt3maxImERKT_S2_S2_
	.type	_ZSt3maxImERKT_S2_S2_, @function
_ZSt3maxImERKT_S2_S2_:
.LFB3493:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jnb	.L226
	movq	-16(%rbp), %rax
	jmp	.L227
.L226:
	movq	-8(%rbp), %rax
.L227:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3493:
	.size	_ZSt3maxImERKT_S2_S2_, .-_ZSt3maxImERKT_S2_S2_
	.section	.text._ZNKSt6vectorI6ticketSaIS0_EE12_M_check_lenEmPKc,"axG",@progbits,_ZNKSt6vectorI6ticketSaIS0_EE12_M_check_lenEmPKc,comdat
	.align 2
	.weak	_ZNKSt6vectorI6ticketSaIS0_EE12_M_check_lenEmPKc
	.type	_ZNKSt6vectorI6ticketSaIS0_EE12_M_check_lenEmPKc, @function
_ZNKSt6vectorI6ticketSaIS0_EE12_M_check_lenEmPKc:
.LFB3492:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI6ticketSaIS0_EE8max_sizeEv
	movq	%rax, %rbx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv
	subq	%rax, %rbx
	movq	%rbx, %rdx
	movq	-48(%rbp), %rax
	cmpq	%rax, %rdx
	setb	%al
	testb	%al, %al
	je	.L229
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt20__throw_length_errorPKc
.L229:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv
	movq	%rax, %rbx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv
	movq	%rax, -32(%rbp)
	leaq	-48(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3maxImERKT_S2_S2_
	movq	(%rax), %rax
	addq	%rbx, %rax
	movq	%rax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv
	cmpq	-24(%rbp), %rax
	ja	.L230
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI6ticketSaIS0_EE8max_sizeEv
	cmpq	-24(%rbp), %rax
	jnb	.L231
.L230:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI6ticketSaIS0_EE8max_sizeEv
	jmp	.L232
.L231:
	movq	-24(%rbp), %rax
.L232:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3492:
	.size	_ZNKSt6vectorI6ticketSaIS0_EE12_M_check_lenEmPKc, .-_ZNKSt6vectorI6ticketSaIS0_EE12_M_check_lenEmPKc
	.section	.text._ZNSt12_Vector_baseI6ticketSaIS0_EE11_M_allocateEm,"axG",@progbits,_ZNSt12_Vector_baseI6ticketSaIS0_EE11_M_allocateEm,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI6ticketSaIS0_EE11_M_allocateEm
	.type	_ZNSt12_Vector_baseI6ticketSaIS0_EE11_M_allocateEm, @function
_ZNSt12_Vector_baseI6ticketSaIS0_EE11_M_allocateEm:
.LFB3494:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L235
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI6ticketEE8allocateERS1_m
	jmp	.L237
.L235:
	movl	$0, %eax
.L237:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3494:
	.size	_ZNSt12_Vector_baseI6ticketSaIS0_EE11_M_allocateEm, .-_ZNSt12_Vector_baseI6ticketSaIS0_EE11_M_allocateEm
	.section	.text._ZNKSt6vectorI6ticketSaIS0_EE4sizeEv,"axG",@progbits,_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv
	.type	_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv, @function
_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv:
.LFB3495:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$4, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3495:
	.size	_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv, .-_ZNKSt6vectorI6ticketSaIS0_EE4sizeEv
	.section	.text._ZSt34__uninitialized_move_if_noexcept_aIP6ticketS1_SaIS0_EET0_T_S4_S3_RT1_,"axG",@progbits,_ZSt34__uninitialized_move_if_noexcept_aIP6ticketS1_SaIS0_EET0_T_S4_S3_RT1_,comdat
	.weak	_ZSt34__uninitialized_move_if_noexcept_aIP6ticketS1_SaIS0_EET0_T_S4_S3_RT1_
	.type	_ZSt34__uninitialized_move_if_noexcept_aIP6ticketS1_SaIS0_EET0_T_S4_S3_RT1_, @function
_ZSt34__uninitialized_move_if_noexcept_aIP6ticketS1_SaIS0_EET0_T_S4_S3_RT1_:
.LFB3496:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%rcx, -48(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt32__make_move_if_noexcept_iteratorI6ticketSt13move_iteratorIPS0_EET0_PT_
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt32__make_move_if_noexcept_iteratorI6ticketSt13move_iteratorIPS0_EET0_PT_
	movq	%rax, %rdi
	movq	-48(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rcx
	movq	%rax, %rdx
	movq	%rbx, %rsi
	call	_ZSt22__uninitialized_copy_aISt13move_iteratorIP6ticketES2_S1_ET0_T_S5_S4_RSaIT1_E
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3496:
	.size	_ZSt34__uninitialized_move_if_noexcept_aIP6ticketS1_SaIS0_EET0_T_S4_S3_RT1_, .-_ZSt34__uninitialized_move_if_noexcept_aIP6ticketS1_SaIS0_EET0_T_S4_S3_RT1_
	.section	.text._ZNSt16allocator_traitsISaI6ticketEE7destroyIS0_EEvRS1_PT_,"axG",@progbits,_ZNSt16allocator_traitsISaI6ticketEE7destroyIS0_EEvRS1_PT_,comdat
	.weak	_ZNSt16allocator_traitsISaI6ticketEE7destroyIS0_EEvRS1_PT_
	.type	_ZNSt16allocator_traitsISaI6ticketEE7destroyIS0_EEvRS1_PT_, @function
_ZNSt16allocator_traitsISaI6ticketEE7destroyIS0_EEvRS1_PT_:
.LFB3497:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI6ticketE7destroyIS1_EEvPT_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3497:
	.size	_ZNSt16allocator_traitsISaI6ticketEE7destroyIS0_EEvRS1_PT_, .-_ZNSt16allocator_traitsISaI6ticketEE7destroyIS0_EEvRS1_PT_
	.section	.text._ZNSaI4EdgeEC2Ev,"axG",@progbits,_ZNSaI4EdgeEC5Ev,comdat
	.align 2
	.weak	_ZNSaI4EdgeEC2Ev
	.type	_ZNSaI4EdgeEC2Ev, @function
_ZNSaI4EdgeEC2Ev:
.LFB3533:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI4EdgeEC2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3533:
	.size	_ZNSaI4EdgeEC2Ev, .-_ZNSaI4EdgeEC2Ev
	.weak	_ZNSaI4EdgeEC1Ev
	.set	_ZNSaI4EdgeEC1Ev,_ZNSaI4EdgeEC2Ev
	.section	.text._ZN9__gnu_cxx13new_allocatorI4EdgeED2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI4EdgeED5Ev,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI4EdgeED2Ev
	.type	_ZN9__gnu_cxx13new_allocatorI4EdgeED2Ev, @function
_ZN9__gnu_cxx13new_allocatorI4EdgeED2Ev:
.LFB3536:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3536:
	.size	_ZN9__gnu_cxx13new_allocatorI4EdgeED2Ev, .-_ZN9__gnu_cxx13new_allocatorI4EdgeED2Ev
	.weak	_ZN9__gnu_cxx13new_allocatorI4EdgeED1Ev
	.set	_ZN9__gnu_cxx13new_allocatorI4EdgeED1Ev,_ZN9__gnu_cxx13new_allocatorI4EdgeED2Ev
	.section	.text._ZNSt16allocator_traitsISaI4EdgeEE10deallocateERS1_PS0_m,"axG",@progbits,_ZNSt16allocator_traitsISaI4EdgeEE10deallocateERS1_PS0_m,comdat
	.weak	_ZNSt16allocator_traitsISaI4EdgeEE10deallocateERS1_PS0_m
	.type	_ZNSt16allocator_traitsISaI4EdgeEE10deallocateERS1_PS0_m, @function
_ZNSt16allocator_traitsISaI4EdgeEE10deallocateERS1_PS0_m:
.LFB3538:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI4EdgeE10deallocateEPS1_m
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3538:
	.size	_ZNSt16allocator_traitsISaI4EdgeEE10deallocateERS1_PS0_m, .-_ZNSt16allocator_traitsISaI4EdgeEE10deallocateERS1_PS0_m
	.section	.text._ZNSt12_Destroy_auxILb1EE9__destroyIP4EdgeEEvT_S4_,"axG",@progbits,_ZNSt12_Destroy_auxILb1EE9__destroyIP4EdgeEEvT_S4_,comdat
	.weak	_ZNSt12_Destroy_auxILb1EE9__destroyIP4EdgeEEvT_S4_
	.type	_ZNSt12_Destroy_auxILb1EE9__destroyIP4EdgeEEvT_S4_, @function
_ZNSt12_Destroy_auxILb1EE9__destroyIP4EdgeEEvT_S4_:
.LFB3539:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3539:
	.size	_ZNSt12_Destroy_auxILb1EE9__destroyIP4EdgeEEvT_S4_, .-_ZNSt12_Destroy_auxILb1EE9__destroyIP4EdgeEEvT_S4_
	.section	.text._ZN9__gnu_cxx13new_allocatorI4EdgeE9constructIS1_JS1_EEEvPT_DpOT0_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI4EdgeE9constructIS1_JS1_EEEvPT_DpOT0_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI4EdgeE9constructIS1_JS1_EEEvPT_DpOT0_
	.type	_ZN9__gnu_cxx13new_allocatorI4EdgeE9constructIS1_JS1_EEEvPT_DpOT0_, @function
_ZN9__gnu_cxx13new_allocatorI4EdgeE9constructIS1_JS1_EEEvPT_DpOT0_:
.LFB3540:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$16, %edi
	call	_ZnwmPv
	movq	%rax, %rcx
	testq	%rcx, %rcx
	je	.L250
	movq	(%rbx), %rax
	movq	8(%rbx), %rdx
	movq	%rax, (%rcx)
	movq	%rdx, 8(%rcx)
.L250:
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3540:
	.size	_ZN9__gnu_cxx13new_allocatorI4EdgeE9constructIS1_JS1_EEEvPT_DpOT0_, .-_ZN9__gnu_cxx13new_allocatorI4EdgeE9constructIS1_JS1_EEEvPT_DpOT0_
	.section	.text._ZNKSt6vectorI4EdgeSaIS0_EE12_M_check_lenEmPKc,"axG",@progbits,_ZNKSt6vectorI4EdgeSaIS0_EE12_M_check_lenEmPKc,comdat
	.align 2
	.weak	_ZNKSt6vectorI4EdgeSaIS0_EE12_M_check_lenEmPKc
	.type	_ZNKSt6vectorI4EdgeSaIS0_EE12_M_check_lenEmPKc, @function
_ZNKSt6vectorI4EdgeSaIS0_EE12_M_check_lenEmPKc:
.LFB3541:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI4EdgeSaIS0_EE8max_sizeEv
	movq	%rax, %rbx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv
	subq	%rax, %rbx
	movq	%rbx, %rdx
	movq	-48(%rbp), %rax
	cmpq	%rax, %rdx
	setb	%al
	testb	%al, %al
	je	.L252
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt20__throw_length_errorPKc
.L252:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv
	movq	%rax, %rbx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv
	movq	%rax, -32(%rbp)
	leaq	-48(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3maxImERKT_S2_S2_
	movq	(%rax), %rax
	addq	%rbx, %rax
	movq	%rax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI4EdgeSaIS0_EE4sizeEv
	cmpq	-24(%rbp), %rax
	ja	.L253
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI4EdgeSaIS0_EE8max_sizeEv
	cmpq	-24(%rbp), %rax
	jnb	.L254
.L253:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI4EdgeSaIS0_EE8max_sizeEv
	jmp	.L255
.L254:
	movq	-24(%rbp), %rax
.L255:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3541:
	.size	_ZNKSt6vectorI4EdgeSaIS0_EE12_M_check_lenEmPKc, .-_ZNKSt6vectorI4EdgeSaIS0_EE12_M_check_lenEmPKc
	.section	.text._ZNSt12_Vector_baseI4EdgeSaIS0_EE11_M_allocateEm,"axG",@progbits,_ZNSt12_Vector_baseI4EdgeSaIS0_EE11_M_allocateEm,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI4EdgeSaIS0_EE11_M_allocateEm
	.type	_ZNSt12_Vector_baseI4EdgeSaIS0_EE11_M_allocateEm, @function
_ZNSt12_Vector_baseI4EdgeSaIS0_EE11_M_allocateEm:
.LFB3542:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L258
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI4EdgeEE8allocateERS1_m
	jmp	.L260
.L258:
	movl	$0, %eax
.L260:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3542:
	.size	_ZNSt12_Vector_baseI4EdgeSaIS0_EE11_M_allocateEm, .-_ZNSt12_Vector_baseI4EdgeSaIS0_EE11_M_allocateEm
	.section	.text._ZSt34__uninitialized_move_if_noexcept_aIP4EdgeS1_SaIS0_EET0_T_S4_S3_RT1_,"axG",@progbits,_ZSt34__uninitialized_move_if_noexcept_aIP4EdgeS1_SaIS0_EET0_T_S4_S3_RT1_,comdat
	.weak	_ZSt34__uninitialized_move_if_noexcept_aIP4EdgeS1_SaIS0_EET0_T_S4_S3_RT1_
	.type	_ZSt34__uninitialized_move_if_noexcept_aIP4EdgeS1_SaIS0_EET0_T_S4_S3_RT1_, @function
_ZSt34__uninitialized_move_if_noexcept_aIP4EdgeS1_SaIS0_EET0_T_S4_S3_RT1_:
.LFB3543:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%rcx, -48(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt32__make_move_if_noexcept_iteratorI4EdgeSt13move_iteratorIPS0_EET0_PT_
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt32__make_move_if_noexcept_iteratorI4EdgeSt13move_iteratorIPS0_EET0_PT_
	movq	%rax, %rdi
	movq	-48(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rcx
	movq	%rax, %rdx
	movq	%rbx, %rsi
	call	_ZSt22__uninitialized_copy_aISt13move_iteratorIP4EdgeES2_S1_ET0_T_S5_S4_RSaIT1_E
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3543:
	.size	_ZSt34__uninitialized_move_if_noexcept_aIP4EdgeS1_SaIS0_EET0_T_S4_S3_RT1_, .-_ZSt34__uninitialized_move_if_noexcept_aIP4EdgeS1_SaIS0_EET0_T_S4_S3_RT1_
	.section	.text._ZNSt16allocator_traitsISaI4EdgeEE7destroyIS0_EEvRS1_PT_,"axG",@progbits,_ZNSt16allocator_traitsISaI4EdgeEE7destroyIS0_EEvRS1_PT_,comdat
	.weak	_ZNSt16allocator_traitsISaI4EdgeEE7destroyIS0_EEvRS1_PT_
	.type	_ZNSt16allocator_traitsISaI4EdgeEE7destroyIS0_EEvRS1_PT_, @function
_ZNSt16allocator_traitsISaI4EdgeEE7destroyIS0_EEvRS1_PT_:
.LFB3544:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI4EdgeE7destroyIS1_EEvPT_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3544:
	.size	_ZNSt16allocator_traitsISaI4EdgeEE7destroyIS0_EEvRS1_PT_, .-_ZNSt16allocator_traitsISaI4EdgeEE7destroyIS0_EEvRS1_PT_
	.section	.text._ZNSaI5qnodeEC2Ev,"axG",@progbits,_ZNSaI5qnodeEC5Ev,comdat
	.align 2
	.weak	_ZNSaI5qnodeEC2Ev
	.type	_ZNSaI5qnodeEC2Ev, @function
_ZNSaI5qnodeEC2Ev:
.LFB3546:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI5qnodeEC2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3546:
	.size	_ZNSaI5qnodeEC2Ev, .-_ZNSaI5qnodeEC2Ev
	.weak	_ZNSaI5qnodeEC1Ev
	.set	_ZNSaI5qnodeEC1Ev,_ZNSaI5qnodeEC2Ev
	.section	.text._ZN9__gnu_cxx13new_allocatorI5qnodeED2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI5qnodeED5Ev,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI5qnodeED2Ev
	.type	_ZN9__gnu_cxx13new_allocatorI5qnodeED2Ev, @function
_ZN9__gnu_cxx13new_allocatorI5qnodeED2Ev:
.LFB3549:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3549:
	.size	_ZN9__gnu_cxx13new_allocatorI5qnodeED2Ev, .-_ZN9__gnu_cxx13new_allocatorI5qnodeED2Ev
	.weak	_ZN9__gnu_cxx13new_allocatorI5qnodeED1Ev
	.set	_ZN9__gnu_cxx13new_allocatorI5qnodeED1Ev,_ZN9__gnu_cxx13new_allocatorI5qnodeED2Ev
	.section	.text._ZNSt16allocator_traitsISaI5qnodeEE10deallocateERS1_PS0_m,"axG",@progbits,_ZNSt16allocator_traitsISaI5qnodeEE10deallocateERS1_PS0_m,comdat
	.weak	_ZNSt16allocator_traitsISaI5qnodeEE10deallocateERS1_PS0_m
	.type	_ZNSt16allocator_traitsISaI5qnodeEE10deallocateERS1_PS0_m, @function
_ZNSt16allocator_traitsISaI5qnodeEE10deallocateERS1_PS0_m:
.LFB3551:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI5qnodeE10deallocateEPS1_m
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3551:
	.size	_ZNSt16allocator_traitsISaI5qnodeEE10deallocateERS1_PS0_m, .-_ZNSt16allocator_traitsISaI5qnodeEE10deallocateERS1_PS0_m
	.section	.text._ZNSt12_Destroy_auxILb1EE9__destroyIP5qnodeEEvT_S4_,"axG",@progbits,_ZNSt12_Destroy_auxILb1EE9__destroyIP5qnodeEEvT_S4_,comdat
	.weak	_ZNSt12_Destroy_auxILb1EE9__destroyIP5qnodeEEvT_S4_
	.type	_ZNSt12_Destroy_auxILb1EE9__destroyIP5qnodeEEvT_S4_, @function
_ZNSt12_Destroy_auxILb1EE9__destroyIP5qnodeEEvT_S4_:
.LFB3552:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3552:
	.size	_ZNSt12_Destroy_auxILb1EE9__destroyIP5qnodeEEvT_S4_, .-_ZNSt12_Destroy_auxILb1EE9__destroyIP5qnodeEEvT_S4_
	.section	.text._ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2EOS1_,"axG",@progbits,_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC5EOS1_,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2EOS1_
	.type	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2EOS1_, @function
_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2EOS1_:
.LFB3554:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIRSaI5qnodeEEONSt16remove_referenceIT_E4typeEOS4_
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSaI5qnodeEC2ERKS0_
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 16(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3554:
	.size	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2EOS1_, .-_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2EOS1_
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC1EOS1_
	.set	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC1EOS1_,_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_implC2EOS1_
	.section	.text._ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_impl12_M_swap_dataERS3_,"axG",@progbits,_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_impl12_M_swap_dataERS3_,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_impl12_M_swap_dataERS3_
	.type	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_impl12_M_swap_dataERS3_, @function
_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_impl12_M_swap_dataERS3_:
.LFB3556:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt4swapIP5qnodeENSt9enable_ifIXsrSt6__and_IJSt21is_move_constructibleIT_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SC_
	movq	-16(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt4swapIP5qnodeENSt9enable_ifIXsrSt6__and_IJSt21is_move_constructibleIT_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SC_
	movq	-16(%rbp), %rax
	leaq	16(%rax), %rdx
	movq	-8(%rbp), %rax
	addq	$16, %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt4swapIP5qnodeENSt9enable_ifIXsrSt6__and_IJSt21is_move_constructibleIT_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SC_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3556:
	.size	_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_impl12_M_swap_dataERS3_, .-_ZNSt12_Vector_baseI5qnodeSaIS0_EE12_Vector_impl12_M_swap_dataERS3_
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	.type	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl, @function
_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl:
.LFB3557:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rdx
	salq	$4, %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEC1ERKS2_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3557:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl, .-_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	.section	.text._ZNKSt4lessI5qnodeEclERKS0_S3_,"axG",@progbits,_ZNKSt4lessI5qnodeEclERKS0_S3_,comdat
	.align 2
	.weak	_ZNKSt4lessI5qnodeEclERKS0_S3_
	.type	_ZNKSt4lessI5qnodeEclERKS0_S3_, @function
_ZNKSt4lessI5qnodeEclERKS0_S3_:
.LFB3560:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK5qnodeltERKS_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3560:
	.size	_ZNKSt4lessI5qnodeEclERKS0_S3_, .-_ZNKSt4lessI5qnodeEclERKS0_S3_
	.section	.text._ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEESC_EEbT_T0_,"axG",@progbits,_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEESC_EEbT_T0_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEESC_EEbT_T0_
	.type	_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEESC_EEbT_T0_, @function
_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEESC_EEbT_T0_:
.LFB3559:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -48(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rbx
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rcx
	movq	-24(%rbp), %rax
	movq	%rbx, %rdx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNKSt4lessI5qnodeEclERKS0_S3_
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3559:
	.size	_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEESC_EEbT_T0_, .-_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEESC_EEbT_T0_
	.section	.text._ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_T0_SE_T1_T2_,"axG",@progbits,_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_T0_SE_T1_T2_,comdat
	.weak	_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_T0_SE_T1_T2_
	.type	_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_T0_SE_T1_T2_, @function
_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_T0_SE_T1_T2_:
.LFB3558:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	addq	$-128, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -112(%rbp)
	movq	%rsi, -104(%rbp)
	movq	%rdx, -120(%rbp)
	movl	%ecx, %eax
	movq	%r8, %rcx
	movq	%rcx, %rdx
	movq	%rax, -144(%rbp)
	movq	%rdx, -136(%rbp)
	movq	-104(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-104(%rbp), %rax
	movq	%rax, -24(%rbp)
.L279:
	movq	-120(%rbp), %rax
	subq	$1, %rax
	movq	%rax, %rdx
	shrq	$63, %rdx
	addq	%rdx, %rax
	sarq	%rax
	cmpq	-24(%rbp), %rax
	jle	.L277
	movq	-24(%rbp), %rax
	addq	$1, %rax
	addq	%rax, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	leaq	-1(%rax), %rdx
	leaq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	movq	%rax, %rbx
	movq	-24(%rbp), %rdx
	leaq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	movq	%rbx, %rdx
	movq	%rax, %rsi
	leaq	16(%rbp), %rdi
	call	_ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEESC_EEbT_T0_
	testb	%al, %al
	je	.L278
	subq	$1, -24(%rbp)
.L278:
	movq	-104(%rbp), %rdx
	leaq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	movq	%rax, -96(%rbp)
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rbx
	movq	-24(%rbp), %rdx
	leaq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	movq	%rax, -80(%rbp)
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	8(%rax), %rdx
	movq	(%rax), %rax
	movq	%rax, (%rbx)
	movq	%rdx, 8(%rbx)
	movq	-24(%rbp), %rax
	movq	%rax, -104(%rbp)
	jmp	.L279
.L277:
	movq	-120(%rbp), %rax
	andl	$1, %eax
	testq	%rax, %rax
	jne	.L280
	movq	-120(%rbp), %rax
	subq	$2, %rax
	movq	%rax, %rdx
	shrq	$63, %rdx
	addq	%rdx, %rax
	sarq	%rax
	cmpq	-24(%rbp), %rax
	jne	.L280
	movq	-24(%rbp), %rax
	addq	$1, %rax
	addq	%rax, %rax
	movq	%rax, -24(%rbp)
	movq	-104(%rbp), %rdx
	leaq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	leaq	-1(%rax), %rdx
	leaq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEplEl
	movq	%rax, -48(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movq	8(%rax), %rdx
	movq	(%rax), %rax
	movq	%rax, (%rbx)
	movq	%rdx, 8(%rbx)
	movq	-24(%rbp), %rax
	subq	$1, %rax
	movq	%rax, -104(%rbp)
.L280:
	subq	$8, %rsp
	movzbl	16(%rbp), %eax
	pushq	%rax
	call	_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EENS0_15_Iter_comp_iterIS6_EE
	addq	$16, %rsp
	leaq	-144(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIR5qnodeEONSt16remove_referenceIT_E4typeEOS3_
	movl	(%rax), %ecx
	movq	8(%rax), %rdi
	movq	-32(%rbp), %rdx
	movq	-104(%rbp), %rsi
	movq	-112(%rbp), %rax
	subq	$8, %rsp
	pushq	%r12
	movq	%rdi, %r8
	movq	%rax, %rdi
	call	_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops14_Iter_comp_valISt4lessIS2_EEEEvT_T0_SE_T1_T2_
	addq	$16, %rsp
	nop
	leaq	-16(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3558:
	.size	_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_T0_SE_T1_T2_, .-_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS2_SaIS2_EEEElS2_NS0_5__ops15_Iter_comp_iterISt4lessIS2_EEEEvT_T0_SE_T1_T2_
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS3_,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC5ERKS3_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS3_
	.type	_ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS3_, @function
_ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS3_:
.LFB3562:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3562:
	.size	_ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS3_, .-_ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS3_
	.weak	_ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC1ERKS3_
	.set	_ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC1ERKS3_,_ZN9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEEC2ERKS3_
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEE4baseEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEE4baseEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEE4baseEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEE4baseEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEE4baseEv:
.LFB3564:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3564:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEE4baseEv, .-_ZNK9__gnu_cxx17__normal_iteratorIPK5qnodeSt6vectorIS1_SaIS1_EEE4baseEv
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEE4baseEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEE4baseEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEE4baseEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEE4baseEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEE4baseEv:
.LFB3565:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3565:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEE4baseEv, .-_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEE4baseEv
	.section	.text._ZN9__gnu_cxx13new_allocatorI5qnodeE7destroyIS1_EEvPT_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI5qnodeE7destroyIS1_EEvPT_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI5qnodeE7destroyIS1_EEvPT_
	.type	_ZN9__gnu_cxx13new_allocatorI5qnodeE7destroyIS1_EEvPT_, @function
_ZN9__gnu_cxx13new_allocatorI5qnodeE7destroyIS1_EEvPT_:
.LFB3566:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3566:
	.size	_ZN9__gnu_cxx13new_allocatorI5qnodeE7destroyIS1_EEvPT_, .-_ZN9__gnu_cxx13new_allocatorI5qnodeE7destroyIS1_EEvPT_
	.section	.text._ZNSt16allocator_traitsISaI5qnodeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_,"axG",@progbits,_ZNSt16allocator_traitsISaI5qnodeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_,comdat
	.weak	_ZNSt16allocator_traitsISaI5qnodeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	.type	_ZNSt16allocator_traitsISaI5qnodeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_, @function
_ZNSt16allocator_traitsISaI5qnodeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_:
.LFB3567:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rdx
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI5qnodeE9constructIS1_JS1_EEEvPT_DpOT0_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3567:
	.size	_ZNSt16allocator_traitsISaI5qnodeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_, .-_ZNSt16allocator_traitsISaI5qnodeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_,comdat
	.align 2
	.weak	_ZNSt6vectorI5qnodeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_
	.type	_ZNSt6vectorI5qnodeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_, @function
_ZNSt6vectorI5qnodeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_:
.LFB3568:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3568
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movq	%rsi, -64(%rbp)
	movq	-56(%rbp), %rax
	movl	$.LC0, %edx
	movl	$1, %esi
	movq	%rax, %rdi
.LEHB18:
	call	_ZNKSt6vectorI5qnodeSaIS0_EE12_M_check_lenEmPKc
	movq	%rax, -32(%rbp)
	movq	-56(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE11_M_allocateEm
.LEHE18:
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-56(%rbp), %rax
	movq	%rbx, %rdx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI5qnodeEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	movq	$0, -24(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	movq	-56(%rbp), %rax
	movq	8(%rax), %rsi
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movq	-40(%rbp), %rdx
	movq	%rax, %rdi
.LEHB19:
	call	_ZSt34__uninitialized_move_if_noexcept_aIP5qnodeS1_SaIS0_EET0_T_S4_S3_RT1_
.LEHE19:
	movq	%rax, -24(%rbp)
	addq	$16, -24(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	8(%rax), %rcx
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB20:
	call	_ZSt8_DestroyIP5qnodeS0_EvT_S2_RSaIT0_E
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$4, %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	(%rax), %rcx
	movq	-56(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE13_M_deallocateEPS0_m
.LEHE20:
	movq	-56(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-56(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-32(%rbp), %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, 16(%rax)
	jmp	.L295
.L293:
	movq	%rax, %rdi
	call	__cxa_begin_catch
	cmpq	$0, -24(%rbp)
	jne	.L290
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI5qnodeEE7destroyIS0_EEvRS1_PT_
	jmp	.L291
.L290:
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdx
	movq	-24(%rbp), %rcx
	movq	-40(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB21:
	call	_ZSt8_DestroyIP5qnodeS0_EvT_S2_RSaIT0_E
.L291:
	movq	-56(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	-40(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt12_Vector_baseI5qnodeSaIS0_EE13_M_deallocateEPS0_m
	call	__cxa_rethrow
.LEHE21:
.L294:
	movq	%rax, %rbx
	call	__cxa_end_catch
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB22:
	call	_Unwind_Resume
.LEHE22:
.L295:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3568:
	.section	.gcc_except_table
	.align 4
.LLSDA3568:
	.byte	0xff
	.byte	0x3
	.uleb128 .LLSDATT3568-.LLSDATTD3568
.LLSDATTD3568:
	.byte	0x1
	.uleb128 .LLSDACSE3568-.LLSDACSB3568
.LLSDACSB3568:
	.uleb128 .LEHB18-.LFB3568
	.uleb128 .LEHE18-.LEHB18
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB19-.LFB3568
	.uleb128 .LEHE19-.LEHB19
	.uleb128 .L293-.LFB3568
	.uleb128 0x1
	.uleb128 .LEHB20-.LFB3568
	.uleb128 .LEHE20-.LEHB20
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB21-.LFB3568
	.uleb128 .LEHE21-.LEHB21
	.uleb128 .L294-.LFB3568
	.uleb128 0
	.uleb128 .LEHB22-.LFB3568
	.uleb128 .LEHE22-.LEHB22
	.uleb128 0
	.uleb128 0
.LLSDACSE3568:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3568:
	.section	.text._ZNSt6vectorI5qnodeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_,"axG",@progbits,_ZNSt6vectorI5qnodeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_,comdat
	.size	_ZNSt6vectorI5qnodeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_, .-_ZNSt6vectorI5qnodeSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_
	.section	.text._ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC2ES4_,"axG",@progbits,_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC5ES4_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC2ES4_
	.type	_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC2ES4_, @function
_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC2ES4_:
.LFB3570:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3570:
	.size	_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC2ES4_, .-_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC2ES4_
	.weak	_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC1ES4_
	.set	_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC1ES4_,_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC2ES4_
	.section	.text._ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEES3_EEbT_RT0_,"axG",@progbits,_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEES3_EEbT_RT0_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEES3_EEbT_RT0_
	.type	_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEES3_EEbT_RT0_, @function
_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEES3_EEbT_RT0_:
.LFB3572:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIP5qnodeSt6vectorIS1_SaIS1_EEEdeEv
	movq	%rax, %rcx
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNKSt4lessI5qnodeEclERKS0_S3_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3572:
	.size	_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEES3_EEbT_RT0_, .-_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEclINS_17__normal_iteratorIPS3_St6vectorIS3_SaIS3_EEEES3_EEbT_RT0_
	.section	.text._ZNSaI6ticketEC2Ev,"axG",@progbits,_ZNSaI6ticketEC5Ev,comdat
	.align 2
	.weak	_ZNSaI6ticketEC2Ev
	.type	_ZNSaI6ticketEC2Ev, @function
_ZNSaI6ticketEC2Ev:
.LFB3574:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI6ticketEC2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3574:
	.size	_ZNSaI6ticketEC2Ev, .-_ZNSaI6ticketEC2Ev
	.weak	_ZNSaI6ticketEC1Ev
	.set	_ZNSaI6ticketEC1Ev,_ZNSaI6ticketEC2Ev
	.section	.text._ZN9__gnu_cxx13new_allocatorI6ticketED2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI6ticketED5Ev,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI6ticketED2Ev
	.type	_ZN9__gnu_cxx13new_allocatorI6ticketED2Ev, @function
_ZN9__gnu_cxx13new_allocatorI6ticketED2Ev:
.LFB3577:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3577:
	.size	_ZN9__gnu_cxx13new_allocatorI6ticketED2Ev, .-_ZN9__gnu_cxx13new_allocatorI6ticketED2Ev
	.weak	_ZN9__gnu_cxx13new_allocatorI6ticketED1Ev
	.set	_ZN9__gnu_cxx13new_allocatorI6ticketED1Ev,_ZN9__gnu_cxx13new_allocatorI6ticketED2Ev
	.section	.text._ZNSt16allocator_traitsISaI6ticketEE10deallocateERS1_PS0_m,"axG",@progbits,_ZNSt16allocator_traitsISaI6ticketEE10deallocateERS1_PS0_m,comdat
	.weak	_ZNSt16allocator_traitsISaI6ticketEE10deallocateERS1_PS0_m
	.type	_ZNSt16allocator_traitsISaI6ticketEE10deallocateERS1_PS0_m, @function
_ZNSt16allocator_traitsISaI6ticketEE10deallocateERS1_PS0_m:
.LFB3579:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI6ticketE10deallocateEPS1_m
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3579:
	.size	_ZNSt16allocator_traitsISaI6ticketEE10deallocateERS1_PS0_m, .-_ZNSt16allocator_traitsISaI6ticketEE10deallocateERS1_PS0_m
	.section	.text._ZNSt12_Destroy_auxILb1EE9__destroyIP6ticketEEvT_S4_,"axG",@progbits,_ZNSt12_Destroy_auxILb1EE9__destroyIP6ticketEEvT_S4_,comdat
	.weak	_ZNSt12_Destroy_auxILb1EE9__destroyIP6ticketEEvT_S4_
	.type	_ZNSt12_Destroy_auxILb1EE9__destroyIP6ticketEEvT_S4_, @function
_ZNSt12_Destroy_auxILb1EE9__destroyIP6ticketEEvT_S4_:
.LFB3580:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3580:
	.size	_ZNSt12_Destroy_auxILb1EE9__destroyIP6ticketEEvT_S4_, .-_ZNSt12_Destroy_auxILb1EE9__destroyIP6ticketEEvT_S4_
	.section	.text._ZNKSt6vectorI6ticketSaIS0_EE8max_sizeEv,"axG",@progbits,_ZNKSt6vectorI6ticketSaIS0_EE8max_sizeEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI6ticketSaIS0_EE8max_sizeEv
	.type	_ZNKSt6vectorI6ticketSaIS0_EE8max_sizeEv, @function
_ZNKSt6vectorI6ticketSaIS0_EE8max_sizeEv:
.LFB3581:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI6ticketEE8max_sizeERKS1_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3581:
	.size	_ZNKSt6vectorI6ticketSaIS0_EE8max_sizeEv, .-_ZNKSt6vectorI6ticketSaIS0_EE8max_sizeEv
	.section	.text._ZNSt16allocator_traitsISaI6ticketEE8allocateERS1_m,"axG",@progbits,_ZNSt16allocator_traitsISaI6ticketEE8allocateERS1_m,comdat
	.weak	_ZNSt16allocator_traitsISaI6ticketEE8allocateERS1_m
	.type	_ZNSt16allocator_traitsISaI6ticketEE8allocateERS1_m, @function
_ZNSt16allocator_traitsISaI6ticketEE8allocateERS1_m:
.LFB3582:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI6ticketE8allocateEmPKv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3582:
	.size	_ZNSt16allocator_traitsISaI6ticketEE8allocateERS1_m, .-_ZNSt16allocator_traitsISaI6ticketEE8allocateERS1_m
	.section	.text._ZSt32__make_move_if_noexcept_iteratorI6ticketSt13move_iteratorIPS0_EET0_PT_,"axG",@progbits,_ZSt32__make_move_if_noexcept_iteratorI6ticketSt13move_iteratorIPS0_EET0_PT_,comdat
	.weak	_ZSt32__make_move_if_noexcept_iteratorI6ticketSt13move_iteratorIPS0_EET0_PT_
	.type	_ZSt32__make_move_if_noexcept_iteratorI6ticketSt13move_iteratorIPS0_EET0_PT_, @function
_ZSt32__make_move_if_noexcept_iteratorI6ticketSt13move_iteratorIPS0_EET0_PT_:
.LFB3583:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt13move_iteratorIP6ticketEC1ES1_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3583:
	.size	_ZSt32__make_move_if_noexcept_iteratorI6ticketSt13move_iteratorIPS0_EET0_PT_, .-_ZSt32__make_move_if_noexcept_iteratorI6ticketSt13move_iteratorIPS0_EET0_PT_
	.section	.text._ZSt22__uninitialized_copy_aISt13move_iteratorIP6ticketES2_S1_ET0_T_S5_S4_RSaIT1_E,"axG",@progbits,_ZSt22__uninitialized_copy_aISt13move_iteratorIP6ticketES2_S1_ET0_T_S5_S4_RSaIT1_E,comdat
	.weak	_ZSt22__uninitialized_copy_aISt13move_iteratorIP6ticketES2_S1_ET0_T_S5_S4_RSaIT1_E
	.type	_ZSt22__uninitialized_copy_aISt13move_iteratorIP6ticketES2_S1_ET0_T_S5_S4_RSaIT1_E, @function
_ZSt22__uninitialized_copy_aISt13move_iteratorIP6ticketES2_S1_ET0_T_S5_S4_RSaIT1_E:
.LFB3584:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -8(%rbp)
	movq	-24(%rbp), %rdx
	movq	-32(%rbp), %rcx
	movq	-16(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt18uninitialized_copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3584:
	.size	_ZSt22__uninitialized_copy_aISt13move_iteratorIP6ticketES2_S1_ET0_T_S5_S4_RSaIT1_E, .-_ZSt22__uninitialized_copy_aISt13move_iteratorIP6ticketES2_S1_ET0_T_S5_S4_RSaIT1_E
	.section	.text._ZN9__gnu_cxx13new_allocatorI6ticketE7destroyIS1_EEvPT_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI6ticketE7destroyIS1_EEvPT_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI6ticketE7destroyIS1_EEvPT_
	.type	_ZN9__gnu_cxx13new_allocatorI6ticketE7destroyIS1_EEvPT_, @function
_ZN9__gnu_cxx13new_allocatorI6ticketE7destroyIS1_EEvPT_:
.LFB3585:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3585:
	.size	_ZN9__gnu_cxx13new_allocatorI6ticketE7destroyIS1_EEvPT_, .-_ZN9__gnu_cxx13new_allocatorI6ticketE7destroyIS1_EEvPT_
	.section	.text._ZN9__gnu_cxx13new_allocatorI4EdgeEC2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI4EdgeEC5Ev,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI4EdgeEC2Ev
	.type	_ZN9__gnu_cxx13new_allocatorI4EdgeEC2Ev, @function
_ZN9__gnu_cxx13new_allocatorI4EdgeEC2Ev:
.LFB3616:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3616:
	.size	_ZN9__gnu_cxx13new_allocatorI4EdgeEC2Ev, .-_ZN9__gnu_cxx13new_allocatorI4EdgeEC2Ev
	.weak	_ZN9__gnu_cxx13new_allocatorI4EdgeEC1Ev
	.set	_ZN9__gnu_cxx13new_allocatorI4EdgeEC1Ev,_ZN9__gnu_cxx13new_allocatorI4EdgeEC2Ev
	.section	.text._ZN9__gnu_cxx13new_allocatorI4EdgeE10deallocateEPS1_m,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI4EdgeE10deallocateEPS1_m,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI4EdgeE10deallocateEPS1_m
	.type	_ZN9__gnu_cxx13new_allocatorI4EdgeE10deallocateEPS1_m, @function
_ZN9__gnu_cxx13new_allocatorI4EdgeE10deallocateEPS1_m:
.LFB3618:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3618:
	.size	_ZN9__gnu_cxx13new_allocatorI4EdgeE10deallocateEPS1_m, .-_ZN9__gnu_cxx13new_allocatorI4EdgeE10deallocateEPS1_m
	.section	.text._ZNKSt6vectorI4EdgeSaIS0_EE8max_sizeEv,"axG",@progbits,_ZNKSt6vectorI4EdgeSaIS0_EE8max_sizeEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI4EdgeSaIS0_EE8max_sizeEv
	.type	_ZNKSt6vectorI4EdgeSaIS0_EE8max_sizeEv, @function
_ZNKSt6vectorI4EdgeSaIS0_EE8max_sizeEv:
.LFB3619:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI4EdgeEE8max_sizeERKS1_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3619:
	.size	_ZNKSt6vectorI4EdgeSaIS0_EE8max_sizeEv, .-_ZNKSt6vectorI4EdgeSaIS0_EE8max_sizeEv
	.section	.text._ZNSt16allocator_traitsISaI4EdgeEE8allocateERS1_m,"axG",@progbits,_ZNSt16allocator_traitsISaI4EdgeEE8allocateERS1_m,comdat
	.weak	_ZNSt16allocator_traitsISaI4EdgeEE8allocateERS1_m
	.type	_ZNSt16allocator_traitsISaI4EdgeEE8allocateERS1_m, @function
_ZNSt16allocator_traitsISaI4EdgeEE8allocateERS1_m:
.LFB3620:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI4EdgeE8allocateEmPKv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3620:
	.size	_ZNSt16allocator_traitsISaI4EdgeEE8allocateERS1_m, .-_ZNSt16allocator_traitsISaI4EdgeEE8allocateERS1_m
	.section	.text._ZSt32__make_move_if_noexcept_iteratorI4EdgeSt13move_iteratorIPS0_EET0_PT_,"axG",@progbits,_ZSt32__make_move_if_noexcept_iteratorI4EdgeSt13move_iteratorIPS0_EET0_PT_,comdat
	.weak	_ZSt32__make_move_if_noexcept_iteratorI4EdgeSt13move_iteratorIPS0_EET0_PT_
	.type	_ZSt32__make_move_if_noexcept_iteratorI4EdgeSt13move_iteratorIPS0_EET0_PT_, @function
_ZSt32__make_move_if_noexcept_iteratorI4EdgeSt13move_iteratorIPS0_EET0_PT_:
.LFB3621:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt13move_iteratorIP4EdgeEC1ES1_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3621:
	.size	_ZSt32__make_move_if_noexcept_iteratorI4EdgeSt13move_iteratorIPS0_EET0_PT_, .-_ZSt32__make_move_if_noexcept_iteratorI4EdgeSt13move_iteratorIPS0_EET0_PT_
	.section	.text._ZSt22__uninitialized_copy_aISt13move_iteratorIP4EdgeES2_S1_ET0_T_S5_S4_RSaIT1_E,"axG",@progbits,_ZSt22__uninitialized_copy_aISt13move_iteratorIP4EdgeES2_S1_ET0_T_S5_S4_RSaIT1_E,comdat
	.weak	_ZSt22__uninitialized_copy_aISt13move_iteratorIP4EdgeES2_S1_ET0_T_S5_S4_RSaIT1_E
	.type	_ZSt22__uninitialized_copy_aISt13move_iteratorIP4EdgeES2_S1_ET0_T_S5_S4_RSaIT1_E, @function
_ZSt22__uninitialized_copy_aISt13move_iteratorIP4EdgeES2_S1_ET0_T_S5_S4_RSaIT1_E:
.LFB3622:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -8(%rbp)
	movq	-24(%rbp), %rdx
	movq	-32(%rbp), %rcx
	movq	-16(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt18uninitialized_copyISt13move_iteratorIP4EdgeES2_ET0_T_S5_S4_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3622:
	.size	_ZSt22__uninitialized_copy_aISt13move_iteratorIP4EdgeES2_S1_ET0_T_S5_S4_RSaIT1_E, .-_ZSt22__uninitialized_copy_aISt13move_iteratorIP4EdgeES2_S1_ET0_T_S5_S4_RSaIT1_E
	.section	.text._ZN9__gnu_cxx13new_allocatorI4EdgeE7destroyIS1_EEvPT_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI4EdgeE7destroyIS1_EEvPT_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI4EdgeE7destroyIS1_EEvPT_
	.type	_ZN9__gnu_cxx13new_allocatorI4EdgeE7destroyIS1_EEvPT_, @function
_ZN9__gnu_cxx13new_allocatorI4EdgeE7destroyIS1_EEvPT_:
.LFB3623:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3623:
	.size	_ZN9__gnu_cxx13new_allocatorI4EdgeE7destroyIS1_EEvPT_, .-_ZN9__gnu_cxx13new_allocatorI4EdgeE7destroyIS1_EEvPT_
	.section	.text._ZN9__gnu_cxx13new_allocatorI5qnodeEC2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI5qnodeEC5Ev,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI5qnodeEC2Ev
	.type	_ZN9__gnu_cxx13new_allocatorI5qnodeEC2Ev, @function
_ZN9__gnu_cxx13new_allocatorI5qnodeEC2Ev:
.LFB3625:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3625:
	.size	_ZN9__gnu_cxx13new_allocatorI5qnodeEC2Ev, .-_ZN9__gnu_cxx13new_allocatorI5qnodeEC2Ev
	.weak	_ZN9__gnu_cxx13new_allocatorI5qnodeEC1Ev
	.set	_ZN9__gnu_cxx13new_allocatorI5qnodeEC1Ev,_ZN9__gnu_cxx13new_allocatorI5qnodeEC2Ev
	.section	.text._ZN9__gnu_cxx13new_allocatorI5qnodeE10deallocateEPS1_m,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI5qnodeE10deallocateEPS1_m,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI5qnodeE10deallocateEPS1_m
	.type	_ZN9__gnu_cxx13new_allocatorI5qnodeE10deallocateEPS1_m, @function
_ZN9__gnu_cxx13new_allocatorI5qnodeE10deallocateEPS1_m:
.LFB3627:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3627:
	.size	_ZN9__gnu_cxx13new_allocatorI5qnodeE10deallocateEPS1_m, .-_ZN9__gnu_cxx13new_allocatorI5qnodeE10deallocateEPS1_m
	.section	.text._ZNSaI5qnodeEC2ERKS0_,"axG",@progbits,_ZNSaI5qnodeEC5ERKS0_,comdat
	.align 2
	.weak	_ZNSaI5qnodeEC2ERKS0_
	.type	_ZNSaI5qnodeEC2ERKS0_, @function
_ZNSaI5qnodeEC2ERKS0_:
.LFB3629:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI5qnodeEC2ERKS2_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3629:
	.size	_ZNSaI5qnodeEC2ERKS0_, .-_ZNSaI5qnodeEC2ERKS0_
	.weak	_ZNSaI5qnodeEC1ERKS0_
	.set	_ZNSaI5qnodeEC1ERKS0_,_ZNSaI5qnodeEC2ERKS0_
	.section	.text._ZSt4moveIRP5qnodeEONSt16remove_referenceIT_E4typeEOS4_,"axG",@progbits,_ZSt4moveIRP5qnodeEONSt16remove_referenceIT_E4typeEOS4_,comdat
	.weak	_ZSt4moveIRP5qnodeEONSt16remove_referenceIT_E4typeEOS4_
	.type	_ZSt4moveIRP5qnodeEONSt16remove_referenceIT_E4typeEOS4_, @function
_ZSt4moveIRP5qnodeEONSt16remove_referenceIT_E4typeEOS4_:
.LFB3632:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3632:
	.size	_ZSt4moveIRP5qnodeEONSt16remove_referenceIT_E4typeEOS4_, .-_ZSt4moveIRP5qnodeEONSt16remove_referenceIT_E4typeEOS4_
	.section	.text._ZSt4swapIP5qnodeENSt9enable_ifIXsrSt6__and_IJSt21is_move_constructibleIT_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SC_,"axG",@progbits,_ZSt4swapIP5qnodeENSt9enable_ifIXsrSt6__and_IJSt21is_move_constructibleIT_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SC_,comdat
	.weak	_ZSt4swapIP5qnodeENSt9enable_ifIXsrSt6__and_IJSt21is_move_constructibleIT_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SC_
	.type	_ZSt4swapIP5qnodeENSt9enable_ifIXsrSt6__and_IJSt21is_move_constructibleIT_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SC_, @function
_ZSt4swapIP5qnodeENSt9enable_ifIXsrSt6__and_IJSt21is_move_constructibleIT_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SC_:
.LFB3631:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIRP5qnodeEONSt16remove_referenceIT_E4typeEOS4_
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIRP5qnodeEONSt16remove_referenceIT_E4typeEOS4_
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, (%rax)
	leaq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt4moveIRP5qnodeEONSt16remove_referenceIT_E4typeEOS4_
	movq	(%rax), %rdx
	movq	-32(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3631:
	.size	_ZSt4swapIP5qnodeENSt9enable_ifIXsrSt6__and_IJSt21is_move_constructibleIT_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SC_, .-_ZSt4swapIP5qnodeENSt9enable_ifIXsrSt6__and_IJSt21is_move_constructibleIT_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SC_
	.section	.text._ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EENS0_15_Iter_comp_iterIS6_EE,"axG",@progbits,_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EENS0_15_Iter_comp_iterIS6_EE,comdat
	.weak	_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EENS0_15_Iter_comp_iterIS6_EE
	.type	_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EENS0_15_Iter_comp_iterIS6_EE, @function
_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EENS0_15_Iter_comp_iterIS6_EE:
.LFB3633:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	leaq	-17(%rbp), %rax
	subq	$8, %rsp
	pushq	%rdx
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessI5qnodeEEC1ES4_
	addq	$16, %rsp
	movl	%ebx, %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3633:
	.size	_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EENS0_15_Iter_comp_iterIS6_EE, .-_ZN9__gnu_cxx5__ops15__iter_comp_valISt4lessI5qnodeEEENS0_14_Iter_comp_valIT_EENS0_15_Iter_comp_iterIS6_EE
	.section	.text._ZN9__gnu_cxx13new_allocatorI5qnodeE9constructIS1_JS1_EEEvPT_DpOT0_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI5qnodeE9constructIS1_JS1_EEEvPT_DpOT0_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI5qnodeE9constructIS1_JS1_EEEvPT_DpOT0_
	.type	_ZN9__gnu_cxx13new_allocatorI5qnodeE9constructIS1_JS1_EEEvPT_DpOT0_, @function
_ZN9__gnu_cxx13new_allocatorI5qnodeE9constructIS1_JS1_EEEvPT_DpOT0_:
.LFB3634:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$16, %edi
	call	_ZnwmPv
	movq	%rax, %rcx
	testq	%rcx, %rcx
	je	.L334
	movq	(%rbx), %rax
	movq	8(%rbx), %rdx
	movq	%rax, (%rcx)
	movq	%rdx, 8(%rcx)
.L334:
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3634:
	.size	_ZN9__gnu_cxx13new_allocatorI5qnodeE9constructIS1_JS1_EEEvPT_DpOT0_, .-_ZN9__gnu_cxx13new_allocatorI5qnodeE9constructIS1_JS1_EEEvPT_DpOT0_
	.section	.text._ZNKSt6vectorI5qnodeSaIS0_EE12_M_check_lenEmPKc,"axG",@progbits,_ZNKSt6vectorI5qnodeSaIS0_EE12_M_check_lenEmPKc,comdat
	.align 2
	.weak	_ZNKSt6vectorI5qnodeSaIS0_EE12_M_check_lenEmPKc
	.type	_ZNKSt6vectorI5qnodeSaIS0_EE12_M_check_lenEmPKc, @function
_ZNKSt6vectorI5qnodeSaIS0_EE12_M_check_lenEmPKc:
.LFB3635:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE8max_sizeEv
	movq	%rax, %rbx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv
	subq	%rax, %rbx
	movq	%rbx, %rdx
	movq	-48(%rbp), %rax
	cmpq	%rax, %rdx
	setb	%al
	testb	%al, %al
	je	.L336
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt20__throw_length_errorPKc
.L336:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv
	movq	%rax, %rbx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv
	movq	%rax, -32(%rbp)
	leaq	-48(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3maxImERKT_S2_S2_
	movq	(%rax), %rax
	addq	%rbx, %rax
	movq	%rax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv
	cmpq	-24(%rbp), %rax
	ja	.L337
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE8max_sizeEv
	cmpq	-24(%rbp), %rax
	jnb	.L338
.L337:
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6vectorI5qnodeSaIS0_EE8max_sizeEv
	jmp	.L339
.L338:
	movq	-24(%rbp), %rax
.L339:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3635:
	.size	_ZNKSt6vectorI5qnodeSaIS0_EE12_M_check_lenEmPKc, .-_ZNKSt6vectorI5qnodeSaIS0_EE12_M_check_lenEmPKc
	.section	.text._ZNSt12_Vector_baseI5qnodeSaIS0_EE11_M_allocateEm,"axG",@progbits,_ZNSt12_Vector_baseI5qnodeSaIS0_EE11_M_allocateEm,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI5qnodeSaIS0_EE11_M_allocateEm
	.type	_ZNSt12_Vector_baseI5qnodeSaIS0_EE11_M_allocateEm, @function
_ZNSt12_Vector_baseI5qnodeSaIS0_EE11_M_allocateEm:
.LFB3636:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L342
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI5qnodeEE8allocateERS1_m
	jmp	.L344
.L342:
	movl	$0, %eax
.L344:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3636:
	.size	_ZNSt12_Vector_baseI5qnodeSaIS0_EE11_M_allocateEm, .-_ZNSt12_Vector_baseI5qnodeSaIS0_EE11_M_allocateEm
	.section	.text._ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv,"axG",@progbits,_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv
	.type	_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv, @function
_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv:
.LFB3637:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$4, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3637:
	.size	_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv, .-_ZNKSt6vectorI5qnodeSaIS0_EE4sizeEv
	.section	.text._ZSt34__uninitialized_move_if_noexcept_aIP5qnodeS1_SaIS0_EET0_T_S4_S3_RT1_,"axG",@progbits,_ZSt34__uninitialized_move_if_noexcept_aIP5qnodeS1_SaIS0_EET0_T_S4_S3_RT1_,comdat
	.weak	_ZSt34__uninitialized_move_if_noexcept_aIP5qnodeS1_SaIS0_EET0_T_S4_S3_RT1_
	.type	_ZSt34__uninitialized_move_if_noexcept_aIP5qnodeS1_SaIS0_EET0_T_S4_S3_RT1_, @function
_ZSt34__uninitialized_move_if_noexcept_aIP5qnodeS1_SaIS0_EET0_T_S4_S3_RT1_:
.LFB3638:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%rcx, -48(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt32__make_move_if_noexcept_iteratorI5qnodeSt13move_iteratorIPS0_EET0_PT_
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt32__make_move_if_noexcept_iteratorI5qnodeSt13move_iteratorIPS0_EET0_PT_
	movq	%rax, %rdi
	movq	-48(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rcx
	movq	%rax, %rdx
	movq	%rbx, %rsi
	call	_ZSt22__uninitialized_copy_aISt13move_iteratorIP5qnodeES2_S1_ET0_T_S5_S4_RSaIT1_E
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3638:
	.size	_ZSt34__uninitialized_move_if_noexcept_aIP5qnodeS1_SaIS0_EET0_T_S4_S3_RT1_, .-_ZSt34__uninitialized_move_if_noexcept_aIP5qnodeS1_SaIS0_EET0_T_S4_S3_RT1_
	.section	.text._ZN9__gnu_cxx13new_allocatorI6ticketEC2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI6ticketEC5Ev,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI6ticketEC2Ev
	.type	_ZN9__gnu_cxx13new_allocatorI6ticketEC2Ev, @function
_ZN9__gnu_cxx13new_allocatorI6ticketEC2Ev:
.LFB3640:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3640:
	.size	_ZN9__gnu_cxx13new_allocatorI6ticketEC2Ev, .-_ZN9__gnu_cxx13new_allocatorI6ticketEC2Ev
	.weak	_ZN9__gnu_cxx13new_allocatorI6ticketEC1Ev
	.set	_ZN9__gnu_cxx13new_allocatorI6ticketEC1Ev,_ZN9__gnu_cxx13new_allocatorI6ticketEC2Ev
	.section	.text._ZN9__gnu_cxx13new_allocatorI6ticketE10deallocateEPS1_m,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI6ticketE10deallocateEPS1_m,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI6ticketE10deallocateEPS1_m
	.type	_ZN9__gnu_cxx13new_allocatorI6ticketE10deallocateEPS1_m, @function
_ZN9__gnu_cxx13new_allocatorI6ticketE10deallocateEPS1_m:
.LFB3642:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3642:
	.size	_ZN9__gnu_cxx13new_allocatorI6ticketE10deallocateEPS1_m, .-_ZN9__gnu_cxx13new_allocatorI6ticketE10deallocateEPS1_m
	.section	.text._ZNSt16allocator_traitsISaI6ticketEE8max_sizeERKS1_,"axG",@progbits,_ZNSt16allocator_traitsISaI6ticketEE8max_sizeERKS1_,comdat
	.weak	_ZNSt16allocator_traitsISaI6ticketEE8max_sizeERKS1_
	.type	_ZNSt16allocator_traitsISaI6ticketEE8max_sizeERKS1_, @function
_ZNSt16allocator_traitsISaI6ticketEE8max_sizeERKS1_:
.LFB3643:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx13new_allocatorI6ticketE8max_sizeEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3643:
	.size	_ZNSt16allocator_traitsISaI6ticketEE8max_sizeERKS1_, .-_ZNSt16allocator_traitsISaI6ticketEE8max_sizeERKS1_
	.section	.text._ZNKSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv,"axG",@progbits,_ZNKSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv,comdat
	.align 2
	.weak	_ZNKSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv
	.type	_ZNKSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv, @function
_ZNKSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv:
.LFB3644:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3644:
	.size	_ZNKSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv, .-_ZNKSt12_Vector_baseI6ticketSaIS0_EE19_M_get_Tp_allocatorEv
	.section	.text._ZN9__gnu_cxx13new_allocatorI6ticketE8allocateEmPKv,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI6ticketE8allocateEmPKv,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI6ticketE8allocateEmPKv
	.type	_ZN9__gnu_cxx13new_allocatorI6ticketE8allocateEmPKv, @function
_ZN9__gnu_cxx13new_allocatorI6ticketE8allocateEmPKv:
.LFB3645:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx13new_allocatorI6ticketE8max_sizeEv
	cmpq	-16(%rbp), %rax
	setb	%al
	testb	%al, %al
	je	.L356
	call	_ZSt17__throw_bad_allocv
.L356:
	movq	-16(%rbp), %rax
	salq	$4, %rax
	movq	%rax, %rdi
	call	_Znwm
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3645:
	.size	_ZN9__gnu_cxx13new_allocatorI6ticketE8allocateEmPKv, .-_ZN9__gnu_cxx13new_allocatorI6ticketE8allocateEmPKv
	.section	.text._ZNSt13move_iteratorIP6ticketEC2ES1_,"axG",@progbits,_ZNSt13move_iteratorIP6ticketEC5ES1_,comdat
	.align 2
	.weak	_ZNSt13move_iteratorIP6ticketEC2ES1_
	.type	_ZNSt13move_iteratorIP6ticketEC2ES1_, @function
_ZNSt13move_iteratorIP6ticketEC2ES1_:
.LFB3647:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3647:
	.size	_ZNSt13move_iteratorIP6ticketEC2ES1_, .-_ZNSt13move_iteratorIP6ticketEC2ES1_
	.weak	_ZNSt13move_iteratorIP6ticketEC1ES1_
	.set	_ZNSt13move_iteratorIP6ticketEC1ES1_,_ZNSt13move_iteratorIP6ticketEC2ES1_
	.section	.text._ZSt18uninitialized_copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_,"axG",@progbits,_ZSt18uninitialized_copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_,comdat
	.weak	_ZSt18uninitialized_copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_
	.type	_ZSt18uninitialized_copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_, @function
_ZSt18uninitialized_copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_:
.LFB3649:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -32(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movb	$1, -1(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rcx
	movq	-32(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIP6ticketES4_EET0_T_S7_S6_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3649:
	.size	_ZSt18uninitialized_copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_, .-_ZSt18uninitialized_copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_
	.section	.text._ZNSt16allocator_traitsISaI4EdgeEE8max_sizeERKS1_,"axG",@progbits,_ZNSt16allocator_traitsISaI4EdgeEE8max_sizeERKS1_,comdat
	.weak	_ZNSt16allocator_traitsISaI4EdgeEE8max_sizeERKS1_
	.type	_ZNSt16allocator_traitsISaI4EdgeEE8max_sizeERKS1_, @function
_ZNSt16allocator_traitsISaI4EdgeEE8max_sizeERKS1_:
.LFB3677:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx13new_allocatorI4EdgeE8max_sizeEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3677:
	.size	_ZNSt16allocator_traitsISaI4EdgeEE8max_sizeERKS1_, .-_ZNSt16allocator_traitsISaI4EdgeEE8max_sizeERKS1_
	.section	.text._ZNKSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv,"axG",@progbits,_ZNKSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv,comdat
	.align 2
	.weak	_ZNKSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv
	.type	_ZNKSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv, @function
_ZNKSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv:
.LFB3678:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3678:
	.size	_ZNKSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv, .-_ZNKSt12_Vector_baseI4EdgeSaIS0_EE19_M_get_Tp_allocatorEv
	.section	.text._ZN9__gnu_cxx13new_allocatorI4EdgeE8allocateEmPKv,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI4EdgeE8allocateEmPKv,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI4EdgeE8allocateEmPKv
	.type	_ZN9__gnu_cxx13new_allocatorI4EdgeE8allocateEmPKv, @function
_ZN9__gnu_cxx13new_allocatorI4EdgeE8allocateEmPKv:
.LFB3679:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx13new_allocatorI4EdgeE8max_sizeEv
	cmpq	-16(%rbp), %rax
	setb	%al
	testb	%al, %al
	je	.L366
	call	_ZSt17__throw_bad_allocv
.L366:
	movq	-16(%rbp), %rax
	salq	$4, %rax
	movq	%rax, %rdi
	call	_Znwm
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3679:
	.size	_ZN9__gnu_cxx13new_allocatorI4EdgeE8allocateEmPKv, .-_ZN9__gnu_cxx13new_allocatorI4EdgeE8allocateEmPKv
	.section	.text._ZNSt13move_iteratorIP4EdgeEC2ES1_,"axG",@progbits,_ZNSt13move_iteratorIP4EdgeEC5ES1_,comdat
	.align 2
	.weak	_ZNSt13move_iteratorIP4EdgeEC2ES1_
	.type	_ZNSt13move_iteratorIP4EdgeEC2ES1_, @function
_ZNSt13move_iteratorIP4EdgeEC2ES1_:
.LFB3681:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3681:
	.size	_ZNSt13move_iteratorIP4EdgeEC2ES1_, .-_ZNSt13move_iteratorIP4EdgeEC2ES1_
	.weak	_ZNSt13move_iteratorIP4EdgeEC1ES1_
	.set	_ZNSt13move_iteratorIP4EdgeEC1ES1_,_ZNSt13move_iteratorIP4EdgeEC2ES1_
	.section	.text._ZSt18uninitialized_copyISt13move_iteratorIP4EdgeES2_ET0_T_S5_S4_,"axG",@progbits,_ZSt18uninitialized_copyISt13move_iteratorIP4EdgeES2_ET0_T_S5_S4_,comdat
	.weak	_ZSt18uninitialized_copyISt13move_iteratorIP4EdgeES2_ET0_T_S5_S4_
	.type	_ZSt18uninitialized_copyISt13move_iteratorIP4EdgeES2_ET0_T_S5_S4_, @function
_ZSt18uninitialized_copyISt13move_iteratorIP4EdgeES2_ET0_T_S5_S4_:
.LFB3683:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -32(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movb	$1, -1(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rcx
	movq	-32(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP4EdgeES4_EET0_T_S7_S6_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3683:
	.size	_ZSt18uninitialized_copyISt13move_iteratorIP4EdgeES2_ET0_T_S5_S4_, .-_ZSt18uninitialized_copyISt13move_iteratorIP4EdgeES2_ET0_T_S5_S4_
	.section	.text._ZN9__gnu_cxx13new_allocatorI5qnodeEC2ERKS2_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI5qnodeEC5ERKS2_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI5qnodeEC2ERKS2_
	.type	_ZN9__gnu_cxx13new_allocatorI5qnodeEC2ERKS2_, @function
_ZN9__gnu_cxx13new_allocatorI5qnodeEC2ERKS2_:
.LFB3685:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3685:
	.size	_ZN9__gnu_cxx13new_allocatorI5qnodeEC2ERKS2_, .-_ZN9__gnu_cxx13new_allocatorI5qnodeEC2ERKS2_
	.weak	_ZN9__gnu_cxx13new_allocatorI5qnodeEC1ERKS2_
	.set	_ZN9__gnu_cxx13new_allocatorI5qnodeEC1ERKS2_,_ZN9__gnu_cxx13new_allocatorI5qnodeEC2ERKS2_
	.section	.text._ZNKSt6vectorI5qnodeSaIS0_EE8max_sizeEv,"axG",@progbits,_ZNKSt6vectorI5qnodeSaIS0_EE8max_sizeEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI5qnodeSaIS0_EE8max_sizeEv
	.type	_ZNKSt6vectorI5qnodeSaIS0_EE8max_sizeEv, @function
_ZNKSt6vectorI5qnodeSaIS0_EE8max_sizeEv:
.LFB3687:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdi
	call	_ZNSt16allocator_traitsISaI5qnodeEE8max_sizeERKS1_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3687:
	.size	_ZNKSt6vectorI5qnodeSaIS0_EE8max_sizeEv, .-_ZNKSt6vectorI5qnodeSaIS0_EE8max_sizeEv
	.section	.text._ZNSt16allocator_traitsISaI5qnodeEE8allocateERS1_m,"axG",@progbits,_ZNSt16allocator_traitsISaI5qnodeEE8allocateERS1_m,comdat
	.weak	_ZNSt16allocator_traitsISaI5qnodeEE8allocateERS1_m
	.type	_ZNSt16allocator_traitsISaI5qnodeEE8allocateERS1_m, @function
_ZNSt16allocator_traitsISaI5qnodeEE8allocateERS1_m:
.LFB3688:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rcx
	movq	-8(%rbp), %rax
	movl	$0, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx13new_allocatorI5qnodeE8allocateEmPKv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3688:
	.size	_ZNSt16allocator_traitsISaI5qnodeEE8allocateERS1_m, .-_ZNSt16allocator_traitsISaI5qnodeEE8allocateERS1_m
	.section	.text._ZSt32__make_move_if_noexcept_iteratorI5qnodeSt13move_iteratorIPS0_EET0_PT_,"axG",@progbits,_ZSt32__make_move_if_noexcept_iteratorI5qnodeSt13move_iteratorIPS0_EET0_PT_,comdat
	.weak	_ZSt32__make_move_if_noexcept_iteratorI5qnodeSt13move_iteratorIPS0_EET0_PT_
	.type	_ZSt32__make_move_if_noexcept_iteratorI5qnodeSt13move_iteratorIPS0_EET0_PT_, @function
_ZSt32__make_move_if_noexcept_iteratorI5qnodeSt13move_iteratorIPS0_EET0_PT_:
.LFB3689:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt13move_iteratorIP5qnodeEC1ES1_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3689:
	.size	_ZSt32__make_move_if_noexcept_iteratorI5qnodeSt13move_iteratorIPS0_EET0_PT_, .-_ZSt32__make_move_if_noexcept_iteratorI5qnodeSt13move_iteratorIPS0_EET0_PT_
	.section	.text._ZSt22__uninitialized_copy_aISt13move_iteratorIP5qnodeES2_S1_ET0_T_S5_S4_RSaIT1_E,"axG",@progbits,_ZSt22__uninitialized_copy_aISt13move_iteratorIP5qnodeES2_S1_ET0_T_S5_S4_RSaIT1_E,comdat
	.weak	_ZSt22__uninitialized_copy_aISt13move_iteratorIP5qnodeES2_S1_ET0_T_S5_S4_RSaIT1_E
	.type	_ZSt22__uninitialized_copy_aISt13move_iteratorIP5qnodeES2_S1_ET0_T_S5_S4_RSaIT1_E, @function
_ZSt22__uninitialized_copy_aISt13move_iteratorIP5qnodeES2_S1_ET0_T_S5_S4_RSaIT1_E:
.LFB3690:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -8(%rbp)
	movq	-24(%rbp), %rdx
	movq	-32(%rbp), %rcx
	movq	-16(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt18uninitialized_copyISt13move_iteratorIP5qnodeES2_ET0_T_S5_S4_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3690:
	.size	_ZSt22__uninitialized_copy_aISt13move_iteratorIP5qnodeES2_S1_ET0_T_S5_S4_RSaIT1_E, .-_ZSt22__uninitialized_copy_aISt13move_iteratorIP5qnodeES2_S1_ET0_T_S5_S4_RSaIT1_E
	.section	.text._ZNK9__gnu_cxx13new_allocatorI6ticketE8max_sizeEv,"axG",@progbits,_ZNK9__gnu_cxx13new_allocatorI6ticketE8max_sizeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx13new_allocatorI6ticketE8max_sizeEv
	.type	_ZNK9__gnu_cxx13new_allocatorI6ticketE8max_sizeEv, @function
_ZNK9__gnu_cxx13new_allocatorI6ticketE8max_sizeEv:
.LFB3691:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movabsq	$1152921504606846975, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3691:
	.size	_ZNK9__gnu_cxx13new_allocatorI6ticketE8max_sizeEv, .-_ZNK9__gnu_cxx13new_allocatorI6ticketE8max_sizeEv
	.section	.text._ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIP6ticketES4_EET0_T_S7_S6_,"axG",@progbits,_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIP6ticketES4_EET0_T_S7_S6_,comdat
	.weak	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIP6ticketES4_EET0_T_S7_S6_
	.type	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIP6ticketES4_EET0_T_S7_S6_, @function
_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIP6ticketES4_EET0_T_S7_S6_:
.LFB3692:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-32(%rbp), %rcx
	movq	-16(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt4copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3692:
	.size	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIP6ticketES4_EET0_T_S7_S6_, .-_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIP6ticketES4_EET0_T_S7_S6_
	.section	.text._ZNK9__gnu_cxx13new_allocatorI4EdgeE8max_sizeEv,"axG",@progbits,_ZNK9__gnu_cxx13new_allocatorI4EdgeE8max_sizeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx13new_allocatorI4EdgeE8max_sizeEv
	.type	_ZNK9__gnu_cxx13new_allocatorI4EdgeE8max_sizeEv, @function
_ZNK9__gnu_cxx13new_allocatorI4EdgeE8max_sizeEv:
.LFB3703:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movabsq	$1152921504606846975, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3703:
	.size	_ZNK9__gnu_cxx13new_allocatorI4EdgeE8max_sizeEv, .-_ZNK9__gnu_cxx13new_allocatorI4EdgeE8max_sizeEv
	.section	.text._ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP4EdgeES4_EET0_T_S7_S6_,"axG",@progbits,_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP4EdgeES4_EET0_T_S7_S6_,comdat
	.weak	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP4EdgeES4_EET0_T_S7_S6_
	.type	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP4EdgeES4_EET0_T_S7_S6_, @function
_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP4EdgeES4_EET0_T_S7_S6_:
.LFB3704:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3704
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -48(%rbp)
	movq	%rsi, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -24(%rbp)
.L388:
	leaq	-64(%rbp), %rdx
	leaq	-48(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB23:
	call	_ZStneIP4EdgeEbRKSt13move_iteratorIT_ES6_
.LEHE23:
	testb	%al, %al
	je	.L387
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt13move_iteratorIP4EdgeEdeEv
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt11__addressofI4EdgeEPT_RS1_
	movq	%rbx, %rsi
	movq	%rax, %rdi
	call	_ZSt10_ConstructI4EdgeJS0_EEvPT_DpOT0_
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt13move_iteratorIP4EdgeEppEv
	addq	$16, -24(%rbp)
	jmp	.L388
.L387:
	movq	-24(%rbp), %rax
	jmp	.L394
.L392:
	movq	%rax, %rdi
	call	__cxa_begin_catch
	movq	-24(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt8_DestroyIP4EdgeEvT_S2_
.LEHB24:
	call	__cxa_rethrow
.LEHE24:
.L393:
	movq	%rax, %rbx
	call	__cxa_end_catch
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB25:
	call	_Unwind_Resume
.LEHE25:
.L394:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3704:
	.section	.gcc_except_table
	.align 4
.LLSDA3704:
	.byte	0xff
	.byte	0x3
	.uleb128 .LLSDATT3704-.LLSDATTD3704
.LLSDATTD3704:
	.byte	0x1
	.uleb128 .LLSDACSE3704-.LLSDACSB3704
.LLSDACSB3704:
	.uleb128 .LEHB23-.LFB3704
	.uleb128 .LEHE23-.LEHB23
	.uleb128 .L392-.LFB3704
	.uleb128 0x1
	.uleb128 .LEHB24-.LFB3704
	.uleb128 .LEHE24-.LEHB24
	.uleb128 .L393-.LFB3704
	.uleb128 0
	.uleb128 .LEHB25-.LFB3704
	.uleb128 .LEHE25-.LEHB25
	.uleb128 0
	.uleb128 0
.LLSDACSE3704:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3704:
	.section	.text._ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP4EdgeES4_EET0_T_S7_S6_,"axG",@progbits,_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP4EdgeES4_EET0_T_S7_S6_,comdat
	.size	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP4EdgeES4_EET0_T_S7_S6_, .-_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP4EdgeES4_EET0_T_S7_S6_
	.section	.text._ZNSt16allocator_traitsISaI5qnodeEE8max_sizeERKS1_,"axG",@progbits,_ZNSt16allocator_traitsISaI5qnodeEE8max_sizeERKS1_,comdat
	.weak	_ZNSt16allocator_traitsISaI5qnodeEE8max_sizeERKS1_
	.type	_ZNSt16allocator_traitsISaI5qnodeEE8max_sizeERKS1_, @function
_ZNSt16allocator_traitsISaI5qnodeEE8max_sizeERKS1_:
.LFB3705:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx13new_allocatorI5qnodeE8max_sizeEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3705:
	.size	_ZNSt16allocator_traitsISaI5qnodeEE8max_sizeERKS1_, .-_ZNSt16allocator_traitsISaI5qnodeEE8max_sizeERKS1_
	.section	.text._ZNKSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv,"axG",@progbits,_ZNKSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv,comdat
	.align 2
	.weak	_ZNKSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv
	.type	_ZNKSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv, @function
_ZNKSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv:
.LFB3706:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3706:
	.size	_ZNKSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv, .-_ZNKSt12_Vector_baseI5qnodeSaIS0_EE19_M_get_Tp_allocatorEv
	.section	.text._ZN9__gnu_cxx13new_allocatorI5qnodeE8allocateEmPKv,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI5qnodeE8allocateEmPKv,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI5qnodeE8allocateEmPKv
	.type	_ZN9__gnu_cxx13new_allocatorI5qnodeE8allocateEmPKv, @function
_ZN9__gnu_cxx13new_allocatorI5qnodeE8allocateEmPKv:
.LFB3707:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx13new_allocatorI5qnodeE8max_sizeEv
	cmpq	-16(%rbp), %rax
	setb	%al
	testb	%al, %al
	je	.L400
	call	_ZSt17__throw_bad_allocv
.L400:
	movq	-16(%rbp), %rax
	salq	$4, %rax
	movq	%rax, %rdi
	call	_Znwm
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3707:
	.size	_ZN9__gnu_cxx13new_allocatorI5qnodeE8allocateEmPKv, .-_ZN9__gnu_cxx13new_allocatorI5qnodeE8allocateEmPKv
	.section	.text._ZNSt13move_iteratorIP5qnodeEC2ES1_,"axG",@progbits,_ZNSt13move_iteratorIP5qnodeEC5ES1_,comdat
	.align 2
	.weak	_ZNSt13move_iteratorIP5qnodeEC2ES1_
	.type	_ZNSt13move_iteratorIP5qnodeEC2ES1_, @function
_ZNSt13move_iteratorIP5qnodeEC2ES1_:
.LFB3709:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3709:
	.size	_ZNSt13move_iteratorIP5qnodeEC2ES1_, .-_ZNSt13move_iteratorIP5qnodeEC2ES1_
	.weak	_ZNSt13move_iteratorIP5qnodeEC1ES1_
	.set	_ZNSt13move_iteratorIP5qnodeEC1ES1_,_ZNSt13move_iteratorIP5qnodeEC2ES1_
	.section	.text._ZSt18uninitialized_copyISt13move_iteratorIP5qnodeES2_ET0_T_S5_S4_,"axG",@progbits,_ZSt18uninitialized_copyISt13move_iteratorIP5qnodeES2_ET0_T_S5_S4_,comdat
	.weak	_ZSt18uninitialized_copyISt13move_iteratorIP5qnodeES2_ET0_T_S5_S4_
	.type	_ZSt18uninitialized_copyISt13move_iteratorIP5qnodeES2_ET0_T_S5_S4_, @function
_ZSt18uninitialized_copyISt13move_iteratorIP5qnodeES2_ET0_T_S5_S4_:
.LFB3711:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -32(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movb	$1, -1(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rcx
	movq	-32(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP5qnodeES4_EET0_T_S7_S6_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3711:
	.size	_ZSt18uninitialized_copyISt13move_iteratorIP5qnodeES2_ET0_T_S5_S4_, .-_ZSt18uninitialized_copyISt13move_iteratorIP5qnodeES2_ET0_T_S5_S4_
	.section	.text._ZSt4copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_,"axG",@progbits,_ZSt4copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_,comdat
	.weak	_ZSt4copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_
	.type	_ZSt4copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_, @function
_ZSt4copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_:
.LFB3712:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -32(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt12__miter_baseIP6ticketEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E
	movq	%rax, %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt12__miter_baseIP6ticketEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E
	movq	%rax, %rcx
	movq	-40(%rbp), %rax
	movq	%rax, %rdx
	movq	%rbx, %rsi
	movq	%rcx, %rdi
	call	_ZSt14__copy_move_a2ILb1EP6ticketS1_ET1_T0_S3_S2_
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3712:
	.size	_ZSt4copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_, .-_ZSt4copyISt13move_iteratorIP6ticketES2_ET0_T_S5_S4_
	.section	.text._ZStneIP4EdgeEbRKSt13move_iteratorIT_ES6_,"axG",@progbits,_ZStneIP4EdgeEbRKSt13move_iteratorIT_ES6_,comdat
	.weak	_ZStneIP4EdgeEbRKSt13move_iteratorIT_ES6_
	.type	_ZStneIP4EdgeEbRKSt13move_iteratorIT_ES6_, @function
_ZStneIP4EdgeEbRKSt13move_iteratorIT_ES6_:
.LFB3715:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSteqIP4EdgeEbRKSt13move_iteratorIT_ES6_
	xorl	$1, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3715:
	.size	_ZStneIP4EdgeEbRKSt13move_iteratorIT_ES6_, .-_ZStneIP4EdgeEbRKSt13move_iteratorIT_ES6_
	.section	.text._ZNSt13move_iteratorIP4EdgeEppEv,"axG",@progbits,_ZNSt13move_iteratorIP4EdgeEppEv,comdat
	.align 2
	.weak	_ZNSt13move_iteratorIP4EdgeEppEv
	.type	_ZNSt13move_iteratorIP4EdgeEppEv, @function
_ZNSt13move_iteratorIP4EdgeEppEv:
.LFB3716:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	leaq	16(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3716:
	.size	_ZNSt13move_iteratorIP4EdgeEppEv, .-_ZNSt13move_iteratorIP4EdgeEppEv
	.section	.text._ZSt11__addressofI4EdgeEPT_RS1_,"axG",@progbits,_ZSt11__addressofI4EdgeEPT_RS1_,comdat
	.weak	_ZSt11__addressofI4EdgeEPT_RS1_
	.type	_ZSt11__addressofI4EdgeEPT_RS1_, @function
_ZSt11__addressofI4EdgeEPT_RS1_:
.LFB3717:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3717:
	.size	_ZSt11__addressofI4EdgeEPT_RS1_, .-_ZSt11__addressofI4EdgeEPT_RS1_
	.section	.text._ZNKSt13move_iteratorIP4EdgeEdeEv,"axG",@progbits,_ZNKSt13move_iteratorIP4EdgeEdeEv,comdat
	.align 2
	.weak	_ZNKSt13move_iteratorIP4EdgeEdeEv
	.type	_ZNKSt13move_iteratorIP4EdgeEdeEv, @function
_ZNKSt13move_iteratorIP4EdgeEdeEv:
.LFB3718:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3718:
	.size	_ZNKSt13move_iteratorIP4EdgeEdeEv, .-_ZNKSt13move_iteratorIP4EdgeEdeEv
	.section	.text._ZSt10_ConstructI4EdgeJS0_EEvPT_DpOT0_,"axG",@progbits,_ZSt10_ConstructI4EdgeJS0_EEvPT_DpOT0_,comdat
	.weak	_ZSt10_ConstructI4EdgeJS0_EEvPT_DpOT0_
	.type	_ZSt10_ConstructI4EdgeJS0_EEvPT_DpOT0_, @function
_ZSt10_ConstructI4EdgeJS0_EEvPT_DpOT0_:
.LFB3719:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI4EdgeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	movl	$16, %edi
	call	_ZnwmPv
	movq	%rax, %rcx
	testq	%rcx, %rcx
	je	.L418
	movq	(%rbx), %rax
	movq	8(%rbx), %rdx
	movq	%rax, (%rcx)
	movq	%rdx, 8(%rcx)
.L418:
	nop
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3719:
	.size	_ZSt10_ConstructI4EdgeJS0_EEvPT_DpOT0_, .-_ZSt10_ConstructI4EdgeJS0_EEvPT_DpOT0_
	.section	.text._ZNK9__gnu_cxx13new_allocatorI5qnodeE8max_sizeEv,"axG",@progbits,_ZNK9__gnu_cxx13new_allocatorI5qnodeE8max_sizeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx13new_allocatorI5qnodeE8max_sizeEv
	.type	_ZNK9__gnu_cxx13new_allocatorI5qnodeE8max_sizeEv, @function
_ZNK9__gnu_cxx13new_allocatorI5qnodeE8max_sizeEv:
.LFB3720:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movabsq	$1152921504606846975, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3720:
	.size	_ZNK9__gnu_cxx13new_allocatorI5qnodeE8max_sizeEv, .-_ZNK9__gnu_cxx13new_allocatorI5qnodeE8max_sizeEv
	.section	.text._ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP5qnodeES4_EET0_T_S7_S6_,"axG",@progbits,_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP5qnodeES4_EET0_T_S7_S6_,comdat
	.weak	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP5qnodeES4_EET0_T_S7_S6_
	.type	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP5qnodeES4_EET0_T_S7_S6_, @function
_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP5qnodeES4_EET0_T_S7_S6_:
.LFB3721:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3721
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -48(%rbp)
	movq	%rsi, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -24(%rbp)
.L423:
	leaq	-64(%rbp), %rdx
	leaq	-48(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB26:
	call	_ZStneIP5qnodeEbRKSt13move_iteratorIT_ES6_
.LEHE26:
	testb	%al, %al
	je	.L422
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt13move_iteratorIP5qnodeEdeEv
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt11__addressofI5qnodeEPT_RS1_
	movq	%rbx, %rsi
	movq	%rax, %rdi
	call	_ZSt10_ConstructI5qnodeJS0_EEvPT_DpOT0_
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt13move_iteratorIP5qnodeEppEv
	addq	$16, -24(%rbp)
	jmp	.L423
.L422:
	movq	-24(%rbp), %rax
	jmp	.L429
.L427:
	movq	%rax, %rdi
	call	__cxa_begin_catch
	movq	-24(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt8_DestroyIP5qnodeEvT_S2_
.LEHB27:
	call	__cxa_rethrow
.LEHE27:
.L428:
	movq	%rax, %rbx
	call	__cxa_end_catch
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB28:
	call	_Unwind_Resume
.LEHE28:
.L429:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3721:
	.section	.gcc_except_table
	.align 4
.LLSDA3721:
	.byte	0xff
	.byte	0x3
	.uleb128 .LLSDATT3721-.LLSDATTD3721
.LLSDATTD3721:
	.byte	0x1
	.uleb128 .LLSDACSE3721-.LLSDACSB3721
.LLSDACSB3721:
	.uleb128 .LEHB26-.LFB3721
	.uleb128 .LEHE26-.LEHB26
	.uleb128 .L427-.LFB3721
	.uleb128 0x1
	.uleb128 .LEHB27-.LFB3721
	.uleb128 .LEHE27-.LEHB27
	.uleb128 .L428-.LFB3721
	.uleb128 0
	.uleb128 .LEHB28-.LFB3721
	.uleb128 .LEHE28-.LEHB28
	.uleb128 0
	.uleb128 0
.LLSDACSE3721:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3721:
	.section	.text._ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP5qnodeES4_EET0_T_S7_S6_,"axG",@progbits,_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP5qnodeES4_EET0_T_S7_S6_,comdat
	.size	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP5qnodeES4_EET0_T_S7_S6_, .-_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP5qnodeES4_EET0_T_S7_S6_
	.section	.text._ZSt12__miter_baseIP6ticketEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E,"axG",@progbits,_ZSt12__miter_baseIP6ticketEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E,comdat
	.weak	_ZSt12__miter_baseIP6ticketEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E
	.type	_ZSt12__miter_baseIP6ticketEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E, @function
_ZSt12__miter_baseIP6ticketEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E:
.LFB3722:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt13move_iteratorIP6ticketE4baseEv
	movq	%rax, %rdi
	call	_ZSt12__miter_baseIP6ticketET_S2_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3722:
	.size	_ZSt12__miter_baseIP6ticketEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E, .-_ZSt12__miter_baseIP6ticketEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E
	.section	.text._ZSt14__copy_move_a2ILb1EP6ticketS1_ET1_T0_S3_S2_,"axG",@progbits,_ZSt14__copy_move_a2ILb1EP6ticketS1_ET1_T0_S3_S2_,comdat
	.weak	_ZSt14__copy_move_a2ILb1EP6ticketS1_ET1_T0_S3_S2_
	.type	_ZSt14__copy_move_a2ILb1EP6ticketS1_ET1_T0_S3_S2_, @function
_ZSt14__copy_move_a2ILb1EP6ticketS1_ET1_T0_S3_S2_:
.LFB3723:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$32, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt12__niter_baseIP6ticketET_S2_
	movq	%rax, %r12
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt12__niter_baseIP6ticketET_S2_
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt12__niter_baseIP6ticketET_S2_
	movq	%r12, %rdx
	movq	%rbx, %rsi
	movq	%rax, %rdi
	call	_ZSt13__copy_move_aILb1EP6ticketS1_ET1_T0_S3_S2_
	addq	$32, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3723:
	.size	_ZSt14__copy_move_a2ILb1EP6ticketS1_ET1_T0_S3_S2_, .-_ZSt14__copy_move_a2ILb1EP6ticketS1_ET1_T0_S3_S2_
	.section	.text._ZSteqIP4EdgeEbRKSt13move_iteratorIT_ES6_,"axG",@progbits,_ZSteqIP4EdgeEbRKSt13move_iteratorIT_ES6_,comdat
	.weak	_ZSteqIP4EdgeEbRKSt13move_iteratorIT_ES6_
	.type	_ZSteqIP4EdgeEbRKSt13move_iteratorIT_ES6_, @function
_ZSteqIP4EdgeEbRKSt13move_iteratorIT_ES6_:
.LFB3724:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt13move_iteratorIP4EdgeE4baseEv
	movq	%rax, %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt13move_iteratorIP4EdgeE4baseEv
	cmpq	%rax, %rbx
	sete	%al
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3724:
	.size	_ZSteqIP4EdgeEbRKSt13move_iteratorIT_ES6_, .-_ZSteqIP4EdgeEbRKSt13move_iteratorIT_ES6_
	.section	.text._ZStneIP5qnodeEbRKSt13move_iteratorIT_ES6_,"axG",@progbits,_ZStneIP5qnodeEbRKSt13move_iteratorIT_ES6_,comdat
	.weak	_ZStneIP5qnodeEbRKSt13move_iteratorIT_ES6_
	.type	_ZStneIP5qnodeEbRKSt13move_iteratorIT_ES6_, @function
_ZStneIP5qnodeEbRKSt13move_iteratorIT_ES6_:
.LFB3725:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSteqIP5qnodeEbRKSt13move_iteratorIT_ES6_
	xorl	$1, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3725:
	.size	_ZStneIP5qnodeEbRKSt13move_iteratorIT_ES6_, .-_ZStneIP5qnodeEbRKSt13move_iteratorIT_ES6_
	.section	.text._ZNSt13move_iteratorIP5qnodeEppEv,"axG",@progbits,_ZNSt13move_iteratorIP5qnodeEppEv,comdat
	.align 2
	.weak	_ZNSt13move_iteratorIP5qnodeEppEv
	.type	_ZNSt13move_iteratorIP5qnodeEppEv, @function
_ZNSt13move_iteratorIP5qnodeEppEv:
.LFB3726:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	leaq	16(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3726:
	.size	_ZNSt13move_iteratorIP5qnodeEppEv, .-_ZNSt13move_iteratorIP5qnodeEppEv
	.section	.text._ZSt11__addressofI5qnodeEPT_RS1_,"axG",@progbits,_ZSt11__addressofI5qnodeEPT_RS1_,comdat
	.weak	_ZSt11__addressofI5qnodeEPT_RS1_
	.type	_ZSt11__addressofI5qnodeEPT_RS1_, @function
_ZSt11__addressofI5qnodeEPT_RS1_:
.LFB3727:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3727:
	.size	_ZSt11__addressofI5qnodeEPT_RS1_, .-_ZSt11__addressofI5qnodeEPT_RS1_
	.section	.text._ZNKSt13move_iteratorIP5qnodeEdeEv,"axG",@progbits,_ZNKSt13move_iteratorIP5qnodeEdeEv,comdat
	.align 2
	.weak	_ZNKSt13move_iteratorIP5qnodeEdeEv
	.type	_ZNKSt13move_iteratorIP5qnodeEdeEv, @function
_ZNKSt13move_iteratorIP5qnodeEdeEv:
.LFB3728:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3728:
	.size	_ZNKSt13move_iteratorIP5qnodeEdeEv, .-_ZNKSt13move_iteratorIP5qnodeEdeEv
	.section	.text._ZSt10_ConstructI5qnodeJS0_EEvPT_DpOT0_,"axG",@progbits,_ZSt10_ConstructI5qnodeJS0_EEvPT_DpOT0_,comdat
	.weak	_ZSt10_ConstructI5qnodeJS0_EEvPT_DpOT0_
	.type	_ZSt10_ConstructI5qnodeJS0_EEvPT_DpOT0_, @function
_ZSt10_ConstructI5qnodeJS0_EEvPT_DpOT0_:
.LFB3729:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardI5qnodeEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	movl	$16, %edi
	call	_ZnwmPv
	movq	%rax, %rcx
	testq	%rcx, %rcx
	je	.L447
	movq	(%rbx), %rax
	movq	8(%rbx), %rdx
	movq	%rax, (%rcx)
	movq	%rdx, 8(%rcx)
.L447:
	nop
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3729:
	.size	_ZSt10_ConstructI5qnodeJS0_EEvPT_DpOT0_, .-_ZSt10_ConstructI5qnodeJS0_EEvPT_DpOT0_
	.section	.text._ZNKSt13move_iteratorIP6ticketE4baseEv,"axG",@progbits,_ZNKSt13move_iteratorIP6ticketE4baseEv,comdat
	.align 2
	.weak	_ZNKSt13move_iteratorIP6ticketE4baseEv
	.type	_ZNKSt13move_iteratorIP6ticketE4baseEv, @function
_ZNKSt13move_iteratorIP6ticketE4baseEv:
.LFB3730:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3730:
	.size	_ZNKSt13move_iteratorIP6ticketE4baseEv, .-_ZNKSt13move_iteratorIP6ticketE4baseEv
	.section	.text._ZSt12__miter_baseIP6ticketET_S2_,"axG",@progbits,_ZSt12__miter_baseIP6ticketET_S2_,comdat
	.weak	_ZSt12__miter_baseIP6ticketET_S2_
	.type	_ZSt12__miter_baseIP6ticketET_S2_, @function
_ZSt12__miter_baseIP6ticketET_S2_:
.LFB3731:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3731:
	.size	_ZSt12__miter_baseIP6ticketET_S2_, .-_ZSt12__miter_baseIP6ticketET_S2_
	.section	.text._ZSt12__niter_baseIP6ticketET_S2_,"axG",@progbits,_ZSt12__niter_baseIP6ticketET_S2_,comdat
	.weak	_ZSt12__niter_baseIP6ticketET_S2_
	.type	_ZSt12__niter_baseIP6ticketET_S2_, @function
_ZSt12__niter_baseIP6ticketET_S2_:
.LFB3732:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3732:
	.size	_ZSt12__niter_baseIP6ticketET_S2_, .-_ZSt12__niter_baseIP6ticketET_S2_
	.section	.text._ZSt13__copy_move_aILb1EP6ticketS1_ET1_T0_S3_S2_,"axG",@progbits,_ZSt13__copy_move_aILb1EP6ticketS1_ET1_T0_S3_S2_,comdat
	.weak	_ZSt13__copy_move_aILb1EP6ticketS1_ET1_T0_S3_S2_
	.type	_ZSt13__copy_move_aILb1EP6ticketS1_ET1_T0_S3_S2_, @function
_ZSt13__copy_move_aILb1EP6ticketS1_ET1_T0_S3_S2_:
.LFB3733:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movb	$1, -1(%rbp)
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rcx
	movq	-24(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mI6ticketEEPT_PKS4_S7_S5_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3733:
	.size	_ZSt13__copy_move_aILb1EP6ticketS1_ET1_T0_S3_S2_, .-_ZSt13__copy_move_aILb1EP6ticketS1_ET1_T0_S3_S2_
	.section	.text._ZNKSt13move_iteratorIP4EdgeE4baseEv,"axG",@progbits,_ZNKSt13move_iteratorIP4EdgeE4baseEv,comdat
	.align 2
	.weak	_ZNKSt13move_iteratorIP4EdgeE4baseEv
	.type	_ZNKSt13move_iteratorIP4EdgeE4baseEv, @function
_ZNKSt13move_iteratorIP4EdgeE4baseEv:
.LFB3734:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3734:
	.size	_ZNKSt13move_iteratorIP4EdgeE4baseEv, .-_ZNKSt13move_iteratorIP4EdgeE4baseEv
	.section	.text._ZSteqIP5qnodeEbRKSt13move_iteratorIT_ES6_,"axG",@progbits,_ZSteqIP5qnodeEbRKSt13move_iteratorIT_ES6_,comdat
	.weak	_ZSteqIP5qnodeEbRKSt13move_iteratorIT_ES6_
	.type	_ZSteqIP5qnodeEbRKSt13move_iteratorIT_ES6_, @function
_ZSteqIP5qnodeEbRKSt13move_iteratorIT_ES6_:
.LFB3735:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt13move_iteratorIP5qnodeE4baseEv
	movq	%rax, %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt13move_iteratorIP5qnodeE4baseEv
	cmpq	%rax, %rbx
	sete	%al
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3735:
	.size	_ZSteqIP5qnodeEbRKSt13move_iteratorIT_ES6_, .-_ZSteqIP5qnodeEbRKSt13move_iteratorIT_ES6_
	.section	.text._ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mI6ticketEEPT_PKS4_S7_S5_,"axG",@progbits,_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mI6ticketEEPT_PKS4_S7_S5_,comdat
	.weak	_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mI6ticketEEPT_PKS4_S7_S5_
	.type	_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mI6ticketEEPT_PKS4_S7_S5_, @function
_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mI6ticketEEPT_PKS4_S7_S5_:
.LFB3736:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-32(%rbp), %rdx
	movq	-24(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$4, %rax
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L461
	movq	-8(%rbp), %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-24(%rbp), %rcx
	movq	-40(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memmove
.L461:
	movq	-8(%rbp), %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3736:
	.size	_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mI6ticketEEPT_PKS4_S7_S5_, .-_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mI6ticketEEPT_PKS4_S7_S5_
	.section	.text._ZNKSt13move_iteratorIP5qnodeE4baseEv,"axG",@progbits,_ZNKSt13move_iteratorIP5qnodeE4baseEv,comdat
	.align 2
	.weak	_ZNKSt13move_iteratorIP5qnodeE4baseEv
	.type	_ZNKSt13move_iteratorIP5qnodeE4baseEv, @function
_ZNKSt13move_iteratorIP5qnodeE4baseEv:
.LFB3737:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3737:
	.size	_ZNKSt13move_iteratorIP5qnodeE4baseEv, .-_ZNKSt13move_iteratorIP5qnodeE4baseEv
	.text
	.type	__tcf_0, @function
__tcf_0:
.LFB3739:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movl	$E+2400000, %ebx
.L467:
	cmpq	$E, %rbx
	je	.L465
	subq	$24, %rbx
	movq	%rbx, %rdi
	call	_ZNSt6vectorI4EdgeSaIS0_EED1Ev
	jmp	.L467
.L465:
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3739:
	.size	__tcf_0, .-__tcf_0
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB3738:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$16, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	cmpl	$1, -20(%rbp)
	jne	.L472
	cmpl	$65535, -24(%rbp)
	jne	.L472
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
	movl	$E, %eax
	movl	$99999, %ebx
	movq	%rax, %r12
.L471:
	testq	%rbx, %rbx
	js	.L470
	movq	%r12, %rdi
	call	_ZNSt6vectorI4EdgeSaIS0_EEC1Ev
	addq	$24, %r12
	subq	$1, %rbx
	jmp	.L471
.L470:
	movl	$__dso_handle, %edx
	movl	$0, %esi
	movl	$__tcf_0, %edi
	call	__cxa_atexit
.L472:
	nop
	addq	$16, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3738:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_E, @function
_GLOBAL__sub_I_E:
.LFB3740:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3740:
	.size	_GLOBAL__sub_I_E, .-_GLOBAL__sub_I_E
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_E
	.hidden	__dso_handle
	.ident	"GCC: (Debian 6.1.1-11) 6.1.1 20160802"
	.section	.note.GNU-stack,"",@progbits
