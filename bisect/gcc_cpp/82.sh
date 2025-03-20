cd /home/zy/bisect/gcc/build
#rm -rf *
#echo "configure......"
#../configure --enable-languages=c,c++ --disable-multilib
echo "make......"
sudo make -j14
echo "install......"
sudo make install
cd /home/zy/bisect/gcc_cpp
gcc -g -O3 -fwrapv -c ./82.cpp
obj=$(objdump -d 82.o)

cd /home/zy/bisect/gcc
if echo "$obj" | grep -q "xmm"; then
  echo "bisect good......"
  exit 0;
else
  echo "bisect bad......"
  exit 1;
fi
