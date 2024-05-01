	.text
	.file	"test.cpp"
	.globl	_Z4testiii                      # -- Begin function _Z4testiii
	.p2align	4, 0x90
	.type	_Z4testiii,@function
_Z4testiii:                             # @_Z4testiii
	.cfi_startproc
# %bb.0:
	movl	%esi, %eax
                                        # kill: def $edi killed $edi def $rdi
	movl	%edi, %ecx
	xorl	$100, %ecx
	cltd
	idivl	%ecx
	leal	2(%rdi), %ecx
	movq	a@GOTPCREL(%rip), %rdx
	movl	%ecx, (%rdx)
	notl	%edi
	movl	Optimized_Mark1(%rip), %edx
	addl	%edi, %edx
	orl	%eax, %edx
	xorl	%eax, %eax
	orl	%ecx, %edx
	setne	%al
	movq	%rax, Variable_Static(%rip)
	movq	b@GOTPCREL(%rip), %rax
	movl	%edi, (%rax)
	retq
.Lfunc_end0:
	.size	_Z4testiii, .Lfunc_end0-_Z4testiii
	.cfi_endproc
                                        # -- End function
	.type	Optimized_Mark1,@object         # @Optimized_Mark1
	.bss
	.globl	Optimized_Mark1
	.p2align	3, 0x0
Optimized_Mark1:
	.quad	0                               # 0x0
	.size	Optimized_Mark1, 8

	.type	Variable_Static,@object         # @Variable_Static
	.globl	Variable_Static
	.p2align	3, 0x0
Variable_Static:
	.quad	0                               # 0x0
	.size	Variable_Static, 8

	.ident	"clang version 19.0.0git (https://github.com/llvm/llvm-project.git c379a5b69e7e1917589a1d0b6993d74e6697490e)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
