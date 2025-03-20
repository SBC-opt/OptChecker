#!/bin/sh
testname=loopUnswitch2cp_llvm
testDir=/root/OptChecker_asm/$testname/test
llvmBinDir=/root/OptChecker/llvm-project-16.0.0.src/build/bin
dwarfpy=/root/OptChecker_asm/$testname/test/dwarf_decode_address.py

cd $testDir/dst
rm -f *

cd $testDir/src
cp ./test.cpp ../dst/test.cpp
cp ./init.h ../dst/init.h
rm -f *
cp ../dst/test.cpp ./test.cpp
cp ../dst/init.h ./init.h

echo "int data=100;" >>  ../src/init.h
echo "int data=100;" >>  ../dst/init.h

cd $llvmBinDir
#生成dst/test
echo "Insert Code...."
./clang-tidy -checks=-*,misc-LoopUnswitch2cpinsert -fix $testDir/dst/test.cpp  --

#优化dst和src
echo "clang...."
cd $testDir/dst
$llvmBinDir/clang -g -O3 -fwrapv -fno-tree-vectorize -c ./test.cpp
cd $testDir/src
$llvmBinDir/clang -g -O3 -fwrapv -fno-tree-vectorize -c ./test.cpp

#check dst&&src
echo "check notOptimized...."
python3.8 $dwarfpy $testDir/dst/test.o $testDir/dst/notOptimized.txt
python3.8 $dwarfpy $testDir/src/test.o $testDir/src/notOptimized.txt

echo "getResult...."
cd /root/OptChecker_asm/$testname
python getResult.py