	.text
	.file	"test.cpp"
	.globl	_Z3fn1tbb                       # -- Begin function _Z3fn1tbb
	.p2align	4, 0x90
	.type	_Z3fn1tbb,@function
_Z3fn1tbb:                              # @_Z3fn1tbb
	.cfi_startproc
# %bb.0:
	testl	%edi, %edi
	setne	Variable_Static(%rip)
	retq
.Lfunc_end0:
	.size	_Z3fn1tbb, .Lfunc_end0-_Z3fn1tbb
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
