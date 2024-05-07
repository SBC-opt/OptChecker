/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 2538723526
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(signed char var_0, unsigned long long int var_1, short var_2, unsigned long long int var_4, signed char var_7, short var_8, short var_9, unsigned int var_10, signed char var_12, signed char var_14, unsigned long long int var_15, unsigned int var_17, bool var_18, int zero, short arr_0 [18] , bool arr_1 [18] [18] , unsigned int arr_2 [18] , unsigned long long int arr_5 [14] ) {
    var_14 = ((/* implicit */signed char) ((((/* implicit */bool) std::min((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), (((((/* implicit */bool) (signed char)127)) ? (var_10) : (var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */bool) ((var_1) >> (((((/* implicit */int) var_9)) - (622)))))))))) : (((var_4) >> (((/* implicit */int) std::min((var_7), (((/* implicit */signed char) var_18)))))))));
    /* LoopSeq 3 */



    for (unsigned int i_0 = ((((/* implicit */unsigned int) std::min((var_2), (var_2)))) - (4294957364U))/*1*/; i_0 < ((((/* implicit */unsigned int) var_12)) - (97U))/*18*/; i_0 += 4U/*4*/) 
    {
        var_2 ^= ((/* implicit */short) (+(((/* implicit */int) (((~(arr_2 [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */short) ((bool) ((unsigned long long int) (short)-1)));
        if (((/* implicit */bool) var_8))
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */bool) arr_0 [i_0])))))) >= (std::min((((arr_2 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((unsigned int) arr_0 [i_0]))))));
            var_7 = ((/* implicit */signed char) ((unsigned long long int) ((((384439013U) != (arr_2 [i_0]))) || (((/* implicit */bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            var_22 = (-((((+(var_15))) + (((/* implicit */unsigned long long int) std::min((arr_2 [i_0]), (arr_2 [i_0])))))));
            var_1 = ((/* implicit */unsigned long long int) (~(((((/* implicit */bool) ((((/* implicit */int) arr_0 [i_0])) << (((arr_2 [i_0]) - (661504191U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) : (std::max((3910528283U), (arr_2 [i_0])))))));
            var_0 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0])))) + (((/* implicit */int) ((short) 2097151ULL)))));
        }

    }
    for (unsigned long long int i_1 = 0ULL/*0*/; i_1 < ((std::max((2097151ULL), (((/* implicit */unsigned long long int) (+(3910528282U)))))) - (3910528268ULL))/*14*/; i_1 += (((~(((((/* implicit */bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */bool) 10793464912301153899ULL)))))) : (((((/* implicit */bool) var_1)) ? (10793464912301153873ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))) - (18446744073709551612ULL))/*3*/) 
    {
        var_9 -= ((/* implicit */short) ((((/* implicit */bool) (-(1073733632U)))) && (((/* implicit */bool) 3910528282U))));
        var_4 = ((/* implicit */unsigned long long int) std::min((var_4), (((/* implicit */unsigned long long int) ((((bool) ((unsigned int) var_14))) ? (((/* implicit */int) (!(((/* implicit */bool) (short)-8352))))) : (((/* implicit */int) (!(((/* implicit */bool) std::min((4294967040U), (((/* implicit */unsigned int) arr_1 [i_1] [i_1])))))))))))));
    }
    /* vectorizable */

    for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */bool) var_7))))))))) + (1))/*0*/; i_2 < ((((/* implicit */int) var_7)) + (11))/*12*/; i_2 += ((((/* implicit */int) ((/* implicit */signed char) var_10))) - (76))/*3*/) 
    {
        var_27 = ((/* implicit */signed char) (~(arr_5 [i_2])));
        var_28 = ((/* implicit */unsigned int) var_22);
        var_29 -= ((/* implicit */bool) (~(arr_5 [i_2])));
    }
}
