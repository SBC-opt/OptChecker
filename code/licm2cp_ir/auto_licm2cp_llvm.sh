#!/bin/sh
testname=licm2cp_llvm
testDir=/root/OptChecker_asm/$testname/test
outTestsuitDir=/root/OptChecker_asm/$testname/TestSuite_24_1_26

count=0
while [ $count -le 50 ]
 do

   cd /root/OptChecker_asm/$testname
   bash run_yarpgen_licm2cp_llvm.sh

   ((count++))
   cd $outTestsuitDir
   mkdir $count
   cd $count
   cp -r $testDir/src ./
   cp -r $testDir/dst ./

   cp ./src/test.cpp $testDir/../reduce/test.cpp
   cp ./src/init.h $testDir/../reduce/init.h

   cd $testDir/../reduce
   creduce --n 1 run_reduce_licm2cp_llvm.sh test.cpp init.h

   cd $outTestsuitDir/$count
   mkdir reduced
   cd reduced
   cp -r $testDir/../reduce/src ./
   cp -r $testDir/../reduce/dst ./

 done