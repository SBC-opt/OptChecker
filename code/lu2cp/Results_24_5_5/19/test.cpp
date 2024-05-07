/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 968764169
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(short var_2, int var_3, unsigned long long int var_4, long long int var_5, short var_7, signed char var_8, unsigned long long int var_9, bool var_10, short var_12, long long int var_14, int zero, unsigned short arr_0 [25] [25] , unsigned short arr_1 [25] [25] , unsigned short arr_5 [16] [16] , unsigned long long int arr_7 [16] [16] , short arr_8 [16] ) {
    /* LoopSeq 3 */


    for (short i_0 = (short)0/*0*/; i_0 < (short)25/*25*/; i_0 += ((((/* implicit */int) var_2)) - (3072))/*-2048*/) 
    {
        arr_2 [i_0] [(unsigned char)8] = ((/* implicit */unsigned int) ((unsigned short) (((~(((/* implicit */int) var_12)))) != (((((/* implicit */bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(bool)1] [5U])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_5 ^= ((/* implicit */long long int) ((((/* implicit */bool) ((((/* implicit */bool) arr_0 [i_0] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (unsigned short)52097)) : (((var_3) + (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (((10465035726367201673ULL) / (((/* implicit */unsigned long long int) -867481779)))))) - (((/* implicit */unsigned long long int) (+(((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (29900))))))))));
    }
    /* vectorizable */
    for (bool i_1 = (bool)0/*0*/; i_1 < (bool)1/*1*/; i_1 += (bool)1/*1*/) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) arr_1 [i_1] [i_1]);
        var_2 &= ((/* implicit */short) ((unsigned int) (unsigned short)58808));
    }

    for (bool i_2 = (bool)0/*0*/; i_2 < (bool)1/*1*/; i_2 += (bool)1/*1*/) /* same iter space */
    {
        if (((((/* implicit */int) (unsigned short)15648)) < (std::max((((/* implicit */int) (unsigned short)127)), (var_3)))))
        {
            var_14 = ((/* implicit */long long int) std::max((var_14), (((/* implicit */long long int) (~(((/* implicit */int) ((short) (unsigned short)7388))))))));
            var_19 &= ((/* implicit */bool) ((((/* implicit */int) arr_0 [i_2] [(unsigned short)21])) - (((/* implicit */int) ((short) (+(14581796793888364076ULL)))))));
            var_8 = ((/* implicit */signed char) (unsigned short)58808);
            var_9 = ((/* implicit */unsigned long long int) std::min((var_9), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)9996)))));
            arr_9 [(short)8] = ((/* implicit */unsigned char) std::max(((-(((/* implicit */int) ((var_3) <= (((/* implicit */int) (short)19027))))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)40309)) % (((/* implicit */int) arr_0 [i_2] [i_2]))))))));
        }

        var_22 = arr_5 [i_2] [i_2];
        arr_10 [i_2] &= ((/* implicit */bool) std::max((arr_7 [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_8 [(unsigned short)1]))));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */bool) ((((/* implicit */unsigned long long int) ((((/* implicit */bool) var_14)) ? (((/* implicit */int) (unsigned short)15648)) : (((/* implicit */int) (unsigned char)148))))) ^ (((var_19) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_22))) : (var_4)))))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) ((unsigned char) 18446744073709551599ULL)))))));
}
