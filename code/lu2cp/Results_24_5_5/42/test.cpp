/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 2835528174
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned short var_0, short var_1, int var_2, long long int var_3, int var_4, unsigned short var_5, unsigned short var_6, unsigned long long int var_7, bool var_8, int var_9, bool var_11, int zero, signed char arr_0 [14] , unsigned char arr_1 [14] [14] , int arr_2 [14] , unsigned long long int arr_3 [13] [13] , long long int arr_5 [21] , unsigned short arr_6 [21] [21] , unsigned int arr_10 [19] [19] ) {
    var_8 = ((/* implicit */bool) ((((/* implicit */bool) (short)18244)) ? (((/* implicit */int) var_11)) : (((((/* implicit */bool) ((6881541379507059887ULL) * (((/* implicit */unsigned long long int) var_2))))) ? (std::max((((/* implicit */int) (short)4845)), (var_4))) : (((/* implicit */int) (short)-18245))))));
    var_3 = ((/* implicit */long long int) (!(((/* implicit */bool) var_7))));
    /* LoopSeq 4 */


    for (long long int i_0 = ((((/* implicit */long long int) var_4)) + (1198393421LL))/*0*/; i_0 < ((((/* implicit */long long int) var_6)) - (62950LL))/*1251*/; i_0 += ((((/* implicit */long long int) ((((var_2) + (2147483647))) >> (((((/* implicit */int) std::min((std::min(((unsigned short)23380), (((/* implicit */unsigned short) (short)4845)))), (var_6)))) - (4826)))))) - (3988LL))/*3*/) 
    {
        var_0 = (unsigned short)15;
        var_16 = ((/* implicit */unsigned short) std::min((var_16), (((/* implicit */unsigned short) arr_1 [i_0] [(unsigned char)8]))));
        var_0 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_0 [i_0])))) - (((((/* implicit */int) (unsigned short)0)) ^ (arr_2 [i_0])))));
    }
    /* vectorizable */

    for (unsigned char i_1 = ((((/* implicit */int) ((/* implicit */unsigned char) var_7))) - (183))/*2*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned char) var_6))) - (233))/*-32*/; i_1 += (unsigned char)4/*4*/) 
    {
        var_0 = ((/* implicit */unsigned short) (-(arr_2 [i_1])));
        var_0 = ((/* implicit */unsigned short) ((arr_3 [i_1 - 2] [i_1 - 1]) ^ (((/* implicit */unsigned long long int) var_4))));
    }
    /* vectorizable */

    for (unsigned long long int i_2 = 0ULL/*0*/; i_2 < ((((/* implicit */unsigned long long int) var_1)) - (18446744073709528486ULL))/*21*/; i_2 += ((((/* implicit */unsigned long long int) ((((18446744073709551611ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) != (((/* implicit */unsigned long long int) var_9))))) + (2ULL))/*3*/) 
    {
        var_6 = ((/* implicit */unsigned short) ((((/* implicit */bool) arr_6 [i_2] [10U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (arr_5 [i_2])));
        if (((/* implicit */bool) ((((/* implicit */bool) -3036084727227825058LL)) ? (3036084727227825076LL) : (((/* implicit */long long int) 839623441U)))))
        {
            arr_7 [i_2] = ((/* implicit */unsigned int) ((arr_5 [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2])))));
            arr_8 [i_2] = ((/* implicit */signed char) (bool)1);
            var_2 = ((/* implicit */int) std::min((var_2), (((((/* implicit */bool) ((((/* implicit */bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) : (10721074870176935386ULL)))) ? (((/* implicit */int) (short)18233)) : (((/* implicit */int) var_6))))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (3036084727227825057LL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_2] [i_2]))));
        }

    }
    /* vectorizable */


    for (int i_3 = 1/*1*/; i_3 < ((((/* implicit */int) (!(((/* implicit */bool) var_22))))) + (18))/*18*/; i_3 += ((((((((/* implicit */bool) 4114615926U)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) (unsigned short)30964)))) * (((/* implicit */int) var_5)))) - (13174932))/*4*/) 
    {
        var_11 = ((arr_5 [i_3]) < (arr_5 [i_3 - 1]));
        var_24 -= (+(((/* implicit */int) var_11)));
        arr_11 [(bool)1] |= ((/* implicit */unsigned short) arr_5 [i_3]);
        var_9 = ((/* implicit */int) std::max((var_9), (((/* implicit */int) ((((((/* implicit */bool) 29360128U)) ? (arr_5 [9ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (((/* implicit */long long int) arr_10 [i_3] [i_3 - 1])))))));
    }
}
