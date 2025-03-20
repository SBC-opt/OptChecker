cd /home/zy/bisect/llvm-project/build
echo "make llvm......"
sudo make -j12
#echo "install llvm......"
#sudo make install -j12

cd /home/zy/bisect/llvm_cpp
/home/zy/bisect/llvm-project/build/bin/clang -g -O3 -c ./112.cpp
obj=$(objdump -d 112.o)

cd /home/zy/bisect/llvm-project
if echo "$obj" | grep -q "shl"; then
  echo "bisect good......"
  exit 0;
else
  echo "bisect bad......"
  exit 1;
fi
