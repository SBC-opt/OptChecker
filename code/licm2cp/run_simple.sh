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
clang-tidy -checks=-*,misc-licm2cp -fix $testDir/dst/test.cpp  --
cp $testDir/dst/test.cpp $testDir/dst/test_origin.cpp

if [ "$compiler" = "clang" ]; then
    echo "int data=100;" >> $testDir/src/init.h
fi

num_mark=$(wc -l < "$testDir/dst/Marks.txt")
((num_mark--))
echo num_mark:$num_mark

if [ "$compiler" = "gcc" ]; then
    gcc -o $testDir/src/test.o -g -O3 -fwrapv -fno-tree-vectorize -c $testDir/src/test.cpp
else
    clang -o $testDir/src/test.o -g -O3 -fwrapv -fno-tree-vectorize -c $testDir/src/test.cpp
fi

#check src
echo "check notOptimized...."
python3 $dwarfpy $testDir/src/test.o $testDir/src/notOptimized.txt

for (( i=0; i<=num_mark; i++ ))
    do
        cp $testDir/dst/test_origin.cpp $testDir/dst/test.cpp
        exclude_mark="myMark$i"
        echo $exclude_mark
        sed -i -E "/^([[:space:]]*)$exclude_mark/! s/^([[:space:]]*)(myMark)([0-9]+)/\/\/\1\2\3/" "$testDir/dst/test.cpp"

        #The compiler performs optimizations
        if [ "$compiler" = "gcc" ]; then
            outFile=$testDir/gcc_result.txt
            echo "optimize code with gcc..."
            gcc -o $testDir/dst/test.s -S -g -O3 -fwrapv -fno-tree-vectorize -c $testDir/dst/test.cpp
        else
            outFile=$testDir/clang_result.txt
            echo "optimize code with clang..."
            clang -o $testDir/dst/test.s -S -g -O3 -fwrapv -fno-tree-vectorize -c $testDir/dst/test.cpp
        fi

        echo "get result..."
        python3 $getResultpy $testDir $outFile

    done
