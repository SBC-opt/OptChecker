#!/bin/sh
yarpgenBin=$1
yarpgenDir=$2
testDir=$3

outFile1=$testDir/gcc_result.txt
outFile2=$testDir/clang_result.txt

rm $outFile1
rm $outFile2
while [ ! -s "$outFile1" ] && [ ! -s "$outFile2" ]
    do
        $yarpgenBin -o $yarpgenDir
        cp $yarpgenDir/func.cpp $testDir/test.cpp
        cp $yarpgenDir/init.h $testDir/init.h

        #Todo: Extend to multiple functions
        StartLine=$(grep -n "test(" "$testDir/test.cpp" | cut -d: -f1)
        EndLine=$(wc -l < "$testDir/test.cpp")
        bash run_simple.sh $testDir $StartLine $EndLine
    done