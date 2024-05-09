	.text
	.file	"test.cpp"
	.globl	_Z3fn1xxxx                      # -- Begin function _Z3fn1xxxx
	.p2align	4, 0x90
	.type	_Z3fn1xxxx,@function
_Z3fn1xxxx:                             # @_Z3fn1xxxx
	.cfi_startproc
# %bb.0:
	movabsq	$102819165967389726, %rax       # imm = 0x16D497C9796941E
	cmpq	%rax, %rcx
	cmovgq	%rcx, %rax
	testq	%rsi, %rsi
	cmovneq	%rsi, %rdi
	cmpq	%rdi, %rax
	cmovlq	%rax, %rdi
	xorl	%eax, %eax
	testq	%rdi, %rdi
	cmovgq	%rdi, %rax
	movq	%rax, Variable_Static(%rip)
	retq
.Lfunc_end0:
	.size	_Z3fn1xxxx, .Lfunc_end0-_Z3fn1xxxx
	.cfi_endproc
                                        # -- End function
	.type	Optimized_Mark1,@object         # @Optimized_Mark1
	.bss
	.globl	Optimized_Mark1
	.p2align	3, 0x0
Optimized_Mark1:
	.quad	0                               # 0x0
	.size	Optimized_Mark1, 8

	.type	Variable_Static,@object         # @Variable_Static
	.globl	Variable_Static
	.p2align	3, 0x0
Variable_Static:
	.quad	0                               # 0x0
	.size	Variable_Static, 8

	.ident	"clang version 19.0.0git (https://github.com/llvm/llvm-project.git c379a5b69e7e1917589a1d0b6993d74e6697490e)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
