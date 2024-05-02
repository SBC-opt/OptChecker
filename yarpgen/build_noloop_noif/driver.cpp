#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1676604846378476565ULL;
long long int var_2 = -6307500680524168395LL;
unsigned int var_6 = 1105969632U;
bool var_7 = (bool)1;
long long int var_12 = -6711976945369800774LL;
unsigned int var_13 = 1203182221U;
short var_14 = (short)-1757;
unsigned short var_15 = (unsigned short)39608;
short var_16 = (short)19479;
unsigned char var_17 = (unsigned char)236;
int zero = 0;
unsigned int var_22 = 1491521916U;
void init() {
}

void checksum() {
    hash(&seed, var_22);
}
void test(unsigned long long int var_1, long long int var_2, unsigned int var_6, bool var_7, long long int var_12, unsigned int var_13, short var_14, unsigned short var_15, short var_16, unsigned char var_17, int zero);

int main() {
    init();
    test(var_1, var_2, var_6, var_7, var_12, var_13, var_14, var_15, var_16, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
