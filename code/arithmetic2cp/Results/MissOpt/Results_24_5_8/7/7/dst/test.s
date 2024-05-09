	.text
	.file	"test.cpp"
	.globl	_Z3fn1asash                     # -- Begin function _Z3fn1asash
	.p2align	4, 0x90
	.type	_Z3fn1asash,@function
_Z3fn1asash:                            # @_Z3fn1asash
	.cfi_startproc
# %bb.0:
	testw	%cx, %cx
	je	.LBB0_3
# %bb.1:
	testw	%si, %si
	setne	%al
	orb	%r8b, %dil
	setne	%cl
	orb	%al, %cl
	jne	.LBB0_7
# %bb.2:
	cmpb	$0, Variable_Mark1(%rip)
	setne	%al
	testb	%r8b, %r8b
	setne	%cl
	andb	%al, %cl
	movzbl	%cl, %eax
	negl	%eax
	jmp	.LBB0_5
.LBB0_3:
	testb	%r8b, %r8b
	je	.LBB0_4
.LBB0_7:
	retq
.LBB0_4:
	xorl	%eax, %eax
.LBB0_5:
	cmpb	$0, Variable_Mark2(%rip)
	setne	%cl
	testb	%r8b, %r8b
	setne	%dl
	andb	%cl, %dl
	movzbl	%dl, %ecx
	negl	%ecx
	cmpl	%ecx, %eax
	je	.LBB0_7
# %bb.6:
	movb	$1, Optimized_Mark2(%rip)
	retq
.Lfunc_end0:
	.size	_Z3fn1asash, .Lfunc_end0-_Z3fn1asash
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
