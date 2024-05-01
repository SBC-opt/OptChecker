#include "init.h"

void test(int m, int n, int t) {
    t = m ^ 100;
    n = n / t;
    a = m + 2;
    b = ~m;
    c = b || n || a;
}