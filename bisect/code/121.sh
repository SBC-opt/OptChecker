cd /home/zy/bisect/gcc/build
rm -rf *
echo "configure......"
../configure --enable-languages=c,c++ --disable-multilib
echo "make......"
make -j8
echo "install......"
make install
cd /home/zy/bisect/gcc_cpp
gcc -g -O3 -fwrapv -c ./56.cpp
obj=$(objdump -d 56.o)

cd /home/zy/bisect/gcc
if echo "$obj" | grep -q "cmove"; then
  echo "bisect bad......"
  exit 1;
else
  echo "bisect good......"
  exit 0;
fi


# cd /home/zy/bisect/llvm-project/build
# echo "make llvm......"
# sudo make -j12
# echo "install llvm......"
# sudo make install -j12

# cd /home/zy/bisect/llvm-project/clangbuild
# echo "make clang......"
# sudo make -j12
# echo "install clang......"
# sudo make install -j12

# cd /home/zy/bisect/llvm_cpp
# clang -g -O3 -fwrapv -c ./59.cpp
# obj=$(objdump -d 59.o)

# cd /home/zy/bisect/llvm-project
# if echo "$obj" | grep -q "cmp"; then
#   echo "bisect good......"
#   exit 0;
# else
#   echo "bisect bad......"
#   exit 1;
# fi
