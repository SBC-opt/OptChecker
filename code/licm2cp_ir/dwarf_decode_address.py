#-------------------------------------------------------------------------------
# elftools example: dwarf_decode_address.py
#
# Decode an address in an ELF file to find out which function it belongs to
# and from which filename/line it comes in the original source file.
#
# Eli Bendersky (eliben@gmail.com)
# This code is in the public domain
#-------------------------------------------------------------------------------
from __future__ import print_function
from __future__ import absolute_import
from __future__ import print_function
import sys

from barf.arch import ARCH_ARM_MODE_ARM
from barf.arch import ARCH_ARM_MODE_THUMB
from barf.barf import BARF

# If pyelftools is not installed, the example can also run from the root or
# examples/ dir of the source distribution.
sys.path[0:0] = ['.', '..']

from elftools.common.utils import bytes2str
from elftools.dwarf.descriptions import describe_form_class
from elftools.elf.elffile import ELFFile
from capstone import *


def process_file(filename, address, outfilename):
    #print('Processing file:', filename)
    with open(filename, 'rb') as f:
        elffile = ELFFile(f)

        if not elffile.has_dwarf_info():
            print('  file has no DWARF info')
            return

        # get_dwarf_info returns a DWARFInfo context object, which is the
        # starting point for all DWARF-based processing in pyelftools.
        dwarfinfo = elffile.get_dwarf_info()

        funcname = decode_funcname(dwarfinfo, address)
        file, line, column = decode_file_line(dwarfinfo, address)

        #print('Function:', bytes2str(funcname))
        #print('File:', bytes2str(file))
        #print('Line:', line)
        #print(line, column)
        res = ' '+str(line)+' '+str(column)+'\n'
        with open(outfilename,'a') as outf:   # .txt可以不自己新建,代码会自动新建
            
            outf.write(res)     # 写入


def decode_funcname(dwarfinfo, address):
    # Go over all DIEs in the DWARF information, looking for a subprogram
    # entry with an address range that includes the given address. Note that
    # this simplifies things by disregarding subprograms that may have
    # split address ranges.
    for CU in dwarfinfo.iter_CUs():
        for DIE in CU.iter_DIEs():
            try:
                if DIE.tag == 'DW_TAG_subprogram':
                    lowpc = DIE.attributes['DW_AT_low_pc'].value

                    # DWARF v4 in section 2.17 describes how to interpret the
                    # DW_AT_high_pc attribute based on the class of its form.
                    # For class 'address' it's taken as an absolute address
                    # (similarly to DW_AT_low_pc); for class 'constant', it's
                    # an offset from DW_AT_low_pc.
                    highpc_attr = DIE.attributes['DW_AT_high_pc']
                    highpc_attr_class = describe_form_class(highpc_attr.form)
                    if highpc_attr_class == 'address':
                        highpc = highpc_attr.value
                    elif highpc_attr_class == 'constant':
                        highpc = lowpc + highpc_attr.value
                    else:
                        print('Error: invalid DW_AT_high_pc class:',
                              highpc_attr_class)
                        continue

                    if lowpc <= address < highpc:
                        return DIE.attributes['DW_AT_name'].value
            except KeyError:
                continue
    return None


def decode_file_line(dwarfinfo, address):
    # Go over all the line programs in the DWARF information, looking for
    # one that describes the given address.
    for CU in dwarfinfo.iter_CUs():
        # First, look at line programs to find the file/line for the address
        lineprog = dwarfinfo.line_program_for_CU(CU)
        delta = 1 if lineprog.header.version < 5 else 0
        prevstate = None
        for entry in lineprog.get_entries():
            # We're interested in those entries where a new state is assigned
            if entry.state is None:
                continue
            # Looking for a range of addresses in two consecutive states that
            # contain the required address.
            if prevstate and prevstate.address <= address < entry.state.address:
                filename = lineprog['file_entry'][prevstate.file - delta].name
                line = prevstate.line
                column = prevstate.column
                #print(prevstate)
                return filename, line, column
            if entry.state.end_sequence:
                # For the state with `end_sequence`, `address` means the address
                # of the first byte after the target machine instruction
                # sequence and other information is meaningless. We clear
                # prevstate so that it's not used in the next iteration. Address
                # info is used in the above comparison to see if we need to use
                # the line information for the prevstate.
                prevstate = None
            else:
                prevstate = entry.state
    return None, None, None


if __name__ == '__main__':

    filename = sys.argv[1]
    barf = BARF(filename)

    #
    # Recover CFG
    #
    print("[+] Recovering program CFG...")

    cfg = barf.recover_cfg(start=0x0, end=0xa1)

    loopaddress = []
    for bb_src in cfg.basic_blocks:
        for bb_dst_addr, branch_type in bb_src.branches:
            #print(bb_src.address)
            #print(branch_type)
            #print(bb_dst_addr)
            if bb_src.address==bb_dst_addr:
                loopaddress.append((bb_src.address, bb_src.end_address))
                print(bb_src.address, bb_src.end_address)

    
    with open(sys.argv[1], 'rb') as f:
        elf = ELFFile(f)
        code = elf.get_section_by_name('.text')
        ops = code.data()
        addr = code['sh_addr']
        md = Cs(CS_ARCH_X86, CS_MODE_64)
        for i in md.disasm(ops, addr):
            addr = int(f'0x{i.address:x}', 0)
            for first, second in loopaddress:
                if (addr>=first and addr <=second):
                    with open(sys.argv[2],'a') as outf:   # .txt可以不自己新建,代码会自动新建
                        res = f'0x{i.address:x}:\t{i.mnemonic}\t{i.op_str}'
                        outf.write(res)     # 写入
                    #print(f'0x{i.address:x}:\t{i.mnemonic}\t{i.op_str}')
                    process_file(sys.argv[1], addr, sys.argv[2])
            