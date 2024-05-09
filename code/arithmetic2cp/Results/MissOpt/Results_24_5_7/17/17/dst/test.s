	.text
	.file	"test.cpp"
	.globl	_Z3fn1xxxx                      # -- Begin function _Z3fn1xxxx
	.p2align	4, 0x90
	.type	_Z3fn1xxxx,@function
_Z3fn1xxxx:                             # @_Z3fn1xxxx
	.cfi_startproc
# %bb.0:
	movb	$1, %al
	testb	%al, %al
	jne	.LBB0_2
# %bb.1:
	movq	$1, Optimized_Mark2(%rip)
.LBB0_2:
	retq
.Lfunc_end0:
	.size	_Z3fn1xxxx, .Lfunc_end0-_Z3fn1xxxx
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
