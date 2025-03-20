cd /home/zy/bisect/llvm-project/build
echo "make llvm......"
sudo make -j12
#echo "install llvm......"
#sudo make install -j12

cd /home/zy/bisect/llvm_cpp
/home/zy/bisect/llvm-project/build/bin/clang -g -O3 -c ./110.cpp
obj=$(objdump -d 110.o)

cd /home/zy/bisect/llvm-project
if echo "$obj" | grep -q "setne"; then
  echo "bisect bad......"
  exit 1;
else
  echo "bisect good......"
  exit 0;
fi
