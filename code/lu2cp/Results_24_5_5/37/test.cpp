/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 699381105
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned int var_0, short var_1, long long int var_2, int var_3, bool var_4, unsigned char var_5, unsigned long long int var_6, bool var_7, unsigned char var_8, signed char var_9, long long int var_10, int var_11, int var_12, short var_13, signed char var_14, unsigned int var_15, int var_16, long long int var_17, unsigned long long int var_18, int zero, int arr_0 [19] , unsigned int arr_1 [19] , unsigned char arr_2 [19] , unsigned char arr_3 [19] , unsigned int arr_5 [19] , unsigned short arr_6 [21] , long long int arr_7 [21] [21] , unsigned long long int arr_8 [24] , long long int arr_9 [24] , unsigned short arr_11 [14] ) {
    var_14 = ((/* implicit */signed char) std::max((var_14), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */bool) var_8))))) >= (((/* implicit */int) (unsigned char)218)))))));
    var_2 = (~(var_2));
    var_7 = ((/* implicit */bool) var_18);
    if ((!(((/* implicit */bool) ((unsigned char) ((((/* implicit */bool) var_14)) ? (var_16) : (((/* implicit */int) var_1))))))))
    {
        var_22 = ((/* implicit */unsigned int) var_17);
        /* LoopSeq 3 */
        for (signed char i_0 = ((((/* implicit */int) ((/* implicit */signed char) var_22))) - (84))/*2*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) var_18))) - (7))/*18*/; i_0 += (signed char)4/*4*/) /* same iter space */
        {
            var_0 = ((/* implicit */unsigned int) ((((/* implicit */bool) (((!(((/* implicit */bool) var_0)))) ? ((-(3061612695U))) : (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((((/* implicit */bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49))) / (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) : ((-(var_6)))))));
            var_4 = ((/* implicit */bool) ((((/* implicit */bool) var_22)) ? ((~(((/* implicit */int) (bool)1)))) : (((/* implicit */int) ((std::min((var_0), (((/* implicit */unsigned int) (unsigned char)215)))) >= (((unsigned int) arr_1 [i_0])))))));
        }



        for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) var_22))) - (84))/*2*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) var_18))) - (7))/*18*/; i_1 += (signed char)4/*4*/) /* same iter space */
        {
            var_25 = ((/* implicit */short) var_12);
            var_26 = ((/* implicit */long long int) std::min((var_26), (((/* implicit */long long int) arr_3 [i_1]))));
            var_6 = ((/* implicit */unsigned long long int) std::max((((((/* implicit */bool) arr_3 [i_1 + 1])) ? ((-(((/* implicit */int) arr_3 [i_1])))) : (((int) var_15)))), (((/* implicit */int) ((signed char) arr_3 [i_1 + 1])))));
            var_28 = ((/* implicit */long long int) arr_0 [i_1]);
        }
        for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) var_22))) - (84))/*2*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) var_18))) - (7))/*18*/; i_2 += (signed char)4/*4*/) /* same iter space */
        {
            var_29 = ((/* implicit */int) arr_5 [i_2 - 1]);
            var_30 += ((/* implicit */unsigned long long int) (unsigned char)40);
            var_0 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_3 [i_2 + 1])))) == (((((/* implicit */bool) arr_2 [i_2 + 1])) ? (((/* implicit */int) (bool)1)) : (((/* implicit */int) arr_2 [i_2 - 1]))))));
        }
        var_16 = ((/* implicit */int) ((((unsigned int) (short)-1)) | (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
        var_13 = ((/* implicit */short) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_7))));
        var_34 = ((/* implicit */int) var_28);
    }

    /* LoopSeq 3 */
    /* vectorizable */

    for (signed char i_3 = (signed char)0/*0*/; i_3 < (signed char)21/*21*/; i_3 += (signed char)1/*1*/) 
    {
        if (((/* implicit */bool) 5445493477039018040ULL))
        {
            var_13 = ((/* implicit */short) std::max((var_13), (((/* implicit */short) ((((/* implicit */int) arr_6 [i_3])) | (((/* implicit */int) var_25)))))));
            var_1 = ((/* implicit */short) (+(((/* implicit */int) var_13))));
            var_8 = ((/* implicit */unsigned char) var_13);
            var_38 = ((/* implicit */unsigned int) ((int) arr_6 [i_3]));
            var_6 = ((/* implicit */unsigned long long int) (+(((((/* implicit */bool) arr_6 [i_3])) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) var_25))))));
        }

        var_40 = ((/* implicit */unsigned short) std::min((var_40), (((/* implicit */unsigned short) ((((/* implicit */bool) ((((/* implicit */bool) var_3)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */bool) arr_7 [i_3] [14U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))) : (var_26))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
        var_41 = ((/* implicit */signed char) (-(var_11)));
    }
    /* vectorizable */

    for (signed char i_4 = (signed char)0/*0*/; i_4 < (signed char)24/*24*/; i_4 += ((((/* implicit */int) ((/* implicit */signed char) var_5))) - (54))/*4*/) 
    {
        if (((/* implicit */bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (bool)1))) > (var_10)))))
        {
            var_2 = ((/* implicit */long long int) std::min((var_2), (((/* implicit */long long int) ((((/* implicit */bool) (~(((/* implicit */int) (unsigned char)41))))) ? (((/* implicit */int) (unsigned short)61106)) : ((+(var_29))))))));
            var_4 = ((/* implicit */bool) ((((((/* implicit */bool) arr_9 [i_4])) ? (((/* implicit */int) (short)8)) : (var_16))) << (((arr_9 [i_4]) + (1687589364875653145LL)))));
        }

        var_2 = ((((var_26) == (((/* implicit */long long int) ((/* implicit */int) (short)19826))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 2147483647)))) : (var_2));
        var_45 = ((/* implicit */unsigned long long int) var_14);
        var_13 = ((/* implicit */short) arr_8 [i_4]);
    }


    for (signed char i_5 = (signed char)0/*0*/; i_5 < ((((/* implicit */int) var_9)) - (1))/*14*/; i_5 += (signed char)1/*1*/) 
    {
        var_0 = ((/* implicit */unsigned int) (-(std::max((((((/* implicit */bool) arr_11 [i_5])) ? (var_11) : (-100361075))), (((((/* implicit */int) (unsigned char)117)) << (((((/* implicit */int) (short)-1)) + (12)))))))));
        var_48 -= (-(((/* implicit */int) ((unsigned char) arr_3 [i_5]))));
        var_49 = ((/* implicit */unsigned long long int) std::max((((((/* implicit */bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26673))) : (((((/* implicit */bool) (unsigned char)89)) ? (var_10) : (((/* implicit */long long int) arr_1 [i_5])))))), (((/* implicit */long long int) arr_6 [i_5]))));
    }
}
