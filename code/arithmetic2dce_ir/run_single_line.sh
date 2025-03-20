#!/bin/sh
testname=arithmetic2dce_llvm
testDir=/root/OptChecker_asm/$testname/test
llvmBinDir=/root/OptChecker/llvm-project-16.0.0.src/build/bin
dwarfpy=/root/OptChecker_asm/$testname/test/dwarf_decode_address.py
outFile=$testDir/result.txt

Line=$1

#cat $testDir/src/test.cpp
#cat $testDir/dst/test.cpp

#优化dst和src
echo "clang...."
cd $testDir/dst
$llvmBinDir/clang++ -g -O3 -fwrapv -c ./test.cpp
$llvmBinDir/clang++ -o test.s -S -O3 -fwrapv test.cpp
cd $testDir/src
$llvmBinDir/clang++ -g -O3 -fwrapv -c ./test.cpp

#cat $testDir/dst/test.s

FIND_FILE=$testDir/dst/test.s
FIND_STR="X"
if [ `grep -c "X" $testDir/dst/test.s` -eq '0' ];then
    echo "DST file is optimized! "
    echo -e "\e[34m Processing: Line:$Line \e[0m"
    #src line number
    echo "[SRC] Check the number of binary instructions corresponding to line $Line code...."
    python3.8 $dwarfpy $testDir/src/test.o $testDir/src/lineNumber.txt $Line
    #dst line number
    echo "[DST] Check the number of binary instructions corresponding to line $Line code...."
    python3.8 $dwarfpy $testDir/dst/test.o $testDir/dst/lineNumber.txt $Line

    #file1=$testDir/src/lineNumber.txt
    n1=$(cat $testDir/src/lineNumber.txt)
    #file2=$testDir/dst/lineNumber.txt
    n2=$(cat $testDir/dst/lineNumber.txt)
    #diff $file1 $file2 > /dev/null
    #if [ $? == 0 ]; then
    if [ $n1 -gt $(($n2 + 1)) ] && [ $n2 -ne 0 ]; then
        #echo -e "\e[31m Both file's lineNumber are same \e[0m"
    #else
        echo -e "\e[32m May have missed optimizations! \e[0m"
        echo -e "\e[32m Variable line: $2    Expression line: $1 \e[0m"
        echo "Variable line: $2    Expression line: $1" >> $outFile
        echo "SRC line: $n1    DST line: $n2" >> $outFile
    fi
fi