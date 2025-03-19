#!/bin/sh
yarpgenBin=$1
yarpgenDir=$2
testDir=$3
dwarfpy=$4
getResultpy=$5

outFile1=$testDir/gcc_result.txt
outFile2=$testDir/clang_result.txt

rm $outFile1
rm $outFile2

while [ ! -s "$outFile1" ] && [ ! -s "$outFile2" ]
    do
        $yarpgenBin -o $yarpgenDir

        cp $yarpgenDir/func.cpp $testDir/test.cpp
        cp $yarpgenDir/init.h $testDir/init.h

        rm $outFile1
        rm $outFile2
        bash run_simple.sh $testDir $dwarfpy $getResultpy gcc
        bash run_simple.sh $testDir $dwarfpy $getResultpy clang
    done