cd /home/zy/bisect/llvm-project/build
echo "make llvm......"
sudo make -j12
echo "install llvm......"
sudo make install -j12

cd /home/zy/bisect/llvm-project/clangbuild
echo "make clang......"
sudo make -j12
echo "install clang......"
sudo make install -j12

cd /home/zy/bisect/llvm_cpp
clang -g -O3 -fwrapv -c ./61.cpp
obj=$(objdump -d 61.o)

cd /home/zy/bisect/llvm-project
if echo "$obj" | grep -q "cmp"; then
  echo "bisect bad......"
  exit 1;
else
  echo "bisect good......"
  exit 0;
fi
