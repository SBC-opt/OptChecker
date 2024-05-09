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
	movzbl	Optimized_Mark1(%rip), %eax
	cmovel	%edx, %eax
	setne	%cl
	movzbl	%al, %eax
                                        # kill: def $ax killed $ax killed $eax
	xorl	%edx, %edx
	divw	%di
                                        # kill: def $ax killed $ax def $eax
	orl	%ecx, %eax
	movb	%al, Variable_Static(%rip)
	retq
.Lfunc_end0:
	.size	_Z3fn1tbhbi, .Lfunc_end0-_Z3fn1tbhbi
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
