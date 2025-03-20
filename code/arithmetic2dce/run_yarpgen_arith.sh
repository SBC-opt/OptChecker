#!/bin/sh
testname=arithmetic2dce
testDir=/root/OptChecker_asm/$testname/test
yarpgenDir=/root/OptChecker/yarpgen/build_arithmetic/test_arithmetic
outFile=$testDir/result.txt

cd $testDir/src
rm -f *
rm $outFile
while [ ! -s "$outFile" ]
    do
        cd $yarpgenDir
        ../yarpgen_arithmetic -o .
        #cp ./func.cpp $testDir/src/test.cpp
        #cp ./init.h $testDir/src/init.h
        cp ./func.cpp $testDir/test.cpp
        cp ./init.h $testDir/init.h
        #mkdir $testDir/src
        #mkdir $testDir/dst

        cd /root/OptChecker_asm/$testname
        bash run_simple.sh
    done