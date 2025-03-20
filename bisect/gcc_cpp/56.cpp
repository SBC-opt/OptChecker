int a, b;
void test() {
    a = 0;
    for (int c = 0; c < 100; c += 1) {
        a += 2;
        if (a)
            b += 3;
    }
}