signed char  Optimized_Mark1, Variable_Static;

#include <algorithm>
void fn1(signed char p1, short p2, signed char p3, short p4, unsigned char p5) {
p3 = Optimized_Mark1;
Variable_Static = (p4 | 0) && (p1 || p2) || p5 || p3 && p5; 
}