/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 905348412
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(int var_0, long long int var_1, short var_2, unsigned long long int var_4, unsigned char var_5, unsigned long long int var_6, unsigned long long int var_7, bool var_8, bool var_9, unsigned int var_10, int var_11, unsigned char var_13, unsigned char var_14, unsigned int var_15, unsigned long long int var_18, int zero, bool arr_0 [25] , unsigned long long int arr_1 [25] , unsigned long long int arr_2 [25] ) {
    var_14 = ((/* implicit */unsigned char) var_8);
    var_2 &= ((/* implicit */short) var_1);
    var_7 = ((/* implicit */unsigned long long int) std::max((var_7), ((~(562812514467840ULL)))));
    var_22 = ((/* implicit */int) std::min((((((/* implicit */bool) var_13)) ? (((((/* implicit */bool) var_14)) ? (var_18) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((0U) + (4268289838U)))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */bool) var_0)))) && (((/* implicit */bool) var_0)))))));
    /* LoopSeq 1 */


    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) var_22))) + (1))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) (+(3803673610U))))) - (29684))/*22*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) var_10))) - (34244))/*3*/) 
    {
        var_0 = ((/* implicit */int) 17ULL);
        arr_4 [i_0] [i_0] = ((((/* implicit */unsigned long long int) (-(((((/* implicit */bool) var_1)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) * ((-(4147808144180770600ULL))));
        arr_5 [i_0] = ((((/* implicit */bool) (~(var_22)))) ? (std::max((arr_1 [i_0 + 3]), (13ULL))) : (((arr_1 [i_0 + 3]) + (arr_1 [i_0 + 3]))));
        var_6 = ((/* implicit */unsigned long long int) std::min((((/* implicit */int) ((((/* implicit */bool) arr_1 [(unsigned char)21])) && (((/* implicit */bool) (+(arr_2 [i_0]))))))), ((-(((/* implicit */int) arr_0 [i_0 + 3]))))));
        if (((/* implicit */bool) (~(((/* implicit */int) var_14)))))
        {
            arr_6 [i_0 - 1] = ((/* implicit */unsigned int) std::max((5ULL), (((/* implicit */unsigned long long int) ((bool) ((var_0) > (var_0)))))));
            var_25 ^= ((/* implicit */long long int) std::max(((+((-(((/* implicit */int) var_8)))))), ((-(((/* implicit */int) ((((/* implicit */bool) var_4)) && (((/* implicit */bool) 4268289837U)))))))));
            var_26 = (-(std::max((arr_2 [i_0 + 2]), (((/* implicit */unsigned long long int) var_25)))));
        }
        else
        {
            var_0 = ((/* implicit */int) (-(std::max((((/* implicit */unsigned long long int) std::max((var_10), (((/* implicit */unsigned int) var_9))))), (std::max((((/* implicit */unsigned long long int) var_2)), (18446744073709551598ULL)))))));
            var_5 = ((/* implicit */unsigned char) ((((/* implicit */bool) var_11)) ? (((/* implicit */unsigned long long int) var_22)) : (std::max((arr_1 [i_0 + 2]), (((/* implicit */unsigned long long int) 3636983244836756552LL))))));
            arr_7 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */bool) (+(std::max((((/* implicit */unsigned int) var_11)), (var_15))))))));
        }

    }
}
