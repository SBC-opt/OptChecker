	.text
	.file	"test.cpp"
	.globl	_Z3fn1bbxs                      # -- Begin function _Z3fn1bbxs
	.p2align	4, 0x90
	.type	_Z3fn1bbxs,@function
_Z3fn1bbxs:                             # @_Z3fn1bbxs
	.cfi_startproc
# %bb.0:
	movzwl	var_20(%rip), %eax
	cmpw	$8, %ax
	movl	$7, %edx
	cmovael	%eax, %edx
	cmpw	%cx, %dx
	cmovael	%ecx, %edx
	movzwl	%dx, %eax
	movzbl	var_37(%rip), %ecx
	cmpq	%rax, %rcx
	cmovaq	%rcx, %rax
	movq	%rax, Variable_Static(%rip)
	retq
.Lfunc_end0:
	.size	_Z3fn1bbxs, .Lfunc_end0-_Z3fn1bbxs
	.cfi_endproc
                                        # -- End function
	.type	var_20,@object                  # @var_20
	.bss
	.globl	var_20
	.p2align	1, 0x0
var_20:
	.short	0                               # 0x0
	.size	var_20, 2

	.type	var_37,@object                  # @var_37
	.globl	var_37
var_37:
	.byte	0                               # 0x0
	.size	var_37, 1

	.type	Optimized_Mark1,@object         # @Optimized_Mark1
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
