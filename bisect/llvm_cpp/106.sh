cd /home/zy/bisect/llvm-project/build
echo "make llvm......"
sudo make -j12
#echo "install llvm......"
#sudo make install -j12

cd /home/zy/bisect/llvm_cpp
/home/zy/bisect/llvm-project/build/bin/clang -g -O3 -c ./106.cpp
obj=$(objdump -d 106.o)
line_count=$(echo "$obj" | wc -l)

cd /home/zy/bisect/llvm-project
if [ "$line_count" -gt 15 ]; then
  echo "bisect good......"
  exit 0;
else
  echo "bisect bad......"
  exit 1;
fi
