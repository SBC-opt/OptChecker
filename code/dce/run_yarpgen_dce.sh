#!/bin/sh
yarpgenBin=$1
yarpgenDir=$2
testDir=$3
dwarfpy=$4
getResultpy=$5

outFile1=$testDir/gcc_result.txt
outFile2=$testDir/clang_result.txt

rm $outFile1
rm $outFile2

while [ ! -s "$outFile1" ] && [ ! -s "$outFile2" ]
    do
        $yarpgenBin -o $yarpgenDir

        checkfilepath="$yarpgenDir/func.cpp"
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

        cp $yarpgenDir/func.cpp $testDir/test.cpp
        cp $yarpgenDir/init.h $testDir/init.h

        rm $outFile1
        rm $outFile2
        bash run_simple.sh $testDir $dwarfpy $getResultpy gcc
        bash run_simple.sh $testDir $dwarfpy $getResultpy clang
    done