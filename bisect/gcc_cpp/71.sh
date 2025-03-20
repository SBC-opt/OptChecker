cd /home/zy/bisect/gcc/build
rm -rf *
echo "configure......"
../configure --enable-languages=c,c++ --disable-multilib
echo "make......"
make -j8
echo "install......"
make install
cd /home/zy/bisect/gcc_cpp
gcc -g -O3 -fwrapv -c ./71.cpp
obj=$(objdump -d 71.o)

cd /home/zy/bisect/gcc
if echo "$obj" | grep -q "div"; then
  echo "bisect bad......"
  exit 1;
else
  echo "bisect good......"
  exit 0;
fi
