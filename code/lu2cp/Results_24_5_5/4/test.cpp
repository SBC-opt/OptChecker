/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 4089043453
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(bool var_0, unsigned int var_2, unsigned short var_3, bool var_5, signed char var_6, int var_10, long long int var_12, bool var_13, bool var_14, int zero, signed char arr_1 [13] , unsigned short arr_2 [13] , unsigned long long int arr_3 [13] [13] , unsigned int arr_6 [13] [13] , int arr_7 [13] , bool arr_13 [10] , unsigned short arr_14 [10] ) {
    var_5 *= ((/* implicit */bool) (~(((/* implicit */int) var_3))));
    var_2 = ((/* implicit */unsigned int) (signed char)-43);
    var_14 = ((/* implicit */bool) var_2);
    var_19 = ((/* implicit */unsigned short) (bool)1);
    /* LoopSeq 4 */

    for (bool i_0 = ((((/* implicit */int) ((/* implicit */bool) std::min(((+(((/* implicit */int) var_19)))), (((/* implicit */int) var_13)))))) - (1))/*0*/; i_0 < ((/* implicit */int) ((/* implicit */bool) var_12))/*1*/; i_0 += ((/* implicit */int) var_14)/*1*/) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (bool)1;
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */bool) (signed char)-16)) ? (((/* implicit */int) (bool)0)) : (((/* implicit */int) (short)3891))));
    }


    for (bool i_1 = ((((/* implicit */int) ((/* implicit */bool) std::min(((+(((/* implicit */int) var_19)))), (((/* implicit */int) var_13)))))) - (1))/*0*/; i_1 < ((/* implicit */int) ((/* implicit */bool) var_12))/*1*/; i_1 += ((/* implicit */int) var_14)/*1*/) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((long long int) (~((((bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (bool)1)))))));
        arr_8 [i_1] = ((/* implicit */signed char) std::max((std::min((((/* implicit */int) ((var_13) || (((/* implicit */bool) (signed char)8))))), (((((/* implicit */bool) var_19)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)-11)))))), (((/* implicit */int) ((((/* implicit */int) ((var_0) && (((/* implicit */bool) var_10))))) < (arr_7 [i_1]))))));
        arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) << (((((/* implicit */int) arr_2 [i_1])) - (59270)))));
        if (((/* implicit */bool) ((unsigned int) ((arr_7 [(short)4]) != (((/* implicit */int) (unsigned char)172))))))
        {
            var_21 = ((/* implicit */bool) std::max((var_21), (((/* implicit */bool) ((signed char) std::max((arr_2 [i_1]), (((/* implicit */unsigned short) arr_1 [i_1]))))))));
            arr_10 [i_1] = ((/* implicit */short) ((((((/* implicit */bool) (((bool)1) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126)))))) && (((((/* implicit */bool) (signed char)-126)) || ((bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : ((~(arr_3 [i_1] [i_1])))));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) std::min((((/* implicit */int) ((var_13) && (((/* implicit */bool) arr_7 [i_1]))))), (std::max((((/* implicit */int) arr_2 [i_1])), (arr_7 [i_1])))));
            arr_12 [i_1] = (!(((/* implicit */bool) std::min((-2147483631), (((/* implicit */int) var_5))))));
        }

    }
    /* vectorizable */


    for (long long int i_2 = 0LL/*0*/; i_2 < 10LL/*10*/; i_2 += 1LL/*1*/) 
    {
        var_22 = ((/* implicit */signed char) std::max((var_22), (((/* implicit */signed char) ((5428999035365605565LL) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2]))))))));
        arr_16 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */bool) arr_14 [(short)8])) && (((/* implicit */bool) arr_2 [(short)11])))))));
    }
    for (unsigned int i_3 = ((((/* implicit */unsigned int) var_20)) - (65534U))/*0*/; i_3 < ((var_2) - (4294967242U))/*11*/; i_3 += ((((/* implicit */unsigned int) var_6)) - (4294967178U))/*3*/) 
    {
        var_23 = ((/* implicit */unsigned short) (bool)1);
        var_14 = ((/* implicit */bool) ((((/* implicit */bool) std::min((((/* implicit */unsigned long long int) (signed char)-2)), (12348113356627144187ULL)))) ? (-1467431089) : ((~(((/* implicit */int) std::max((((/* implicit */unsigned short) (bool)1)), (var_3))))))));
        arr_19 [i_3] = ((/* implicit */unsigned short) (((!(((((/* implicit */bool) (short)(-32767 - 1))) || (((/* implicit */bool) (signed char)71)))))) || (((/* implicit */bool) (unsigned short)0))));
    }
}
