cd /home/zy/bisect/gcc/build
#sudo rm -rf *
#echo "configure......"
#../configure --enable-languages=c,c++ --disable-multilib
echo "make......"
sudo make -j14
echo "install......"
sudo make install DESTDIR=/home/zy/bisect/gcc/build/bin -j10
cd /home/zy/bisect/gcc_cpp
/home/zy/bisect/gcc/build/bin/usr/local/bin/gcc -g -O3 -c ./108.cpp

obj=$(objdump -d 108.o)
line_count=$(echo "$obj" | wc -l)

cd /home/zy/bisect/gcc
if [ "$line_count" -gt 15 ]; then
  echo "bisect bad......"
  exit 1;
else
  echo "bisect good......"
  exit 0;
fi
