#!/bin/sh
testDir=$1
outTestsuitDir=$2
count=$3

yarpgenBin=$4
yarpgenDir=$5
dwarfpy=$6
getResultpy=$7

while [ $count -le 50 ]
 do

   bash run_yarpgen_lu.sh $yarpgenBin $yarpgenDir $testDir $dwarfpy $getResultpy

   echo count:$count================================
   ((count++))
   mkdir $outTestsuitDir/$count
   cp $testDir/* $outTestsuitDir/$count/
   mkdir $outTestsuitDir/$count/src
   mkdir $outTestsuitDir/$count/dst

 done

