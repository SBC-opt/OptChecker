#! /usr/bin/env python

from __future__ import absolute_import
from __future__ import print_function

from barf.arch import ARCH_ARM_MODE_ARM
from barf.arch import ARCH_ARM_MODE_THUMB
from barf.barf import BARF

if __name__ == "__main__":
    # x86
    # ======================================================================= #
    #
    # Open file
    #
    filename = "/root/OptChecker_gcc/licm2cp/test/src/test.o"
    barf = BARF(filename)

    #
    # Recover CFG
    #
    print("[+] Recovering program CFG...")

    cfg = barf.recover_cfg(start=0x0, end=0xa1)

    print(cfg.all_simple_bb_paths(0x0, 0xa1))
    for bb_src in cfg.basic_blocks:
        for bb_dst_addr, branch_type in bb_src.branches:
            #print(bb_src.address)
            #print(branch_type)
            #print(bb_dst_addr)
            if bb_src.address==bb_dst_addr:
                print(bb_src.address, bb_src.end_address)

    