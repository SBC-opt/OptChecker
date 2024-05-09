	.text
	.file	"test.cpp"
	.globl	_Z3fn1hhh                       # -- Begin function _Z3fn1hhh
	.p2align	4, 0x90
	.type	_Z3fn1hhh,@function
_Z3fn1hhh:                              # @_Z3fn1hhh
	.cfi_startproc
# %bb.0:
	cmpb	$3, %dil
	movl	$3, %eax
	cmovbl	%edi, %eax
	addb	Optimized_Mark1(%rip), %al
	setne	%al
	testl	%esi, %esi
	sete	%cl
	orb	%al, %cl
	movb	%cl, Variable_Static(%rip)
	retq
.Lfunc_end0:
	.size	_Z3fn1hhh, .Lfunc_end0-_Z3fn1hhh
	.cfi_endproc
                                        # -- End function
	.type	Optimized_Mark1,@object         # @Optimized_Mark1
	.bss
	.globl	Optimized_Mark1
Optimized_Mark1:
	.byte	0                               # 0x0
	.size	Optimized_Mark1, 1

	.type	Variable_Static,@object         # @Variable_Static
	.globl	Variable_Static
Variable_Static:
	.byte	0                               # 0x0
	.size	Variable_Static, 1

	.ident	"clang version 19.0.0git (https://github.com/llvm/llvm-project.git c379a5b69e7e1917589a1d0b6993d74e6697490e)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
