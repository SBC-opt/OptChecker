cd /home/zy/bisect/gcc__/gcc/build
#sudo rm -rf *
#echo "configure......"
#../configure --enable-languages=c,c++ --disable-multilib
echo "make......"
sudo make -j14
echo "install......"
sudo make install DESTDIR=/home/zy/bisect/gcc__/gcc/build/bin -j10
cd /home/zy/bisect/gcc_cpp
/home/zy/bisect/gcc__/gcc/build/bin/usr/local/bin/gcc -g -O3 -fwrapv -c ./41.cpp

obj=$(objdump -d 41.o)
line_count=$(echo "$obj" | wc -l)

cd /home/zy/bisect/gcc__/gcc
if [ "$line_count" -gt 26 ]; then
  echo "bisect good......"
  exit 0;
else
  echo "bisect bad......"
  exit 1;
fi
