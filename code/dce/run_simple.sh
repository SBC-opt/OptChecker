#!/bin/sh

testDir=$1
dwarfpy=$2
getResultpy=$3
compiler=$4

#Todo: Extend to multiple functions
#funcName=$

if [ "$compiler" = "gcc" ]; then
    rm $testDir/gcc_result.txt
else
    rm $testDir/clang_result.txt
fi

#code transformation
rm -f $testDir/dst/*
rm -f $testDir/src/*
cp $testDir/test.cpp $testDir/dst/test.cpp
cp $testDir/init.h $testDir/dst/init.h
cp $testDir/test.cpp $testDir/src/test.cpp
cp $testDir/init.h $testDir/src/init.h

echo "Insertion for dst code...."
clang-tidy -checks=-*,misc-dce -fix $testDir/dst/test.cpp  --

#The compiler performs optimizations
if [ "$compiler" = "gcc" ]; then
    outFile=$testDir/gcc_result.txt
    echo "optimize code with gcc..."
    gcc -o $testDir/dst/test.o -g -O3 -fwrapv -fno-tree-vectorize -c $testDir/dst/test.cpp
    gcc -o $testDir/src/test.o -g -O3 -fwrapv -fno-tree-vectorize -c $testDir/src/test.cpp
else
    outFile=$testDir/clang_result.txt
    echo "optimize code with clang..."
    echo "int data=100;" >> $testDir/dst/init.h
    echo "int data=100;" >> $testDir/src/init.h
    clang -o $testDir/dst/test.o -g -O3 -fwrapv -fno-tree-vectorize -c $testDir/dst/test.cpp
    clang -o $testDir/src/test.o -g -O3 -fwrapv -fno-tree-vectorize -c $testDir/src/test.cpp
fi

if [ ! -s "$testDir/src/test.o" ] || [ ! -s "$testDir/dst/test.o" ]; then
    echo -e "\e[31m     Compiler Error!  Skip...\e[0m"
else
    #check dst&&src
    echo "check notOptimized..."
    python3 $dwarfpy $testDir/dst/test.o $testDir/dst/notOptimized.txt
    python3 $dwarfpy $testDir/src/test.o $testDir/src/notOptimized.txt

    echo "get result..."
    python3 $getResultpy $testDir $outFile
fi