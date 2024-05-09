num=$1
dir=$2 #example: /home/zy/OptChecker/code/lu2cp

cp -r $dir/Results_24_5_5/$num $dir/reduce/$num
mkdir $dir/reduce/$num/code
cp $dir/reduce/$num/test.cpp $dir/reduce/$num/code/test.cpp
cp $dir/reduce/$num/init.h $dir/reduce/$num/code/init.h
cp $dir/reduce/run_reduce_lu.sh $dir/reduce/$num/code/run_reduce_lu.sh