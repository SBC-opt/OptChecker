#!/bin/sh
compiler=$1
testDir=$2

variable_line=$3
expression_line=$4

outFile=$testDir/result.txt

#The compiler performs optimizations
if [ "$compiler" = "gcc" ]; then
    outFile=$testDir/gcc_result.txt
    #echo "optimize code with gcc..."
    #gcc -o $testDir/dst/test.s -S -O3 $testDir/dst/test.cpp
    #gcc -o $testDir/src/test.s -S -O3 $testDir/src/test.cpp
    echo "optimize code with clang-16.0.0..."
    /home/zy/OptChecker/llvm-project-llvmorg-16.0.0/build/bin/clang -o $testDir/dst/test.s -S -O3 $testDir/dst/test.cpp
    /home/zy/OptChecker/llvm-project-llvmorg-16.0.0/build/bin/clang -o $testDir/src/test.s -S -O3 $testDir/src/test.cpp
else
    outFile=$testDir/clang_result.txt
    echo "optimize code with clang-trunk..."
    clang -o $testDir/dst/test.s -S -O3 $testDir/dst/test.cpp
    clang -o $testDir/src/test.s -S -O3 $testDir/src/test.cpp
    ###gcc-13.2
    #/home/zy/OptChecker/gcc-releases-gcc-13.2.0/build/bin/usr/local/bin/gcc -o $testDir/dst/test.s -S -O3 $testDir/dst/test.cpp
    #/home/zy/OptChecker/gcc-releases-gcc-13.2.0/build/bin/usr/local/bin/gcc -o $testDir/src/test.s -S -O3 $testDir/src/test.cpp
fi

if [ ! -s "$testDir/src/test.s" ] || [ ! -s "$testDir/dst/test.s" ]; then
    echo -e "\e[31m     Compiler Error!  Skip...\e[0m"
else

    dst_optimized=0
    src_optimized=0

    #Opt_2 is applied if 'Optimized_Mark2' is eliminated
    if [ `grep -c "Optimized_Mark2(%rip)" $testDir/dst/test.s` -eq '0' ];then
        echo -e "\e[34m     DST file is optimized!  \e[0m"
        dst_optimized=1
    else
        echo -e "     DST file is not optimized"
    fi

    #Opt_1 is applied if 'Optimized_Mark1' is eliminated
    if [ `grep -c "Optimized_Mark1(%rip)" $testDir/src/test.s` -eq '0' ];then
        echo -e "\e[34m     SRC file is optimized!  \e[0m"
        src_optimized=1
    else
        echo -e "     SRC file is not optimized"
    fi

    #If it is inconsistent, the compiler may have made a mistake.
    if [ $dst_optimized -ne $src_optimized ]; then
        echo -e "\e[32m Inconsistence is detected, dst_optimized $dst_optimized, src_optimized $src_optimized\e[0m"
        echo -e "\e[32m Variable line: $variable_line    Expression line: $expression_line \e[0m"
        echo "Inconsistence is detected, dst_optimized $dst_optimized, src_optimized $src_optimized" >> $outFile
        echo "Variable line: $variable_line    Expression line: $expression_line" >> $outFile
        echo "src after transformed:=============================" >> $outFile
        cat $testDir/src/init.h >> $outFile
        echo " " >> $outFile
        cat $testDir/src/test.cpp >> $outFile
        echo " " >> $outFile
        echo "dst after transformed:=============================" >> $outFile
        cat $testDir/dst/init.h >> $outFile
        echo " " >> $outFile
        cat $testDir/dst/test.cpp >> $outFile
        echo " " >> $outFile
    fi
fi