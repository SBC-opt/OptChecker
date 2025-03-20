int a [20][20];
int b [20];

void f() {
    for (unsigned int i = 1; i < 19; i += 1) 
    {
        b [i] = a [i + 1] [i - 1] + a [i + 1] [i + 1];
    }
}
