#!/bin/sh
#example: https://godbolt.org/z/PeTssnP74
testDir=$1

StartLine=$2
EndLine=$3

rm $testDir/gcc_result.txt
rm $testDir/clang_result.txt

echo FuncLines:$StartLine,$EndLine

for (( Line1=$((StartLine + 1)); Line1<=EndLine; Line1++ ))
do
    echo -e "\e[35m  Line1: $Line1 \e[0m"

    name=''
    expression1=''
    type1=''
    type2=''
    # Determines whether it is an assignment statement
    filename="$testDir/test.cpp"
    line=$(sed -n "${Line1}p" "$filename")
    if [[ $line =~ ^[[:space:]]*([a-zA-Z_][a-zA-Z0-9_]*)[[:space:]]*=[[:space:]]*(.*)\; ]]; then
        # variable name
        name=${BASH_REMATCH[1]}
        expression1=${BASH_REMATCH[2]}

        #Todo: Get the exact type
        type1="long long int"
        definition_line=$(grep "\<$name\>" "$testDir/init.h")
        if [[ -n $definition_line ]]; then
            t="extern"
            type1=$(echo "$definition_line" | sed -n "s/.*$t\s*\(.*\)\s*\<$name\>.*/\1/p")
        else
            line=$(sed -n "${StartLine}p" "$filename")
            t=","
            result=$(echo "$line" | sed -n "s/.*$t\s*\(.*\)\s*\<$name\>.*/\1/p")
            if [ -z "$result" ]; then
                t="("
                type1=$(echo "$line" | sed -n "s/.*$t\s*\(.*\)\s*\<$name\>.*/\1/p")
            else
                type1=$result
            fi

        fi
    else
        echo "Line $Line1 is not an assignment statement, skip"
        continue
    fi

    # find next assignment of variable
    search_pattern="$name ="
    varEndLine=$(tail -n +$((Line1 + 1)) "$testDir/test.cpp" | grep -n -m 1 -- "$search_pattern" | cut -d':' -f1)
    if [ -z "$varEndLine" ]; then
        varEndLine=$EndLine
    else
        varEndLine=$((varEndLine + Line1))
    fi

    echo -e "\e[33m  check for $Line1 , end in $varEndLine... \e[0m"
    #detect for the first use between Line1 and varEndLine
    for (( Line2=$((Line1 + 1)); Line2<varEndLine; Line2++ ))
    do
        line=$(sed -n "${Line2}p" "$filename")
        if echo "$line" | grep -qvE "\\b$name\\b"; then
            echo "skip $Line2 for no corresponding variable"
            continue
        fi

        # Determines whether it is an assignment statement
        # Todo: Can be extended to any expression
        filename="$testDir/test.cpp"
        line=$(sed -n "${Line2}p" "$filename")
        expression2=''
        if [[ $line =~ ^[[:space:]]*([a-zA-Z_][a-zA-Z0-9_]*)[[:space:]]*=[[:space:]]*(.*)\; ]]; then
            # expression
            name2=${BASH_REMATCH[1]}
            expression2=${BASH_REMATCH[2]}

            #Todo: Get the exact type
            type2="long long int"
            definition_line=$(grep "\<$name2\>" "$testDir/init.h")
            if [[ -n $definition_line ]]; then
                t="extern"
                type2=$(echo "$definition_line" | sed -n "s/.*$t\s*\(.*\)\s*\<$name2\>.*/\1/p")
            else
                line=$(sed -n "${StartLine}p" "$filename")
                t=","
                result=$(echo "$line" | sed -n "s/.*$t\s*\(.*\)\s*\<$name2\>.*/\1/p")
                if [ -z "$result" ]; then
                    t="("
                    type2=$(echo "$line" | sed -n "s/.*$t\s*\(.*\)\s*\<$name2\>.*/\1/p")
                else
                    type2=$result
                fi

            fi

        else
            echo "Line $Line2 is not an assignment statement, skip"
            break
        fi

        echo with $Line2...

        #code transformation
        rm -f $testDir/dst/*
        rm -f $testDir/src/*
        cp $testDir/test.cpp $testDir/dst/test.cpp
        cp $testDir/init.h $testDir/dst/init.h
        cp $testDir/test.cpp $testDir/src/test.cpp
        cp $testDir/init.h $testDir/src/init.h

        echo "$type1 Optimized_Mark1; $type2 Variable_Static;" >>  $testDir/src/init.h
        insert_code1="$type1 Variable_T = $expression1; $name = $expression1 + Optimized_Mark1;"
        insert_code1=$(echo "$insert_code1" | sed 's/&/\\&/g')
        insert_code2="Variable_Static = $expression2; $name = Variable_T;"
        insert_code2=$(echo "$insert_code2" | sed 's/&/\\&/g')
        sed -i "${Line1}s#.*#${insert_code1}#" "$testDir/src/test.cpp" #replace
        sed -i "${Line2}s#.*#${insert_code2}#" "$testDir/src/test.cpp" #replace
        #sed -i "${Line2}s/$/${insert_code2}/" "$testDir/src/test.cpp" #add
        echo $insert_code1
        echo $insert_code2
        #echo "src after transformed:============================="
        #cat $testDir/src/init.h
        #echo " "
        #cat $testDir/src/test.cpp
        #echo " "
        #echo "==================================================="

        echo "$type1 Optimized_Mark2, Variable_Mark1, Variable_Mark2;" >>  $testDir/dst/init.h
        modified_expression1=$(echo "$expression2" | sed "s/\b$name\b/"Variable_Mark1"/g")
        modified_expression2=$(echo "$expression2" | sed "s/\b$name\b/"Variable_Mark2"/g")
        insert_code="if(($modified_expression1)-($modified_expression2)){Optimized_Mark2=1;}"
        insert_code=$(echo "$insert_code" | sed 's/&/\\&/g')
        sed -i "${Line2}s#.*#${insert_code}#" "$testDir/dst/test.cpp" #replace
        #echo "dst after transformed:============================="
        #cat $testDir/dst/init.h
        #echo " "
        #cat $testDir/dst/test.cpp
        #echo " "
        #echo "==================================================="

        #detect
        bash run_single_line.sh gcc $testDir $Line1 $Line2
        bash run_single_line.sh clang $testDir $Line1 $Line2

        break
    done

done




#definition_line=$(grep "\<$name\>" "$testDir/init.h")
#if [[ -n $definition_line ]]; then
#    #type1=$(echo "$definition_line" | sed -E "s/.*extern[[:space:]]+([^[:space:]]+)[[:space:]]+$name;.*/\1/")
#    t="extern"
#    type1=$(echo "$definition_line" | sed -n "s/.*$t\s*\(.*\)\s*$name.*/\1/p")
#else
#    line=$(sed -n "${StartLine}p" "$filename")
#    line=$(echo "$line" | grep -oP '\((.*?)\)')
#    line=$(echo "$line" | sed 's/^.\(.*\).$/\1/')
#    echo aaaaaaaaaaaaaaaaaaaa$line,$name
#
#    IFS=',' read -ra parts <<< "$line"
#    for part in "${parts[@]}"; do
#        if [[ "$part" =~ ^[[:space:]]*([a-zA-Z_][a-zA-Z0-9_]*)[[:space:]]*(.*)$ ]]; then
#            var_type="${BASH_REMATCH[1]}"
#            var_name="${BASH_REMATCH[2]}"
#            echo $var_type, $var_name
#            if [ "$var_name" = "$name" ]; then
#                type1=$var_type
#                echo $type1
#                break
#            fi
#        fi
#    done
#fi