#!/bin/sh
testDir=$1

outFile=$testDir/result.txt
rm $outFile

clangf=0
echo "optimize code with clang..."
#clang -o $testDir/clang/test_vect.s -S -O3 -mllvm -slp-threshold=-1 $testDir/test.cpp
/home/zhangyi/work/OptChecker/gcc-releases-gcc-13.2.0/bin/bin/gcc -o $testDir/clang/test_vect.s -S -O3 -fno-vect-cost-model $testDir/test.cpp
#/home/zhangyi/work/OptChecker/gcc-releases-gcc-12.3.0/bin/bin/gcc -o $testDir/clang/test_vect.s -S -O3 -fno-vect-cost-model $testDir/test.cpp
#/home/zhangyi/work/OptChecker/gcc-releases-gcc-14.2.0/bin/bin/gcc -o $testDir/clang/test_vect.s -S -O3 -fno-vect-cost-model $testDir/test.cpp
# clang -o $testDir/clang/test_nvect.s -S -O3 -fno-slp-vectorize -fno-vectorize $testDir/test.cpp
# if diff "$testDir/clang/test_vect.s" "$testDir/clang/test_nvect.s" > /dev/null; then
#     echo "clang no vectorization"
#     clangf=0
# else
#     echo "clang vectorization"
#     clangf=1
# fi
if grep -q "xmm" "$testDir/clang/test_vect.s"; then
    echo "clang vectorization"
    clangf=1
else
    echo "clang no vectorization"
    clangf=0
fi


gccf=0
echo "optimize code with gcc..."
#/home/zhangyi/work/OptChecker/llvm-project-llvmorg-16.0.0/build/bin/clang -o $testDir/gcc/test_vect.s -S -O3 -mllvm -slp-threshold=-1 $testDir/test.cpp
gcc -o $testDir/gcc/test_vect.s -S -O3 -fno-vect-cost-model $testDir/test.cpp
# gcc -o $testDir/gcc/test_nvect.s -S -O3 -fno-tree-vectorize $testDir/test.cpp
# if diff "$testDir/gcc/test_vect.s" "$testDir/gcc/test_nvect.s" > /dev/null; then
#     echo "gcc no vectorization"
#     gccf=0
# else
#     echo "gcc vectorization"
#     gccf=1
# fi
if grep -q "xmm" "$testDir/gcc/test_vect.s"; then
    echo "gcc vectorization"
    gccf=1
else
    echo "gcc no vectorization"
    gccf=0
fi

if [ "$clangf" -eq "$gccf" ]; then
    echo "consistency"
else
    if [ "$clangf" -eq 0 ]; then
        echo -e "\e[34m    clang missed!  \e[0m"
        #echo "clang missed!" >> $outFile
    else
        echo -e "\e[34m    gcc missed!  \e[0m"
        echo "gcc missed!" >> $outFile
    fi
fi


#compile with -fno-vect-cost-model


#check vectorize or not
#the same code with -fno-tree-vectorize and without this option


#check register allocation
#with -fno-tree-vectorize
