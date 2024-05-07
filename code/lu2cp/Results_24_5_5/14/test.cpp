/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 2085114521
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(short var_0, short var_1, int var_2, unsigned char var_3, long long int var_4, long long int var_5, unsigned char var_6, signed char var_7, signed char var_8, int var_9, unsigned short var_10, int var_11, unsigned char var_12, short var_13, unsigned short var_14, signed char var_16, int zero, unsigned int arr_0 [16] [16] , unsigned int arr_1 [16] , long long int arr_2 [25] , short arr_3 [25] , unsigned short arr_4 [25] , int arr_7 [22] , long long int arr_8 [22] [22] ) {
    var_14 &= ((/* implicit */unsigned short) var_6);
    /* LoopSeq 3 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */bool) (+(std::min((var_5), (((/* implicit */long long int) var_13))))))) ? (std::min((((((/* implicit */bool) var_12)) ? (6059933389822094552LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-70))))), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) - (95))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_13))) - (44695))/*15*/; i_0 += (unsigned short)1/*1*/) 
    {
        if (((/* implicit */bool) (-(((/* implicit */int) (signed char)70)))))
        {
            var_0 = ((/* implicit */short) std::min((var_0), (((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_11)))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (arr_0 [i_0] [i_0]))))))))));
            var_2 = ((/* implicit */int) std::max((((3222533792U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned int) -1029856718))));
            var_20 -= ((((((/* implicit */bool) ((signed char) -979486019906409220LL))) ? (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 - 1])) : (var_4))) <= (((/* implicit */long long int) ((((((/* implicit */bool) 6059933389822094562LL)) ? (arr_1 [i_0]) : (arr_0 [i_0 - 1] [i_0]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)32))))))));
            var_10 = ((/* implicit */unsigned short) -6059933389822094558LL);
        }

        var_22 = ((/* implicit */unsigned short) std::min((var_22), (((/* implicit */unsigned short) ((((/* implicit */bool) std::max((4294967295U), (2047U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((bool) 4294965272U)))) : (((unsigned int) std::min((((/* implicit */unsigned int) var_0)), (arr_1 [i_0 + 1])))))))));
    }

    for (signed char i_1 = (signed char)3/*3*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) var_3))) + (142))/*23*/; i_1 += (signed char)4/*4*/) 
    {
        var_23 = ((/* implicit */long long int) std::min((var_23), (((/* implicit */long long int) arr_3 [i_1 + 1]))));
        arr_5 [i_1] = ((/* implicit */unsigned short) std::max((((((/* implicit */bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (signed char)-31))));
        arr_6 [i_1 + 1] = ((/* implicit */bool) ((((/* implicit */bool) ((unsigned short) std::min((arr_2 [i_1 - 3]), (((/* implicit */long long int) arr_4 [i_1 - 1])))))) ? (((-6059933389822094524LL) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 2]))))) : (((((/* implicit */bool) ((((/* implicit */bool) (signed char)31)) ? (var_23) : (var_23)))) ? (((/* implicit */long long int) ((((/* implicit */bool) (signed char)46)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_1]))))) : (std::max((var_4), (((/* implicit */long long int) var_2))))))));
    }
    /* vectorizable */
    for (bool i_2 = ((/* implicit */int) ((/* implicit */bool) (~(((((/* implicit */bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))))/*1*/; i_2 < (bool)1/*1*/; i_2 += ((/* implicit */int) ((/* implicit */bool) var_14))/*1*/) 
    {
        arr_9 [i_2 - 1] [i_2 - 1] &= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_22))) | (2047U))) >> (((/* implicit */int) ((((/* implicit */bool) -979486019906409220LL)) && (((/* implicit */bool) var_6)))))));
        var_10 = ((/* implicit */unsigned short) std::max((var_10), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) var_6)))) ? (((/* implicit */unsigned int) ((arr_7 [i_2]) & (var_9)))) : (((unsigned int) var_10)))))));
        var_9 = ((/* implicit */int) std::max((var_9), (((/* implicit */int) ((((/* implicit */bool) (unsigned short)24479)) ? (arr_2 [i_2 - 1]) : (((((/* implicit */bool) (signed char)-104)) ? (((/* implicit */long long int) var_11)) : (arr_8 [i_2] [i_2]))))))));
    }
}
