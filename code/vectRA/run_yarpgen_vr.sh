#!/bin/sh
yarpgenBin=$1
yarpgenDir=$2
testDir=$3

outFile=$testDir/result.txt

rm $outFile
while [ ! -s "$outFile" ]
    do
        $yarpgenBin -o $yarpgenDir
        

        if grep -q "vectorizable" "$yarpgenDir/func.cpp"; then
            cp $yarpgenDir/func.cpp $testDir/test.cpp
            cp $yarpgenDir/init.h $testDir/init.h
            
            bash run_simple.sh $testDir
        fi

    done