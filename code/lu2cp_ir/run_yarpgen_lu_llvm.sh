#!/bin/sh
testname=loopUnswitch2cp_llvm
testDir=/root/OptChecker_asm/$testname/test
yarpgenDir=/root/OptChecker/yarpgen/build/test_lu_llvm

cd $testDir/src
rm -f *
file="$testDir/src/result.txt"
while [ ! -s "$file" ]
    do
        cd $yarpgenDir
        ../yarpgen_lu_llvm -o .

        checkfilepath="./func.cpp"
        code_snippet=$(<"$checkfilepath")
        # Extract lines with 'for' and 'if'
        for_line=$(echo "$code_snippet" | grep -o "for.*")
        if_line=$(echo "$code_snippet" | grep -o "if.*")

        # Extract variable names from the lines
        for_vars=$(echo "$for_line" | grep -o "var_[0-9]*" | sort | uniq)
        if_vars=$(echo "$if_line" | grep -o "var_[0-9]*" | sort | uniq)

        # Compare variable names in both lines
        flag=1
        for var in $for_vars; do
            if [[ $if_vars == *"$var"* ]]; then
                echo "Match found: $var"
                flag=0
            fi
        done

        if [[ $flag == 0 ]]; then
            #cat $checkfilepath
            echo "bad testcase"
            continue
        fi
        cp ./func.cpp $testDir/src/test.cpp
        cp ./init.h $testDir/src/init.h

        cd /root/OptChecker_asm/$testname
        bash run_simple.sh
    done