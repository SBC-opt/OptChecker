extern int x;
extern int y;
void func1(int a, int b, int c, int d, int e) {
    a = c;
    a = b;
    a = d;
    x = c;
    y = !e * d * e;
}

void func2(int a, int b, int c, int d, int e) {
    a = c;
    a = b;
    a = d;
    x = c;
    y = !e * d * e;
}