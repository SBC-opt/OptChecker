**python** >= 3.8

**creduce** is required (obtained from apt)

**GCC BUILD**
    
    cd ./gcc
    mkdir build
    cd build
    ../configure --enable-languages=c,c++ --disable-multilib
    make
    make install
**LLVM BUILD**

    cd ./llvm-project
    mkdir build
    cd build
    cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=On -DLLVM_ENABLE_PROJECTS="clang;clang-tools-extra;" ../llvm
    make
    make install
**YARPGEN BUILD**

    cd yarpgen
    mkdir build
    cmake ..
    make
