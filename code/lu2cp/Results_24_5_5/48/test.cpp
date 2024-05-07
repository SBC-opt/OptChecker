/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 2995921448
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned long long int var_0, int var_2, unsigned int var_3, unsigned long long int var_4, long long int var_5, unsigned char var_7, int var_8, long long int var_9, short var_10, long long int var_11, unsigned short var_12, int zero, long long int arr_0 [14] , unsigned long long int arr_1 [14] ) {
    /* LoopSeq 1 */
    /* vectorizable */


    for (unsigned int i_0 = 2U/*2*/; i_0 < ((((/* implicit */unsigned int) var_10)) - (4294952147U))/*12*/; i_0 += 1U/*1*/) 
    {
        var_3 += ((/* implicit */unsigned int) ((((/* implicit */bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 2]))));
        var_4 = ((/* implicit */unsigned long long int) std::max((var_4), (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0 + 2])))));
        if (((/* implicit */bool) ((((/* implicit */bool) (short)-7561)) ? (((/* implicit */int) (short)-7565)) : (((/* implicit */int) (unsigned short)21943)))))
        {
            arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */bool) arr_0 [i_0 + 1])) ? (var_5) : (((/* implicit */long long int) var_8))));
            arr_3 [i_0] [i_0] = ((/* implicit */bool) var_9);
            arr_4 [i_0] = ((/* implicit */unsigned long long int) (-((~(var_2)))));
        }

    }
    var_2 = ((/* implicit */int) var_12);
    var_17 = ((/* implicit */int) var_11);
    if (((/* implicit */bool) std::min((((/* implicit */unsigned long long int) ((signed char) ((int) var_17)))), (var_0))))
    {
        var_18 = ((/* implicit */unsigned int) var_10);
        var_19 = ((/* implicit */unsigned long long int) std::min((var_19), (((/* implicit */unsigned long long int) var_3))));
    }

    var_7 = ((/* implicit */unsigned char) ((((/* implicit */bool) std::max((var_2), (((/* implicit */int) (bool)1))))) ? ((~(((var_18) << (((var_19) - (2429285739ULL))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (bool)1)))));
}
