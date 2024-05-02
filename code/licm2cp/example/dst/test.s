	.file	"test.cpp"
	.text
.Ltext0:
	.file 0 "/home/zy/OptChecker/code/licm2cp" "/home/zy/OptChecker/code/licm2cp/example/dst/test.cpp"
	.p2align 4
	.globl	_Z4testv
	.type	_Z4testv, @function
_Z4testv:
.LFB0:
	.file 1 "/home/zy/OptChecker/code/licm2cp/example/dst/test.cpp"
	.loc 1 3 13 view -0
	.cfi_startproc
	.loc 1 4 3 view .LVU1
	.loc 1 4 15 is_stmt 0 view .LVU2
	movl	b(%rip), %esi
	movl	a(%rip), %edx
	leal	(%rdx,%rsi), %eax
	.loc 1 5 10 view .LVU3
	movl	%esi, myInsert1(%rip)
	.loc 1 6 10 view .LVU4
	movl	%esi, %ecx
	.loc 1 4 15 view .LVU5
	movl	%eax, myInsert0(%rip)
	.loc 1 5 1 is_stmt 1 view .LVU6
	.loc 1 6 1 view .LVU7
	.loc 1 6 11 is_stmt 0 view .LVU8
	movl	%esi, %eax
	negl	%eax
	movl	%eax, myInsert2(%rip)
	.loc 1 7 1 is_stmt 1 view .LVU9
.LVL0:
.LBB2:
	.loc 1 7 19 discriminator 1 view .LVU10
.LBE2:
	.loc 1 6 10 is_stmt 0 view .LVU11
	movl	$4087153, %eax
	jmp	.L2
.LVL1:
	.p2align 4,,10
	.p2align 3
.L3:
.LBB3:
	.loc 1 13 3 view .LVU12
	xorl	%ecx, %ecx
.LVL2:
.L2:
	.loc 1 9 1 is_stmt 1 view .LVU13
	.loc 1 9 7 is_stmt 0 view .LVU14
	addl	%ecx, %edx
	.loc 1 11 1 is_stmt 1 view .LVU15
	.loc 1 12 5 view .LVU16
	.loc 1 12 16 view .LVU17
	.loc 1 13 1 view .LVU18
	.loc 1 7 1 discriminator 3 view .LVU19
.LVL3:
	.loc 1 7 19 discriminator 1 view .LVU20
	subl	$1, %eax
.LVL4:
	.loc 1 7 19 is_stmt 0 discriminator 1 view .LVU21
	jne	.L3
	subl	%ecx, %esi
	movl	%edx, m(%rip)
	movl	%edx, a(%rip)
	movl	%esi, myMark2(%rip)
	movl	$0, b(%rip)
.LBE3:
	.loc 1 15 1 view .LVU22
	ret
	.cfi_endproc
.LFE0:
	.size	_Z4testv, .-_Z4testv
	.globl	b
	.bss
	.align 4
	.type	b, @object
	.size	b, 4
b:
	.zero	4
	.globl	a
	.align 4
	.type	a, @object
	.size	a, 4
a:
	.zero	4
	.globl	m
	.align 4
	.type	m, @object
	.size	m, 4
m:
	.zero	4
	.text
.Letext0:
	.file 2 "/home/zy/OptChecker/code/licm2cp/example/dst/init.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0xca
	.value	0x5
	.byte	0x1
	.byte	0x8
	.long	.Ldebug_abbrev0
	.uleb128 0x3
	.long	.LASF6
	.byte	0x21
	.long	.LASF0
	.long	.LASF1
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.string	"m"
	.byte	0x1
	.byte	0x5
	.long	0x41
	.uleb128 0x9
	.byte	0x3
	.quad	m
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x2
	.string	"a"
	.byte	0x2
	.byte	0x5
	.long	0x41
	.uleb128 0x9
	.byte	0x3
	.quad	a
	.uleb128 0x2
	.string	"b"
	.byte	0x2
	.byte	0x8
	.long	0x41
	.uleb128 0x9
	.byte	0x3
	.quad	b
	.uleb128 0x1
	.long	.LASF2
	.byte	0x5
	.long	0x41
	.uleb128 0x1
	.long	.LASF3
	.byte	0x8
	.long	0x41
	.uleb128 0x1
	.long	.LASF4
	.byte	0xb
	.long	0x41
	.uleb128 0x1
	.long	.LASF5
	.byte	0xc
	.long	0x41
	.uleb128 0x5
	.long	.LASF7
	.byte	0x1
	.byte	0x3
	.byte	0x6
	.long	.LASF8
	.quad	.LFB0
	.quad	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x6
	.long	.LLRL0
	.uleb128 0x7
	.string	"c"
	.byte	0x1
	.byte	0x7
	.byte	0xa
	.long	0x41
	.long	.LLST1
	.long	.LVUS1
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 12
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x1f
	.uleb128 0x1b
	.uleb128 0x1f
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x6e
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x17
	.uleb128 0x2137
	.uleb128 0x17
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_loclists,"",@progbits
	.long	.Ldebug_loc3-.Ldebug_loc2
.Ldebug_loc2:
	.value	0x5
	.byte	0x8
	.byte	0
	.long	0
.Ldebug_loc0:
.LVUS1:
	.uleb128 .LVU10
	.uleb128 .LVU12
	.uleb128 .LVU12
	.uleb128 .LVU20
	.uleb128 .LVU20
	.uleb128 .LVU21
	.uleb128 .LVU21
	.uleb128 0
.LLST1:
	.byte	0x4
	.uleb128 .LVL0-.Ltext0
	.uleb128 .LVL1-.Ltext0
	.uleb128 0x2
	.byte	0x30
	.byte	0x9f
	.byte	0x4
	.uleb128 .LVL1-.Ltext0
	.uleb128 .LVL3-.Ltext0
	.uleb128 0x9
	.byte	0xc
	.long	0x3e5d71
	.byte	0x70
	.sleb128 0
	.byte	0x1c
	.byte	0x9f
	.byte	0x4
	.uleb128 .LVL3-.Ltext0
	.uleb128 .LVL4-.Ltext0
	.uleb128 0x9
	.byte	0xc
	.long	0x3e5d72
	.byte	0x70
	.sleb128 0
	.byte	0x1c
	.byte	0x9f
	.byte	0x4
	.uleb128 .LVL4-.Ltext0
	.uleb128 .LFE0-.Ltext0
	.uleb128 0x9
	.byte	0xc
	.long	0x3e5d71
	.byte	0x70
	.sleb128 0
	.byte	0x1c
	.byte	0x9f
	.byte	0
.Ldebug_loc3:
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_rnglists,"",@progbits
.Ldebug_ranges0:
	.long	.Ldebug_ranges3-.Ldebug_ranges2
.Ldebug_ranges2:
	.value	0x5
	.byte	0x8
	.byte	0
	.long	0
.LLRL0:
	.byte	0x4
	.uleb128 .LBB2-.Ltext0
	.uleb128 .LBE2-.Ltext0
	.byte	0x4
	.uleb128 .LBB3-.Ltext0
	.uleb128 .LBE3-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF2:
	.string	"myInsert0"
.LASF3:
	.string	"myInsert1"
.LASF4:
	.string	"myInsert2"
.LASF5:
	.string	"myMark2"
.LASF6:
	.string	"GNU C++17 15.0.0 20240426 (experimental) -mtune=generic -march=x86-64 -g -O3 -fwrapv -fno-tree-vectorize"
.LASF7:
	.string	"test"
.LASF8:
	.string	"_Z4testv"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/home/zy/OptChecker/code/licm2cp"
.LASF0:
	.string	"/home/zy/OptChecker/code/licm2cp/example/dst/test.cpp"
	.ident	"GCC: (GNU) 15.0.0 20240426 (experimental)"
	.section	.note.GNU-stack,"",@progbits
