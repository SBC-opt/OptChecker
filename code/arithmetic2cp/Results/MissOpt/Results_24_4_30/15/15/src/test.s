	.text
	.file	"test.cpp"
	.globl	_Z1aPi                          # -- Begin function _Z1aPi
	.p2align	4, 0x90
	.type	_Z1aPi,@function
_Z1aPi:                                 # @_Z1aPi
	.cfi_startproc
# %bb.0:
.Lfunc_end0:
	.size	_Z1aPi, .Lfunc_end0-_Z1aPi
	.cfi_endproc
                                        # -- End function
	.type	Optimized_Mark1,@object         # @Optimized_Mark1
	.bss
	.globl	Optimized_Mark1
	.p2align	2, 0x0
Optimized_Mark1:
	.long	0                               # 0x0
	.size	Optimized_Mark1, 4

	.type	Variable_Static,@object         # @Variable_Static
	.globl	Variable_Static
	.p2align	2, 0x0
Variable_Static:
	.long	0                               # 0x0
	.size	Variable_Static, 4

	.ident	"clang version 19.0.0git (https://github.com/llvm/llvm-project.git c379a5b69e7e1917589a1d0b6993d74e6697490e)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
