/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 730817530
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned char var_1, unsigned short var_2, short var_3, bool var_4, unsigned long long int var_5, unsigned char var_6, unsigned long long int var_7, unsigned char var_8, long long int var_9, int var_10, int zero, long long int arr_0 [23] , int arr_1 [23] , bool arr_3 [23] [23] , short arr_4 [23] , signed char arr_6 [23] [23] ) {
    var_9 = ((/* implicit */long long int) ((((/* implicit */bool) var_6)) && (((/* implicit */bool) var_3))));
    /* LoopSeq 3 */


    for (unsigned int i_0 = 0U/*0*/; i_0 < 23U/*23*/; i_0 += ((/* implicit */unsigned int) var_9)/*1*/) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_1 = ((/* implicit */unsigned char) ((arr_0 [i_0]) / (((/* implicit */long long int) arr_1 [i_0]))));
        var_3 += ((/* implicit */short) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 0U/*0*/; i_1 < 23U/*23*/; i_1 += ((/* implicit */unsigned int) var_9)/*1*/) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) std::min((((/* implicit */unsigned long long int) (+((-(arr_1 [i_1])))))), (var_5)));
        if (((/* implicit */bool) (unsigned short)55077))
        {
            var_14 = ((/* implicit */unsigned long long int) ((bool) (((((bool)1) || (arr_3 [i_1] [i_1]))) || (((/* implicit */bool) ((unsigned short) (unsigned char)252))))));
            var_2 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (bool)1))));
        }

        var_16 *= ((/* implicit */unsigned char) (+(std::min((var_10), (arr_1 [i_1])))));
    }
    for (unsigned int i_2 = 0U/*0*/; i_2 < 23U/*23*/; i_2 += ((/* implicit */unsigned int) var_9)/*1*/) /* same iter space */
    {
        var_4 = ((/* implicit */bool) 16187375023733520609ULL);
        arr_9 [i_2] = ((((/* implicit */bool) arr_0 [i_2])) ? (((int) (bool)1)) : (std::min((((/* implicit */int) arr_6 [i_2] [i_2])), (std::max((((/* implicit */int) (bool)0)), (1166386472))))));
        if (((/* implicit */bool) var_5))
        {
            var_8 = ((/* implicit */unsigned char) std::max((var_8), (((/* implicit */unsigned char) ((var_14) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))))))));
            var_19 = ((/* implicit */int) (+(((unsigned int) var_7))));
            arr_10 [i_2] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11940))) >= (2247863636U))))))));
            arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */bool) (~(((/* implicit */int) var_6))))) || (var_4)));
        }

    }
}
