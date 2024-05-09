	.text
	.file	"test.cpp"
	.globl	_Z3fn1sx                        # -- Begin function _Z3fn1sx
	.p2align	4, 0x90
	.type	_Z3fn1sx,@function
_Z3fn1sx:                               # @_Z3fn1sx
	.cfi_startproc
# %bb.0:
	movq	$-1, %rax
	cqto
	idivq	%rsi
	movw	%ax, Variable_Static(%rip)
	retq
.Lfunc_end0:
	.size	_Z3fn1sx, .Lfunc_end0-_Z3fn1sx
	.cfi_endproc
                                        # -- End function
	.type	Optimized_Mark1,@object         # @Optimized_Mark1
	.bss
	.globl	Optimized_Mark1
	.p2align	1, 0x0
Optimized_Mark1:
	.short	0                               # 0x0
	.size	Optimized_Mark1, 2

	.type	Variable_Static,@object         # @Variable_Static
	.globl	Variable_Static
	.p2align	1, 0x0
Variable_Static:
	.short	0                               # 0x0
	.size	Variable_Static, 2

	.ident	"clang version 19.0.0git (https://github.com/llvm/llvm-project.git c379a5b69e7e1917589a1d0b6993d74e6697490e)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
