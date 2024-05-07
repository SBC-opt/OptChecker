/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 599074880
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned char var_0, unsigned char var_1, unsigned short var_2, unsigned char var_3, int var_4, bool var_6, signed char var_7, long long int var_8, signed char var_11, unsigned short var_13, signed char var_14, bool var_15, unsigned int var_16, unsigned long long int var_18, int zero, signed char arr_1 [22] [22] , unsigned char arr_4 [22] [22] , signed char arr_5 [22] , bool arr_6 [22] , unsigned long long int arr_12 [17] [17] , unsigned char arr_14 [24] [24] ) {
    /* LoopSeq 2 */


    for (bool i_0 = ((((/* implicit */int) ((/* implicit */bool) ((((/* implicit */bool) (unsigned short)11743)) ? (((/* implicit */int) (unsigned short)34881)) : (((/* implicit */int) (bool)1)))))) - (1))/*0*/; i_0 < ((/* implicit */int) var_6)/*1*/; i_0 += (bool)1/*1*/) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_3);
        var_14 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] [7LL] = ((/* implicit */signed char) std::min((std::max((((((/* implicit */bool) (unsigned short)42550)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) std::min(((short)-4096), ((short)361)))))), (((/* implicit */unsigned int) var_13))));
    }

    for (bool i_1 = ((((/* implicit */int) ((/* implicit */bool) ((((/* implicit */bool) (unsigned short)11743)) ? (((/* implicit */int) (unsigned short)34881)) : (((/* implicit */int) (bool)1)))))) - (1))/*0*/; i_1 < ((/* implicit */int) var_6)/*1*/; i_1 += (bool)1/*1*/) /* same iter space */
    {
        if (((((/* implicit */bool) (short)4096)) || (((/* implicit */bool) (unsigned char)99))))
        {
            var_2 ^= (unsigned short)16;
            var_7 = ((/* implicit */signed char) ((((/* implicit */bool) var_4)) ? ((+(((/* implicit */int) (short)-362)))) : (((/* implicit */int) arr_6 [i_1]))));
            arr_7 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */bool) std::max(((-(((/* implicit */int) var_14)))), (((((/* implicit */bool) arr_1 [(short)17] [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)29432)))))))));
        }
        else
        {
            arr_8 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */bool) arr_1 [i_1] [i_1]))));
            arr_9 [i_1] = ((/* implicit */unsigned int) std::max((((/* implicit */int) std::max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [(bool)1])))), (((((/* implicit */int) arr_4 [i_1] [(unsigned char)8])) / (((/* implicit */int) var_11))))));
        }

        var_22 = ((/* implicit */unsigned long long int) (+(std::max((((/* implicit */int) std::min((var_0), (((/* implicit */unsigned char) var_7))))), (((((/* implicit */int) var_3)) | (((/* implicit */int) arr_5 [i_1]))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */


    for (unsigned int i_2 = 1U/*1*/; i_2 < 13U/*13*/; i_2 += 3U/*3*/) 
    {
        var_1 = ((/* implicit */unsigned char) (!(((/* implicit */bool) arr_12 [i_2 + 2] [i_2 - 1]))));
        var_24 = ((/* implicit */unsigned int) std::min((var_24), (((/* implicit */unsigned int) ((((/* implicit */bool) var_8)) ? (arr_12 [0U] [i_2 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)20]))))))));
    }
    for (unsigned int i_3 = ((((/* implicit */unsigned int) (+(((/* implicit */int) std::min((((/* implicit */short) (signed char)74)), ((short)4095))))))) - (74U))/*0*/; i_3 < ((((/* implicit */unsigned int) var_18)) - (3330902307U))/*24*/; i_3 += ((var_16) - (4050710497U))/*1*/) 
    {
        arr_15 [i_3] = ((((/* implicit */bool) std::min((((/* implicit */unsigned char) (signed char)-24)), (arr_14 [i_3] [i_3])))) ? ((-(((/* implicit */int) arr_14 [i_3] [i_3])))) : (((/* implicit */int) std::max((var_1), (arr_14 [i_3] [i_3])))));
        var_6 -= ((/* implicit */bool) std::max((((/* implicit */unsigned int) arr_14 [i_3] [i_3])), (var_24)));
    }
}
