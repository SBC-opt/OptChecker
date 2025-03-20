#!/bin/sh
testname=loopUnswitch2cp_llvm
reduceDir=/root/OptChecker_asm/$testname/reduce
llvmBinDir=/root/OptChecker/llvm-project-16.0.0.src/build/bin
dwarfpy=/root/OptChecker_asm/$testname/test/dwarf_decode_address.py

echo "========================================================================"
cat ./test.cpp
echo "========================================================================"
cp ./test.cpp $reduceDir/src/test.cpp
cp ./init.h $reduceDir/src/init.h

#cd $reduceDir/dst
rm -f $reduceDir/dst/*

#cd $reduceDir/src
cp $reduceDir/src/./test.cpp $reduceDir/src/../dst/test.cpp
cp $reduceDir/src/./init.h $reduceDir/src/../dst/init.h
rm -f $reduceDir/src/*
cp $reduceDir/src/../dst/test.cpp $reduceDir/src/./test.cpp
cp $reduceDir/src/../dst/init.h $reduceDir/src/./init.h

#cd $llvmBinDir
#生成dst/test
echo "Insert Code...."
$llvmBinDir/./clang-tidy -checks=-*,misc-LoopUnswitch2cpinsert -fix $reduceDir/dst/test.cpp  --

#优化dst和src
echo "clang...."
#cd $reduceDir/dst
$llvmBinDir/clang -g -o $reduceDir/dst/test.o -O3 -fwrapv -fno-tree-vectorize -c $reduceDir/dst/./test.cpp
#cd $reduceDir/src
$llvmBinDir/clang -g -o $reduceDir/src/test.o -O3 -fwrapv -fno-tree-vectorize -c $reduceDir/src/./test.cpp

#check dst&&src
echo "check notOptimized...."
python3.8 $dwarfpy $reduceDir/dst/test.o $reduceDir/dst/notOptimized.txt
python3.8 $dwarfpy $reduceDir/src/test.o $reduceDir/src/notOptimized.txt

echo "getResult...."
#cd /root/OptChecker_asm/$testname
python /root/OptChecker_asm/$testname/reduce/getResult.py

grep " " $reduceDir/src/result.txt