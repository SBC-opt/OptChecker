#include "init.h"

void test() {
    for(int i = 0; i < 4; ++i){
        if(i < 2 && a[i] == 0) break;
        b[i] = a[i] * 2;
    }
}