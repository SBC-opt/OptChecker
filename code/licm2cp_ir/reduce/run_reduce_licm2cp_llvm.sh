#!/bin/sh
testname=licm2cp_llvm
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
echo "extern int myMark=0;" >>  $reduceDir/src/../dst/init.h

#cd $llvmBinDir
#生成dst/test
echo "Insert Code...."
$llvmBinDir/./clang-tidy -checks=-*,misc-licm2cpInsert -fix $reduceDir/dst/test.cpp  --

#优化dst和src
echo "clang...."
#cd $reduceDir/dst
$llvmBinDir/clang -g -o $reduceDir/dst/test.o -O3 -c -fwrapv -fno-tree-vectorize $reduceDir/dst/./test.cpp
$llvmBinDir/clang -g -o $reduceDir/dst/test.s -S -O3 -fwrapv -fno-tree-vectorize $reduceDir/dst/test.cpp
#cd $reduceDir/src
$llvmBinDir/clang -g -o $reduceDir/src/test.o -O3 -c -fwrapv -fno-tree-vectorize $reduceDir/src/./test.cpp

#check src
echo "check notOptimized...."
python3.8 $dwarfpy $reduceDir/src/test.o $reduceDir/src/notOptimized.txt

echo "getResult...."
#cd /root/OptChecker_asm/$testname
python /root/OptChecker_asm/$testname/reduce/getResult.py

grep " " $reduceDir/src/result.txt