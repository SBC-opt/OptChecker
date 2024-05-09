	.text
	.file	"test.cpp"
	.globl	_Z3fn1sbaay                     # -- Begin function _Z3fn1sbaay
	.p2align	4, 0x90
	.type	_Z3fn1sbaay,@function
_Z3fn1sbaay:                            # @_Z3fn1sbaay
	.cfi_startproc
# %bb.0:
	movl	%ecx, %eax
	testb	%dl, %dl
	movzbl	Variable_Mark1(%rip), %ecx
	cmovnel	%r8d, %ecx
	movzbl	Variable_Mark2(%rip), %edx
	cmovnel	%r8d, %edx
	addb	$79, %cl
	movl	%eax, %esi
                                        # kill: def $cl killed $cl killed $ecx
	shll	%cl, %esi
	addb	$79, %dl
	movl	%edx, %ecx
	shll	%cl, %eax
	testl	%eax, %eax
	setle	%al
	testl	%esi, %esi
	setg	%cl
	xorb	%al, %cl
	jne	.LBB0_2
# %bb.1:
	movw	$1, Optimized_Mark2(%rip)
.LBB0_2:
	retq
.Lfunc_end0:
	.size	_Z3fn1sbaay, .Lfunc_end0-_Z3fn1sbaay
	.cfi_endproc
                                        # -- End function
	.type	Optimized_Mark2,@object         # @Optimized_Mark2
	.bss
	.globl	Optimized_Mark2
	.p2align	1, 0x0
Optimized_Mark2:
	.short	0                               # 0x0
	.size	Optimized_Mark2, 2

	.type	Variable_Mark1,@object          # @Variable_Mark1
	.globl	Variable_Mark1
	.p2align	1, 0x0
Variable_Mark1:
	.short	0                               # 0x0
	.size	Variable_Mark1, 2

	.type	Variable_Mark2,@object          # @Variable_Mark2
	.globl	Variable_Mark2
	.p2align	1, 0x0
Variable_Mark2:
	.short	0                               # 0x0
	.size	Variable_Mark2, 2

	.ident	"clang version 19.0.0git (https://github.com/llvm/llvm-project.git c379a5b69e7e1917589a1d0b6993d74e6697490e)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
