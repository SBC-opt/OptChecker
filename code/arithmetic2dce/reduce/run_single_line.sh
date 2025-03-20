#!/bin/sh
testname=arithmetic2dce
reduceDir=/root/OptChecker_asm/$testname/reduce
llvmBinDir=/root/OptChecker/llvm-project-16.0.0.src/build/bin
dwarfpy=/root/OptChecker_asm/$testname/test/dwarf_decode_address.py
outFile=$reduceDir/result.txt

Line=$1

#优化dst和src
echo "gcc...."
#cd $reduceDir/dst
gcc -g -O3 -fwrapv -c $reduceDir/dst/./test.cpp -o $reduceDir/dst/test.o
gcc -o $reduceDir/dst/test.s -S -O3 -fwrapv $reduceDir/dst/test.cpp
#cd $reduceDir/src
gcc -g -O3 -fwrapv -c $reduceDir/src/./test.cpp -o $reduceDir/src/test.o

FIND_FILE=$reduceDir/dst/test.s
FIND_STR="X"
if [ `grep -c "X" $reduceDir/dst/test.s` -eq '0' ];then
    echo "DST file is optimized! "
    echo -e "\e[34m Processing: Line:$Line \e[0m"
    #src line number
    echo "[SRC] Check the number of binary instructions corresponding to line $Line code...."
    python3.8 $dwarfpy $reduceDir/src/test.o $reduceDir/src/lineNumber.txt $Line
    #dst line number
    echo "[DST] Check the number of binary instructions corresponding to line $Line code...."
    python3.8 $dwarfpy $reduceDir/dst/test.o $reduceDir/dst/lineNumber.txt $Line

    #file1=$reduceDir/src/lineNumber.txt
    n1=$(cat $reduceDir/src/lineNumber.txt)
    #file2=$reduceDir/dst/lineNumber.txt
    n2=$(cat $reduceDir/dst/lineNumber.txt)
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