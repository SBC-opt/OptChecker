	.text
	.file	"test.cpp"
	.globl	_Z3fn1tbhbi                     # -- Begin function _Z3fn1tbhbi
	.p2align	4, 0x90
	.type	_Z3fn1tbhbi,@function
_Z3fn1tbhbi:                            # @_Z3fn1tbhbi
	.cfi_startproc
# %bb.0:
	xorl	%ecx, %ecx
	testl	%edx, %edx
	setne	%cl
	movzbl	Variable_Mark1(%rip), %eax
	cmovel	%edx, %eax
	movzbl	%al, %eax
	movzbl	Variable_Mark2(%rip), %esi
	cmovel	%edx, %esi
                                        # kill: def $ax killed $ax killed $eax
	xorl	%edx, %edx
	divw	%di
	movzwl	%ax, %r8d
	orl	%ecx, %r8d
	movzbl	%sil, %eax
                                        # kill: def $ax killed $ax killed $eax
	xorl	%edx, %edx
	divw	%di
	movzwl	%ax, %eax
	orl	%ecx, %eax
	cmpl	%eax, %r8d
	je	.LBB0_2
# %bb.1:
	movb	$1, Optimized_Mark2(%rip)
.LBB0_2:
	retq
.Lfunc_end0:
	.size	_Z3fn1tbhbi, .Lfunc_end0-_Z3fn1tbhbi
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
