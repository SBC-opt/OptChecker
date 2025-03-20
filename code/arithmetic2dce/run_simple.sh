#!/bin/sh
testname=arithmetic2dce
testDir=/root/OptChecker_asm/$testname/test
llvmBinDir=/root/OptChecker/llvm-project-16.0.0.src/build/bin
dwarfpy=/root/OptChecker_asm/$testname/test/dwarf_decode_address.py
outFile=$testDir/result.txt

rm $outFile
#StartLine=$(grep -n "test" "$testDir/src/test.cpp" | cut -d: -f1)
#EndLine=$(wc -l < "$testDir/src/test.cpp")
StartLine=$(grep -n "test" "$testDir/test.cpp" | cut -d: -f1)
EndLine=$(wc -l < "$testDir/test.cpp")
echo FuncLines:$StartLine,$EndLine

for (( Line1=$((StartLine + 1)); Line1<=EndLine; Line1++ ))
do
    echo -e "\e[35m  Line1: $Line1 \e[0m"
    cd $testDir/dst
    rm -f *

    cd $testDir/src
    #cp ./test.cpp ../dst/test.cpp
    #cp ./init.h ../dst/init.h
    rm -f *
    cd $testDir
    cp ./test.cpp ./dst/test.cpp
    cp ./init.h ./dst/init.h
    cp ./test.cpp ./src/test.cpp
    cp ./init.h ./src/init.h
    #cp ../dst/test.cpp ./test.cpp
    #cp ../dst/init.h ./init.h
    #echo "extern int X;" >>  ../dst/init.h
    echo "extern int X;" >>  ./dst/init.h

    #生成dst/test
    echo "Modify Code...."
    filename="$testDir/dst/test.cpp"
    lineNumber=$Line1 
    #lineNumber=8

    # 读取指定行的内容
    line=$(sed -n "${lineNumber}p" "$filename")

    name=''
    # 判断这行是否是赋值语句
    if [[ $line =~ ^[[:space:]]*([a-zA-Z_][a-zA-Z0-9_]*)[[:space:]]*= ]]; then

        if echo "$line" | grep -qvE ' \+ | - | \* | / | \\ '; then
            echo -e "\e[33m  skip $Line1 \e[0m"
            
            continue
        fi

        # 提取被赋值的变量名
        name=${BASH_REMATCH[1]}

        # 检查文件中是否存在 "int name" 的字符串
        if grep -q "int[[:space:]]$name" "$filename"; then
            # 如果存在 "int name"，则替换第n行为 "name=X;"
            sed -i "${lineNumber}s/.*/$name=X;/" "$filename"
        else
            # 如果不存在 "int name"，则在第n行插入 "int name=X;"
            sed -i "${lineNumber}s/.*/int $name=X;/" "$filename"
        fi
    else
        echo "第 $lineNumber 行不是赋值语句"
        continue
    fi

    search_pattern="$name ="
    echo $search_pattern
    #line_number=$(awk -v line="$n" -v str="$str" 'NR > line && $0 ~ str { print NR; exit }' filename)
    #varEndLine=$(awk -v line="$Line1" -v str="$search_pattern" 'NR > line && $0 ~ str { print NR; exit }' $testDir/src/test.cpp)
    varEndLine=$(tail -n +$((Line1 + 1)) "$testDir/src/test.cpp" | grep -n -m 1 -- "$search_pattern" | cut -d':' -f1)
    if [ -z "$varEndLine" ]; then
        varEndLine=$EndLine
    else
        varEndLine=$((varEndLine + Line1))
        sed -i "${varEndLine}s/.*/}/" "$testDir/dst/test.cpp"  # 替换第 n 行
        sed -i "$((varEndLine+1)),\$d" "$testDir/dst/test.cpp"  # 删除第 n 行之后的所有行
        sed -i "${varEndLine}s/.*/}/" "$testDir/src/test.cpp"  # 替换第 n 行
        sed -i "$((varEndLine+1)),\$d" "$testDir/src/test.cpp"  # 删除第 n 行之后的所有行
    fi

    echo -e "\e[33m  check for $Line1 , end in $varEndLine... \e[0m"
    #echo check for $Line1 , end in $varEndLine...
    #对于修改行Line1以下的每一行，在下一次该变量赋值之前，都做一个检测
    for (( Line2=$((Line1 + 1)); Line2<varEndLine; Line2++ ))
    do
        line=$(sed -n "${Line2}p" "$filename")
        if echo "$line" | grep -qvE '\+|-| \* | / | \\ '; then
            echo "skip $Line2 for no operator"
            continue
        fi
        if echo "$line" | grep -qvE "\\b$name\\b"; then
            echo "skip $Line2 for no corresponding variable"
            continue
        fi

        echo with $Line2...
        cd /root/OptChecker_asm/$testname
        bash run_single_line.sh $Line2 $Line1
    done
done