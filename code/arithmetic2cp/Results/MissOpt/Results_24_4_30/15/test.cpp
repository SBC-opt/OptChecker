/*
yarpgen version 2.0 (build 0bfbe4f on 2024:04:29)
Seed: 1596812523
Invocation: /home/zy/OptChecker/yarpgen/build/yarpgen -o /home/zy/OptChecker/test_yarpgen
*/
#include "init.h"
#include <algorithm>
void test(unsigned long long int var_0, unsigned char var_1, unsigned int var_2, signed char var_3, unsigned char var_4, signed char var_5, bool var_6, int var_8, bool var_9, unsigned char var_11, long long int var_12, short var_13, int zero, unsigned short arr_1 [12] , int arr_3 [12] , short arr_4 [12] [12] [12] ) {
    var_3 = ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */bool) var_4))))))) % (((var_6) ? (var_8) : (((/* implicit */int) var_6))))));
    var_4 = ((/* implicit */unsigned char) ((((/* implicit */bool) std::min((((/* implicit */unsigned long long int) ((short) var_13))), ((-(var_0)))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) std::min(((bool)1), (var_9)))) & (((/* implicit */int) var_3))))));
    var_2 = ((/* implicit */unsigned int) std::max((var_2), (((/* implicit */unsigned int) ((((((/* implicit */bool) ((((/* implicit */bool) (unsigned short)3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)136))))) ? (std::min((var_0), (0ULL))) : (((/* implicit */unsigned long long int) var_12)))) >= (((/* implicit */unsigned long long int) std::min((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (std::min((((/* implicit */long long int) var_4)), (var_12)))))))))));
    /* LoopNest 2 */
    #pragma clang loop unroll(enable)
    for (short i_0 = ((/* implicit */int) ((/* implicit */short) var_5))/*0*/; i_0 < (short)12/*12*/; i_0 += (short)3/*3*/) 
    {
        for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) var_1))) + (26))/*1*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) std::max((arr_1 [i_0]), (std::max((arr_1 [i_0]), (arr_1 [i_0]))))))) + (25))/*11*/; i_1 += (signed char)3/*3*/) 
        {
            {
                if (((/* implicit */bool) (-((+(((/* implicit */int) var_11)))))))
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) std::min((std::min((std::max((13ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 1] [i_1 + 1])))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                    var_17 = ((/* implicit */unsigned int) (short)-7056);
                    var_18 = ((((/* implicit */bool) arr_3 [i_1 + 1])) ? (((/* implicit */unsigned int) std::max((arr_3 [i_1 + 1]), (((/* implicit */int) (bool)1))))) : (std::min((((/* implicit */unsigned int) arr_3 [i_1 + 1])), (var_17))));
                }

                var_1 ^= ((/* implicit */unsigned char) 18446744073709551615ULL);
            }
        } 
    } 
}
