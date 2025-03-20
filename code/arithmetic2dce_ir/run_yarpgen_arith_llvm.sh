#!/bin/sh
testname=arithmetic2dce_llvm
testDir=/root/OptChecker_asm/$testname/test
yarpgenDir=/root/OptChecker/yarpgen/build_arithmetic/test_arithmetic_llvm
outFile=$testDir/result.txt

cd $testDir/src
rm -f *
rm $outFile
while [ ! -s "$outFile" ]
    do
        cd $yarpgenDir
        ../yarpgen_arithmetic_llvm -o .
        #cp ./func.cpp $testDir/src/test.cpp
        #cp ./init.h $testDir/src/init.h
        cp ./func.cpp $testDir/test.cpp
        cp ./init.h $testDir/init.h
        #mkdir $testDir/src
        #mkdir $testDir/dst

        cd /root/OptChecker_asm/$testname
        bash run_simple.sh
    done