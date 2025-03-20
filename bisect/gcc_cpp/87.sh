cd /home/zy/bisect/gcc/build
sudo rm -rf *
echo "configure......"
../configure --enable-languages=c,c++ --disable-multilib
echo "make......"
sudo make -j14
echo "install......"
sudo make install -j10
cd /home/zy/bisect/gcc_cpp
gcc -g -O3 -fwrapv -c ./87.cpp
obj=$(objdump -d 87.o)

cd /home/zy/bisect/gcc
if echo "$obj" | grep -q "mul"; then
  echo "bisect bad......"
  exit 1;
else
  echo "bisect good......"
  exit 0;
fi
