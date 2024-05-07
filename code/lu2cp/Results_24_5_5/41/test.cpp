/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 509478778
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned char var_0, long long int var_1, unsigned char var_2, bool var_3, bool var_4, unsigned long long int var_8, short var_10, unsigned char var_12, signed char var_14, bool var_15, int zero, signed char arr_0 [16] , unsigned short arr_1 [16] , long long int arr_7 [25] , bool arr_8 [25] ) {
    var_14 = ((/* implicit */signed char) (unsigned char)151);
    /* LoopSeq 2 */
    /* vectorizable */

    for (int i_0 = ((((/* implicit */int) 815852980483706549LL)) + (1834168651))/*0*/; i_0 < 16/*16*/; i_0 += 3/*3*/) 
    {
        arr_2 [i_0] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */bool) arr_1 [i_0])) && (((/* implicit */bool) arr_1 [i_0])))))) != (((((/* implicit */bool) -101239803)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (815852980483706563LL)))));
        if (((/* implicit */bool) var_10))
        {
            arr_3 [13ULL] [i_0] = ((/* implicit */bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))));
            arr_4 [i_0] = ((/* implicit */bool) ((((((/* implicit */bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) | (((/* implicit */int) arr_1 [i_0]))));
            arr_5 [i_0] = ((/* implicit */unsigned int) (unsigned char)9);
        }

        var_0 = ((/* implicit */unsigned char) ((var_15) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */


    for (unsigned int i_1 = ((((/* implicit */unsigned int) var_8)) - (2471779752U))/*0*/; i_1 < ((((/* implicit */unsigned int) ((((/* implicit */bool) var_2)) ? (((/* implicit */int) ((((/* implicit */bool) var_2)) && (((/* implicit */bool) 2432840895U))))) : (((/* implicit */int) var_3))))) + (24U))/*25*/; i_1 += ((((/* implicit */unsigned int) var_15)) + (1U))/*2*/) 
    {
        var_2 = ((/* implicit */unsigned char) std::min((var_2), (((/* implicit */unsigned char) ((((127LL) >= (var_1))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */bool) arr_7 [i_1])))))) : (127LL))))));
        var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_12)) - (((/* implicit */int) var_4))))));
        var_4 -= ((/* implicit */bool) ((((/* implicit */bool) ((((/* implicit */bool) var_20)) ? (((/* implicit */int) (bool)1)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (bool)1))))) : (arr_7 [i_1])));
        arr_9 [i_1] = ((/* implicit */bool) (~(((/* implicit */int) arr_8 [i_1]))));
    }
}
