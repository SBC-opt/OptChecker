	.text
	.file	"test.cpp"
	.globl	_Z4testiii                      # -- Begin function _Z4testiii
	.p2align	4, 0x90
	.type	_Z4testiii,@function
_Z4testiii:                             # @_Z4testiii
	.cfi_startproc
# %bb.0:
	movl	%esi, %eax
	movl	%edi, %ecx
	xorl	$100, %ecx
	cltd
	idivl	%ecx
	movq	a@GOTPCREL(%rip), %rdx
	xorl	%ecx, %ecx
	movl	%edi, %esi
	addl	$2, %esi
	movl	%esi, (%rdx)
	notl	%edi
	setne	%cl
	negl	%ecx
	xorl	%edx, %edx
	negl	%eax
	movl	$0, %eax
	sbbl	%eax, %eax
	movq	b@GOTPCREL(%rip), %rsi
	cmpq	Variable_Mark1(%rip), %rdx
	movl	$0, %r8d
	sbbl	%r8d, %r8d
	orl	%ecx, %r8d
	orl	%eax, %r8d
	cmpq	Variable_Mark2(%rip), %rdx
	sbbl	%edx, %edx
	movl	%edi, (%rsi)
	orl	%ecx, %edx
	orl	%eax, %edx
	cmpl	%r8d, %edx
	je	.LBB0_2
# %bb.1:
	movq	$1, Optimized_Mark2(%rip)
.LBB0_2:
	retq
.Lfunc_end0:
	.size	_Z4testiii, .Lfunc_end0-_Z4testiii
	.cfi_endproc
                                        # -- End function
	.type	Optimized_Mark2,@object         # @Optimized_Mark2
	.bss
	.globl	Optimized_Mark2
	.p2align	3, 0x0
Optimized_Mark2:
	.quad	0                               # 0x0
	.size	Optimized_Mark2, 8

	.type	Variable_Mark1,@object          # @Variable_Mark1
	.globl	Variable_Mark1
	.p2align	3, 0x0
Variable_Mark1:
	.quad	0                               # 0x0
	.size	Variable_Mark1, 8

	.type	Variable_Mark2,@object          # @Variable_Mark2
	.globl	Variable_Mark2
	.p2align	3, 0x0
Variable_Mark2:
	.quad	0                               # 0x0
	.size	Variable_Mark2, 8

	.ident	"clang version 19.0.0git (https://github.com/llvm/llvm-project.git c379a5b69e7e1917589a1d0b6993d74e6697490e)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
