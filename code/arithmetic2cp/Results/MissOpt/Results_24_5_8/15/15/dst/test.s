	.text
	.file	"test.cpp"
	.globl	_Z3fn1tbb                       # -- Begin function _Z3fn1tbb
	.p2align	4, 0x90
	.type	_Z3fn1tbb,@function
_Z3fn1tbb:                              # @_Z3fn1tbb
	.cfi_startproc
# %bb.0:
	movzbl	Variable_Mark1(%rip), %ecx
	movl	%edi, %eax
	shll	%cl, %eax
	movzbl	Variable_Mark2(%rip), %ecx
	shll	%cl, %edi
	cmpl	%edi, %eax
	je	.LBB0_2
# %bb.1:
	movb	$1, Optimized_Mark2(%rip)
.LBB0_2:
	retq
.Lfunc_end0:
	.size	_Z3fn1tbb, .Lfunc_end0-_Z3fn1tbb
	.cfi_endproc
                                        # -- End function
	.type	Optimized_Mark2,@object         # @Optimized_Mark2
	.bss
	.globl	Optimized_Mark2
Optimized_Mark2:
	.byte	0                               # 0x0
	.size	Optimized_Mark2, 1

	.type	Variable_Mark1,@object          # @Variable_Mark1
	.globl	Variable_Mark1
Variable_Mark1:
	.byte	0                               # 0x0
	.size	Variable_Mark1, 1

	.type	Variable_Mark2,@object          # @Variable_Mark2
	.globl	Variable_Mark2
Variable_Mark2:
	.byte	0                               # 0x0
	.size	Variable_Mark2, 1

	.ident	"clang version 19.0.0git (https://github.com/llvm/llvm-project.git c379a5b69e7e1917589a1d0b6993d74e6697490e)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
