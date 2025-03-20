cd /home/zy/bisect/gcc__/gcc/build
#sudo rm -rf *
#echo "configure......"
#../configure --enable-languages=c,c++ --disable-multilib
echo "make......"
sudo make -j14
echo "install......"
sudo make install -j10
cd /home/zy/bisect/gcc_cpp
gcc -g -O3 -fwrapv -c ./86.cpp
obj=$(objdump -d 86.o)

cd /home/zy/bisect/gcc__/gcc
if echo "$obj" | grep -q "mul"; then
  echo "bisect good......"
  exit 0;
else
  echo "bisect bad......"
  exit 1;
fi
