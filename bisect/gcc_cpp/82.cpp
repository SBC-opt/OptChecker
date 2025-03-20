int a, b;
void test(int c, int d) {
    for (int i = 0; i < 100; i += 1) {
        d += -2147483647 - 1;
        a += c + d;
    }
    b = c + d;
}