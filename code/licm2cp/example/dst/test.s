	.text
	.file	"test.cpp"
	.file	0 "/home/zy/OptChecker/code/licm2cp" "/home/zy/OptChecker/code/licm2cp/example/dst/test.cpp" md5 0xd080fe9c4a006008184a3b5c8dc47fe7
	.file	1 "example/dst" "init.h" md5 0x81587e5ddf78cd8e5300889014bb826c
	.globl	_Z4testv                        # -- Begin function _Z4testv
	.p2align	4, 0x90
	.type	_Z4testv,@function
_Z4testv:                               # @_Z4testv
.Lfunc_begin0:
	.cfi_startproc
# %bb.0:
	.file	2 "example/dst" "test.cpp" md5 0xd080fe9c4a006008184a3b5c8dc47fe7
	.loc	2 4 17 prologue_end             # example/dst/test.cpp:4:17
	movl	b(%rip), %eax
	movl	a(%rip), %ecx
	.loc	2 4 15 is_stmt 0                # example/dst/test.cpp:4:15
	addl	%eax, %ecx
	.loc	2 4 12                          # example/dst/test.cpp:4:12
	movq	myInsert0@GOTPCREL(%rip), %rdx
	movl	%ecx, (%rdx)
	.loc	2 5 10 is_stmt 1                # example/dst/test.cpp:5:10
	movq	myInsert1@GOTPCREL(%rip), %rdx
	movl	%eax, (%rdx)
.Ltmp0:
	.loc	2 12 23                         # example/dst/test.cpp:12:23
	movq	myMark2@GOTPCREL(%rip), %rdx
	movl	%eax, (%rdx)
.Ltmp1:
	.loc	2 6 11                          # example/dst/test.cpp:6:11
	negl	%eax
	.loc	2 6 10 is_stmt 0                # example/dst/test.cpp:6:10
	movq	myInsert2@GOTPCREL(%rip), %rdx
	movl	%eax, (%rdx)
.Ltmp2:
	.loc	2 0 0                           # example/dst/test.cpp:0:0
	movl	%ecx, a(%rip)
	movl	$0, b(%rip)
	.loc	2 9 3 is_stmt 1                 # example/dst/test.cpp:9:3
	movl	%ecx, m(%rip)
.Ltmp3:
	.loc	2 15 1                          # example/dst/test.cpp:15:1
	retq
.Ltmp4:
.Lfunc_end0:
	.size	_Z4testv, .Lfunc_end0-_Z4testv
	.cfi_endproc
                                        # -- End function
	.type	m,@object                       # @m
	.bss
	.globl	m
	.p2align	2, 0x0
m:
	.long	0                               # 0x0
	.size	m, 4

	.type	a,@object                       # @a
	.globl	a
	.p2align	2, 0x0
a:
	.long	0                               # 0x0
	.size	a, 4

	.type	b,@object                       # @b
	.globl	b
	.p2align	2, 0x0
b:
	.long	0                               # 0x0
	.size	b, 4

	.section	.debug_abbrev,"",@progbits
	.byte	1                               # Abbreviation Code
	.byte	17                              # DW_TAG_compile_unit
	.byte	1                               # DW_CHILDREN_yes
	.byte	37                              # DW_AT_producer
	.byte	37                              # DW_FORM_strx1
	.byte	19                              # DW_AT_language
	.byte	5                               # DW_FORM_data2
	.byte	3                               # DW_AT_name
	.byte	37                              # DW_FORM_strx1
	.byte	114                             # DW_AT_str_offsets_base
	.byte	23                              # DW_FORM_sec_offset
	.byte	16                              # DW_AT_stmt_list
	.byte	23                              # DW_FORM_sec_offset
	.byte	27                              # DW_AT_comp_dir
	.byte	37                              # DW_FORM_strx1
	.byte	17                              # DW_AT_low_pc
	.byte	27                              # DW_FORM_addrx
	.byte	18                              # DW_AT_high_pc
	.byte	6                               # DW_FORM_data4
	.byte	115                             # DW_AT_addr_base
	.byte	23                              # DW_FORM_sec_offset
	.byte	116                             # DW_AT_rnglists_base
	.byte	23                              # DW_FORM_sec_offset
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	2                               # Abbreviation Code
	.byte	52                              # DW_TAG_variable
	.byte	0                               # DW_CHILDREN_no
	.byte	3                               # DW_AT_name
	.byte	37                              # DW_FORM_strx1
	.byte	73                              # DW_AT_type
	.byte	19                              # DW_FORM_ref4
	.byte	63                              # DW_AT_external
	.byte	25                              # DW_FORM_flag_present
	.byte	58                              # DW_AT_decl_file
	.byte	11                              # DW_FORM_data1
	.byte	59                              # DW_AT_decl_line
	.byte	11                              # DW_FORM_data1
	.byte	2                               # DW_AT_location
	.byte	24                              # DW_FORM_exprloc
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	3                               # Abbreviation Code
	.byte	36                              # DW_TAG_base_type
	.byte	0                               # DW_CHILDREN_no
	.byte	3                               # DW_AT_name
	.byte	37                              # DW_FORM_strx1
	.byte	62                              # DW_AT_encoding
	.byte	11                              # DW_FORM_data1
	.byte	11                              # DW_AT_byte_size
	.byte	11                              # DW_FORM_data1
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	4                               # Abbreviation Code
	.byte	46                              # DW_TAG_subprogram
	.byte	1                               # DW_CHILDREN_yes
	.byte	17                              # DW_AT_low_pc
	.byte	27                              # DW_FORM_addrx
	.byte	18                              # DW_AT_high_pc
	.byte	6                               # DW_FORM_data4
	.byte	64                              # DW_AT_frame_base
	.byte	24                              # DW_FORM_exprloc
	.byte	122                             # DW_AT_call_all_calls
	.byte	25                              # DW_FORM_flag_present
	.byte	110                             # DW_AT_linkage_name
	.byte	37                              # DW_FORM_strx1
	.byte	3                               # DW_AT_name
	.byte	37                              # DW_FORM_strx1
	.byte	58                              # DW_AT_decl_file
	.byte	11                              # DW_FORM_data1
	.byte	59                              # DW_AT_decl_line
	.byte	11                              # DW_FORM_data1
	.byte	63                              # DW_AT_external
	.byte	25                              # DW_FORM_flag_present
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	5                               # Abbreviation Code
	.byte	11                              # DW_TAG_lexical_block
	.byte	1                               # DW_CHILDREN_yes
	.byte	85                              # DW_AT_ranges
	.byte	35                              # DW_FORM_rnglistx
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	6                               # Abbreviation Code
	.byte	52                              # DW_TAG_variable
	.byte	0                               # DW_CHILDREN_no
	.byte	3                               # DW_AT_name
	.byte	37                              # DW_FORM_strx1
	.byte	58                              # DW_AT_decl_file
	.byte	11                              # DW_FORM_data1
	.byte	59                              # DW_AT_decl_line
	.byte	11                              # DW_FORM_data1
	.byte	73                              # DW_AT_type
	.byte	19                              # DW_FORM_ref4
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	0                               # EOM(3)
	.section	.debug_info,"",@progbits
.Lcu_begin0:
	.long	.Ldebug_info_end0-.Ldebug_info_start0 # Length of Unit
.Ldebug_info_start0:
	.short	5                               # DWARF version number
	.byte	1                               # DWARF Unit Type
	.byte	8                               # Address Size (in bytes)
	.long	.debug_abbrev                   # Offset Into Abbrev. Section
	.byte	1                               # Abbrev [1] 0xc:0x59 DW_TAG_compile_unit
	.byte	0                               # DW_AT_producer
	.short	33                              # DW_AT_language
	.byte	1                               # DW_AT_name
	.long	.Lstr_offsets_base0             # DW_AT_str_offsets_base
	.long	.Lline_table_start0             # DW_AT_stmt_list
	.byte	2                               # DW_AT_comp_dir
	.byte	3                               # DW_AT_low_pc
	.long	.Lfunc_end0-.Lfunc_begin0       # DW_AT_high_pc
	.long	.Laddr_table_base0              # DW_AT_addr_base
	.long	.Lrnglists_table_base0          # DW_AT_rnglists_base
	.byte	2                               # Abbrev [2] 0x27:0xb DW_TAG_variable
	.byte	3                               # DW_AT_name
	.long	50                              # DW_AT_type
                                        # DW_AT_external
	.byte	1                               # DW_AT_decl_file
	.byte	1                               # DW_AT_decl_line
	.byte	2                               # DW_AT_location
	.byte	161
	.byte	0
	.byte	3                               # Abbrev [3] 0x32:0x4 DW_TAG_base_type
	.byte	4                               # DW_AT_name
	.byte	5                               # DW_AT_encoding
	.byte	4                               # DW_AT_byte_size
	.byte	2                               # Abbrev [2] 0x36:0xb DW_TAG_variable
	.byte	5                               # DW_AT_name
	.long	50                              # DW_AT_type
                                        # DW_AT_external
	.byte	1                               # DW_AT_decl_file
	.byte	2                               # DW_AT_decl_line
	.byte	2                               # DW_AT_location
	.byte	161
	.byte	1
	.byte	2                               # Abbrev [2] 0x41:0xb DW_TAG_variable
	.byte	6                               # DW_AT_name
	.long	50                              # DW_AT_type
                                        # DW_AT_external
	.byte	1                               # DW_AT_decl_file
	.byte	2                               # DW_AT_decl_line
	.byte	2                               # DW_AT_location
	.byte	161
	.byte	2
	.byte	4                               # Abbrev [4] 0x4c:0x18 DW_TAG_subprogram
	.byte	3                               # DW_AT_low_pc
	.long	.Lfunc_end0-.Lfunc_begin0       # DW_AT_high_pc
	.byte	1                               # DW_AT_frame_base
	.byte	87
                                        # DW_AT_call_all_calls
	.byte	7                               # DW_AT_linkage_name
	.byte	8                               # DW_AT_name
	.byte	2                               # DW_AT_decl_file
	.byte	3                               # DW_AT_decl_line
                                        # DW_AT_external
	.byte	5                               # Abbrev [5] 0x58:0xb DW_TAG_lexical_block
	.byte	0                               # DW_AT_ranges
	.byte	6                               # Abbrev [6] 0x5a:0x8 DW_TAG_variable
	.byte	9                               # DW_AT_name
	.byte	2                               # DW_AT_decl_file
	.byte	7                               # DW_AT_decl_line
	.long	50                              # DW_AT_type
	.byte	0                               # End Of Children Mark
	.byte	0                               # End Of Children Mark
	.byte	0                               # End Of Children Mark
.Ldebug_info_end0:
	.section	.debug_rnglists,"",@progbits
	.long	.Ldebug_list_header_end0-.Ldebug_list_header_start0 # Length
.Ldebug_list_header_start0:
	.short	5                               # Version
	.byte	8                               # Address size
	.byte	0                               # Segment selector size
	.long	1                               # Offset entry count
.Lrnglists_table_base0:
	.long	.Ldebug_ranges0-.Lrnglists_table_base0
.Ldebug_ranges0:
	.byte	4                               # DW_RLE_offset_pair
	.uleb128 .Ltmp0-.Lfunc_begin0           #   starting offset
	.uleb128 .Ltmp1-.Lfunc_begin0           #   ending offset
	.byte	4                               # DW_RLE_offset_pair
	.uleb128 .Ltmp2-.Lfunc_begin0           #   starting offset
	.uleb128 .Ltmp3-.Lfunc_begin0           #   ending offset
	.byte	0                               # DW_RLE_end_of_list
.Ldebug_list_header_end0:
	.section	.debug_str_offsets,"",@progbits
	.long	44                              # Length of String Offsets Set
	.short	5
	.short	0
.Lstr_offsets_base0:
	.section	.debug_str,"MS",@progbits,1
.Linfo_string0:
	.asciz	"clang version 19.0.0git (https://github.com/llvm/llvm-project.git c379a5b69e7e1917589a1d0b6993d74e6697490e)" # string offset=0
.Linfo_string1:
	.asciz	"/home/zy/OptChecker/code/licm2cp/example/dst/test.cpp" # string offset=108
.Linfo_string2:
	.asciz	"/home/zy/OptChecker/code/licm2cp" # string offset=162
.Linfo_string3:
	.asciz	"m"                             # string offset=195
.Linfo_string4:
	.asciz	"int"                           # string offset=197
.Linfo_string5:
	.asciz	"a"                             # string offset=201
.Linfo_string6:
	.asciz	"b"                             # string offset=203
.Linfo_string7:
	.asciz	"_Z4testv"                      # string offset=205
.Linfo_string8:
	.asciz	"test"                          # string offset=214
.Linfo_string9:
	.asciz	"c"                             # string offset=219
	.section	.debug_str_offsets,"",@progbits
	.long	.Linfo_string0
	.long	.Linfo_string1
	.long	.Linfo_string2
	.long	.Linfo_string3
	.long	.Linfo_string4
	.long	.Linfo_string5
	.long	.Linfo_string6
	.long	.Linfo_string7
	.long	.Linfo_string8
	.long	.Linfo_string9
	.section	.debug_addr,"",@progbits
	.long	.Ldebug_addr_end0-.Ldebug_addr_start0 # Length of contribution
.Ldebug_addr_start0:
	.short	5                               # DWARF version number
	.byte	8                               # Address size
	.byte	0                               # Segment selector size
.Laddr_table_base0:
	.quad	m
	.quad	a
	.quad	b
	.quad	.Lfunc_begin0
.Ldebug_addr_end0:
	.ident	"clang version 19.0.0git (https://github.com/llvm/llvm-project.git c379a5b69e7e1917589a1d0b6993d74e6697490e)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.section	.debug_line,"",@progbits
.Lline_table_start0:
