/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 1436311514
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(signed char var_0, unsigned short var_1, long long int var_2, unsigned short var_3, short var_4, short var_5, unsigned int var_6, signed char var_7, int var_8, int zero, long long int arr_0 [11] [11] , unsigned int arr_1 [11] , short arr_2 [18] [18] , unsigned short arr_4 [18] ) {
    var_5 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0/*0*/; i_0 < ((((/* implicit */int) 1001405835835616414LL)) - (1358703763))/*11*/; i_0 += 3/*3*/) 
    {
        var_4 -= ((/* implicit */short) var_0);
        if (((/* implicit */bool) ((((/* implicit */int) (unsigned short)23399)) << (((6482826401919350449LL) - (6482826401919350434LL))))))
        {
            var_4 = ((/* implicit */short) std::min((var_4), (((/* implicit */short) ((signed char) arr_1 [8U])))));
            var_13 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        }

        var_8 = ((/* implicit */int) (!(((((/* implicit */bool) (unsigned short)61483)) && (((/* implicit */bool) arr_0 [i_0] [i_0]))))));
    }


    for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) var_2))) - (32467))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) ((std::min((1665885820396090541LL), (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)2657))))))) ^ ((((-(var_2))) - (((/* implicit */long long int) ((((/* implicit */bool) var_4)) ? (65535U) : (var_6)))))))))) - (17409))/*18*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) var_13))) - (28))/*1*/) 
    {
        var_1 = ((/* implicit */unsigned short) (+(((((/* implicit */bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_1] [i_1]))))));
        arr_5 [i_1] [4LL] = ((/* implicit */long long int) (((+(((((/* implicit */int) var_0)) / (((/* implicit */int) arr_4 [i_1])))))) / (((((/* implicit */bool) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))));
        arr_6 [i_1] = -6482826401919350445LL;
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */bool) ((((/* implicit */int) arr_2 [i_1] [(short)2])) << (((((/* implicit */int) (short)32767)) - (32755)))))) ? (std::max((6482826401919350472LL), (((/* implicit */long long int) arr_2 [i_1] [(unsigned short)14])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) var_3)))))));
    }
    var_17 = std::max((5785238719314300143LL), (((/* implicit */long long int) ((((/* implicit */bool) (+(-5385347381883474028LL)))) ? (((/* implicit */int) std::min((((/* implicit */short) var_7)), (var_5)))) : (((/* implicit */int) std::max(((unsigned short)2032), (((/* implicit */unsigned short) var_13)))))))));
}
