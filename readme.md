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


**lu2cp run_simple.sh**

bash run_simple.sh testDir dwarfpy getResultpy compiler

run_simple.sh: Detection of optimization problems for a single use case.

testDir: The structure is similar to `./code/lu2cp/testDir_example`. The test files are named `test.cpp` and `init.h` and need to have `src` and `dst` folders.

dwarfpy: The relevant script `dwarf_decode_address.py`, which is stored in the corresponding folder.

getResultpy: The relevant script `getResult.py`, which is stored in the corresponding folder.

compiler: `gcc` or `clang`.

    Example:
    ~/OptChecker/code/lu2cp$ bash run_simple.sh /home/zy/OptChecker/code/lu2cp/example /home/zy/OptChecker/code/lu2cp/dwarf_decode_address.py /home/zy/OptChecker/code/lu2cp/getResult.py gcc
    The terminal output includes:
    [Missed opportunities for Opt1]:
    ------------------------------------------
        line        row
        19          9
    ------------------------------------------
    The file outputs: gcc_result.txt in testDir.

**lu2cp run_reduce_lu.sh Example**
Location: ./code/lu2cp/reduce

To prepare the reduced files for /home/zy/OptChecker/code/lu2cp/Results_24_5_5/3:

    bash /home/zy/OptChecker/code/reduce.sh 3 /home/zy/OptChecker/code/lu2cp

Reduce Dir:

    cd /home/zy/OptChecker/code/lu2cp/reduce/3/code

Reduce:

    creduce --n 1 ./run_reduce_lu.sh test.cpp init.h