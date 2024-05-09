script_path=$(readlink -f "$0")
current_dir=$(dirname "$script_path")
echo $current_dir
testDir="$current_dir/.."
StartLine=0
EndLine=$(wc -l < "$testDir/test.cpp")

echo "========================================================================"
cat ./test.cpp
echo "========================================================================"
cp ./test.cpp $testDir/test.cpp
cp ./init.h $testDir/init.h


outFile1=$testDir/gcc_result.txt
outFile2=$testDir/clang_result.txt

rm $outFile1
rm $outFile2

bash /home/zy/OptChecker/code/arithmetic2cp/run_simple.sh $testDir 8 192

#if grep -q " " "$outFile1" && ! grep -q " " "$outFile2"; then
#if ! grep -q " " "$outFile1" && grep -q " " "$outFile2"; then
#if grep -q " " "$outFile1" && grep -q " " "$outFile2"; then
if grep -q " " "$outFile1" || grep -q " " "$outFile2"; then
    exit 0;
else
    exit 1;
fi