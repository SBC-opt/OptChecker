/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 3034224404
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(signed char var_1, bool var_2, unsigned short var_3, int var_4, bool var_5, signed char var_7, int zero, signed char arr_0 [21] [21] , unsigned long long int arr_1 [21] , unsigned long long int arr_5 [16] , signed char arr_6 [16] [16] , signed char arr_7 [16] ) {
    /* LoopSeq 2 */
    for (bool i_0 = (bool)0/*0*/; i_0 < (bool)1/*1*/; i_0 += ((((/* implicit */int) var_5)) + (1))/*2*/) 
    {
        var_5 = ((/* implicit */bool) (~(((/* implicit */int) (signed char)-118))));
        arr_2 [i_0] = (signed char)-100;
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) - (841788996734154459ULL)));
        var_4 = ((/* implicit */int) (!(((/* implicit */bool) ((((/* implicit */bool) ((signed char) 2147483647))) ? (((var_2) ? (((/* implicit */int) (bool)1)) : (((/* implicit */int) (signed char)-88)))) : (((/* implicit */int) (!(((/* implicit */bool) (signed char)-38))))))))));
        arr_4 [i_0] = ((/* implicit */long long int) var_4);
    }

    for (unsigned short i_1 = (unsigned short)0/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) var_7))) - (65519))/*16*/; i_1 += (unsigned short)3/*3*/) 
    {
        if (((/* implicit */bool) var_1))
        {
            var_4 ^= ((/* implicit */int) (+(((arr_5 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77)))))));
            var_13 = ((/* implicit */bool) ((((/* implicit */bool) ((((/* implicit */bool) ((((/* implicit */bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (bool)1))) : (arr_1 [2ULL])))) ? ((~(((/* implicit */int) (signed char)-109)))) : (((/* implicit */int) arr_6 [(short)15] [i_1]))))) ? (((((/* implicit */bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_0 [i_1] [(bool)0])))))))));
        }
        else
        {
            var_14 = ((/* implicit */bool) std::max((var_14), (((/* implicit */bool) std::max((((((/* implicit */bool) ((((/* implicit */int) (signed char)-67)) + (((/* implicit */int) (signed char)-88))))) ? (((unsigned int) (signed char)-44)) : (((/* implicit */unsigned int) (-(1998355991)))))), (((((/* implicit */bool) ((((/* implicit */int) (signed char)32)) ^ (((/* implicit */int) (signed char)47))))) ? ((~(1435645950U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_13))))))))))));
            arr_8 [i_1] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_7))))));
            var_15 = ((/* implicit */bool) (~(((/* implicit */int) (signed char)17))));
            var_16 = ((/* implicit */unsigned int) var_5);
        }

        var_2 = (!(((/* implicit */bool) ((short) arr_6 [i_1] [i_1]))));
    }
    var_5 = var_13;
    var_19 = ((/* implicit */unsigned short) (signed char)-39);
}
