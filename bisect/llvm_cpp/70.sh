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
clang -g -O3 -fwrapv -c ./70.cpp
obj=$(objdump -d 70.o)

cd /home/zy/bisect/llvm-project
if echo "$obj" | grep -q "cmp"; then
  echo "bisect good......"
  exit 0;
else
  echo "bisect bad......"
  exit 1;
fi
