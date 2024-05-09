	.text
	.file	"test.cpp"
	.globl	_Z3fn1asash                     # -- Begin function _Z3fn1asash
	.p2align	4, 0x90
	.type	_Z3fn1asash,@function
_Z3fn1asash:                            # @_Z3fn1asash
	.cfi_startproc
# %bb.0:
	movzbl	Optimized_Mark1(%rip), %eax
	testw	%cx, %cx
	je	.LBB0_2
# %bb.1:
	testw	%si, %si
	setne	%cl
	orb	%r8b, %dil
	setne	%dl
	orb	%cl, %dl
	movb	$1, %cl
	jne	.LBB0_4
.LBB0_3:
	testb	%al, %al
	setne	%al
	testb	%r8b, %r8b
	setne	%cl
	andb	%al, %cl
.LBB0_4:
	movb	%cl, Variable_Static(%rip)
	retq
.LBB0_2:
	movb	$1, %cl
	testb	%r8b, %r8b
	jne	.LBB0_4
	jmp	.LBB0_3
.Lfunc_end0:
	.size	_Z3fn1asash, .Lfunc_end0-_Z3fn1asash
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
