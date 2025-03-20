int m;
void fn(signed char p1, short p2, signed char p3_1, signed char p3_2, short p4, unsigned char p5) {
if(
    (signed char)((p4 | 0) && (p1 || p2) || p5 || p3_1 && p5)
-
    (signed char)((p4 | 0) && (p1 || p2) || p5 || p3_2 && p5)
)
    { m=1; }
}
 