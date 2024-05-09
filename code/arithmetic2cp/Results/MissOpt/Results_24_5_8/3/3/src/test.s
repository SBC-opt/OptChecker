	.text
	.file	"test.cpp"
	.globl	_Z3fn1sys                       # -- Begin function _Z3fn1sys
	.p2align	4, 0x90
	.type	_Z3fn1sys,@function
_Z3fn1sys:                              # @_Z3fn1sys
	.cfi_startproc
# %bb.0:
	cmpq	$0, Optimized_Mark1(%rip)
	setne	%al
	testw	%di, %di
	setne	%cl
	orb	%cl, %al
	movzbl	%al, %eax
	cmpl	%eax, %edx
	setne	%al
	andb	%cl, %al
	movzbl	%al, %eax
	movq	%rax, Variable_Static(%rip)
	retq
.Lfunc_end0:
	.size	_Z3fn1sys, .Lfunc_end0-_Z3fn1sys
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
