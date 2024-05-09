	.text
	.file	"test.cpp"
	.globl	_Z3fn1sbbbsabb                  # -- Begin function _Z3fn1sbbbsabb
	.p2align	4, 0x90
	.type	_Z3fn1sbbbsabb,@function
_Z3fn1sbbbsabb:                         # @_Z3fn1sbbbsabb
	.cfi_startproc
# %bb.0:
	testw	%r8w, %r8w
	setne	%al
	testb	%r9b, %r9b
	setne	%cl
	andb	%al, %cl
	movzbl	%cl, %eax
	movw	%ax, Variable_Static(%rip)
	retq
.Lfunc_end0:
	.size	_Z3fn1sbbbsabb, .Lfunc_end0-_Z3fn1sbbbsabb
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
