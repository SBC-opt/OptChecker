/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 875528174
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(bool var_0, unsigned char var_1, bool var_2, bool var_3, unsigned short var_4, int var_5, unsigned long long int var_7, unsigned short var_8, unsigned long long int var_9, int zero, unsigned int arr_0 [21] , bool arr_1 [21] [21] , short arr_2 [21] [21] , short arr_3 [21] , signed char arr_7 [15] , short arr_8 [15] [15] ) {
    /* LoopSeq 2 */
    for (signed char i_0 = ((((/* implicit */int) ((/* implicit */signed char) var_9))) - (122))/*3*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) ((bool) ((((/* implicit */bool) -1075169872)) ? (-1075169872) : (((/* implicit */int) (short)-9423))))))) + (18))/*19*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) var_2))) + (3))/*4*/) 
    {
        arr_4 [(unsigned short)8] |= ((/* implicit */short) ((((/* implicit */bool) ((unsigned short) arr_1 [i_0 - 1] [i_0 + 1]))) ? (((/* implicit */int) std::min((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 + 1])))) : (((/* implicit */int) (!(arr_1 [i_0 - 1] [i_0 + 1]))))));
        if (((/* implicit */bool) var_4))
        {
            var_5 *= ((/* implicit */int) std::min((((/* implicit */long long int) (((+(((/* implicit */int) arr_3 [i_0])))) == (((/* implicit */int) arr_2 [i_0] [i_0]))))), (((long long int) arr_1 [i_0 + 1] [i_0]))));
            var_4 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((-6520152561097891750LL) / (((/* implicit */long long int) 756442880U)))))) >> (((((((/* implicit */bool) ((int) var_2))) ? (((/* implicit */long long int) (+(arr_0 [i_0 + 1])))) : ((+(-2591412348966555969LL))))) - (267438307LL)))));
        }

        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */bool) ((((/* implicit */bool) (short)9419)) ? (((/* implicit */int) (short)-25832)) : (((/* implicit */int) (short)9415))))) ? (((/* implicit */int) (!(((/* implicit */bool) ((long long int) (unsigned short)59930)))))) : (((((/* implicit */bool) ((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-9420)))))) ? (std::min((var_5), (((/* implicit */int) arr_1 [(short)14] [i_0])))) : (((/* implicit */int) var_4))))));
    }

    for (long long int i_1 = ((/* implicit */long long int) var_3)/*1*/; i_1 < 12LL/*12*/; i_1 += ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-103))))) - (99LL))/*4*/) 
    {
        arr_10 [i_1] [i_1 + 3] = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]);
        arr_11 [i_1] = ((/* implicit */unsigned short) ((short) arr_8 [i_1] [i_1]));
        arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */bool) (unsigned short)10598)) ? (2304642311U) : (((/* implicit */unsigned int) ((/* implicit */int) (bool)1))))))) << (((((/* implicit */int) std::max((arr_8 [i_1 + 2] [i_1 - 1]), (arr_8 [i_1 + 3] [i_1 - 1])))) + (11714)))));
        var_4 = ((/* implicit */unsigned short) arr_7 [i_1]);
    }
    var_13 = ((/* implicit */long long int) var_0);
    var_1 = ((/* implicit */unsigned char) std::min((var_13), (((/* implicit */long long int) var_8))));
    var_5 = ((/* implicit */int) ((((/* implicit */unsigned long long int) std::max((((/* implicit */long long int) (unsigned short)7979)), (((long long int) -2116969142))))) >= (std::min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */bool) var_7)) ? (((/* implicit */unsigned long long int) -904068676)) : (var_7)))))));
}
