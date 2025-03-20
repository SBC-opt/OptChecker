#!/bin/sh
testDir=/home/zhangyi/work/OptChecker/code/vectRA/test #$1
outTestsuitDir=/home/zhangyi/work/OptChecker/code/vectRA/Results_24_10_17_gcc_regression_13 #$2
count=0 #$3

yarpgenBin=/home/zhangyi/work/OptChecker/yarpgen-origin/yarpgen/build_nopragma_oneloop/yarpgen #$4
yarpgenDir=/home/zhangyi/work/OptChecker/yarpgen-origin/yarpgen/build_nopragma_oneloop/out #$5

while [ $count -le 50 ]
  do

    bash run_yarpgen_vr.sh $yarpgenBin $yarpgenDir $testDir

    echo count:$count================================
    ((count++))
    mkdir $outTestsuitDir/$count
    cp $testDir/* $outTestsuitDir/$count/

  done