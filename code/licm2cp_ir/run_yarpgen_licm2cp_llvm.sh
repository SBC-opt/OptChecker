#!/bin/sh
testname=licm2cp_llvm
testDir=/root/OptChecker_asm/$testname/test
yarpgenDir=/root/OptChecker/yarpgen/build/test_licm_llvm

cd $testDir/src
rm -f *
file="$testDir/src/result.txt"
while [ ! -s "$file" ]
    do
        cd $yarpgenDir
        ../yarpgen_licm_llvm -o .
        cp ./func.cpp $testDir/src/test.cpp
        cp ./init.h $testDir/src/init.h

        cd /root/OptChecker_asm/$testname
        bash run_simple.sh
    done