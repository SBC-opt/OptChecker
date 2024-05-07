/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 133123578
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(long long int var_1, unsigned long long int var_2, unsigned short var_3, int var_4, long long int var_5, unsigned short var_6, long long int var_7, short var_8, unsigned int var_9, short var_10, int zero, unsigned long long int arr_2 [18] , signed char arr_3 [18] [18] ) {
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = (short)3/*3*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_7))) + (11172))/*17*/; i_0 += (short)3/*3*/) 
    {
        arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */bool) 16777215))));
        var_9 -= ((/* implicit */unsigned int) arr_3 [(short)10] [i_0 - 2]);
        arr_5 [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */bool) (unsigned short)63)) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned long long int) var_1))));
        if ((!(((/* implicit */bool) ((unsigned long long int) var_8)))))
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((short) var_10));
            arr_7 [i_0] = ((/* implicit */int) (!(((/* implicit */bool) var_2))));
            var_1 = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */bool) (unsigned char)7)))));
        }

    }
    for (unsigned long long int i_1 = ((((/* implicit */unsigned long long int) var_7)) - (3361882108474283117ULL))/*0*/; i_1 < 13ULL/*13*/; i_1 += 1ULL/*1*/) 
    {
        if ((!(((/* implicit */bool) -16777223))))
        {
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) 16777226);
            arr_12 [(unsigned char)11] [(unsigned char)11] = ((/* implicit */signed char) var_2);
        }
        else
        {
            var_3 = ((/* implicit */unsigned short) ((((unsigned long long int) var_6)) ^ (((((/* implicit */bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_2 [i_1])))));
            var_14 = ((/* implicit */signed char) (!(((/* implicit */bool) var_5))));
            arr_13 [i_1] = ((/* implicit */long long int) (!(((/* implicit */bool) (unsigned short)65475))));
            arr_14 [i_1] = ((/* implicit */short) (-(3688965301U)));
            arr_15 [i_1] = ((/* implicit */int) (!(((/* implicit */bool) ((long long int) var_14)))));
        }

        var_15 |= arr_3 [(short)8] [4ULL];
    }
    var_16 = var_6;
}
