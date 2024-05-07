/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 2681253839
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned int var_1, signed char var_2, long long int var_5, unsigned long long int var_6, unsigned short var_7, unsigned long long int var_12, bool var_13, unsigned long long int var_15, unsigned char var_16, long long int var_17, int zero, int arr_0 [24] , unsigned char arr_1 [24] , unsigned short arr_3 [12] [12] , unsigned short arr_4 [12] , unsigned short arr_7 [12] , unsigned char arr_8 [12] [12] , unsigned int arr_11 [12] , int arr_14 [12] ) {
    /* LoopSeq 1 */

    for (unsigned int i_0 = 0U/*0*/; i_0 < 24U/*24*/; i_0 += 1U/*1*/) 
    {
        var_15 = ((/* implicit */unsigned long long int) std::max((var_15), (((/* implicit */unsigned long long int) (signed char)127))));
        arr_2 [(unsigned short)10] &= ((/* implicit */unsigned short) ((((/* implicit */bool) ((std::min((((/* implicit */unsigned long long int) (signed char)83)), (2996723228753376962ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)124))))) | (((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (bool)1)))))));
    }
    var_6 = ((/* implicit */unsigned long long int) (((+((~(((/* implicit */int) (unsigned short)48622)))))) % (((/* implicit */int) ((unsigned short) var_13)))));
    /* LoopSeq 4 */
    for (long long int i_1 = 0LL/*0*/; i_1 < 12LL/*12*/; i_1 += ((((/* implicit */long long int) var_2)) - (58LL))/*2*/) 
    {
        var_6 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_1] [i_1])) == (((((/* implicit */int) (bool)1)) << (((/* implicit */int) (bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */bool) arr_3 [i_1] [i_1]))))) : (((((/* implicit */int) arr_4 [i_1])) & (((((/* implicit */int) (unsigned char)219)) + (((/* implicit */int) arr_1 [i_1]))))))));
        if (((/* implicit */bool) (~(((((/* implicit */bool) (unsigned char)208)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (473381823U))))))
        {
            var_21 += ((/* implicit */bool) std::min((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52119))) ^ (var_17))) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))), (((/* implicit */long long int) (~(var_1))))));
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) std::min((((/* implicit */long long int) ((((/* implicit */bool) ((int) arr_1 [i_1]))) ? ((~(((/* implicit */int) var_21)))) : (((/* implicit */int) std::max(((signed char)44), ((signed char)-127))))))), (((var_5) ^ (((/* implicit */long long int) (~(((/* implicit */int) (bool)1)))))))));
            arr_6 [i_1] = ((/* implicit */int) arr_1 [20U]);
        }

        var_13 = ((/* implicit */bool) ((((/* implicit */bool) arr_4 [i_1])) ? ((~(((/* implicit */int) arr_3 [i_1] [i_1])))) : (((/* implicit */int) ((473381823U) != (((/* implicit */unsigned int) arr_0 [i_1])))))));
    }



    for (unsigned char i_2 = (unsigned char)0/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) ((int) (signed char)-122)))) - (122))/*12*/; i_2 += ((((/* implicit */int) var_16)) - (29))/*3*/) 
    {
        var_23 = ((/* implicit */signed char) 792411722);
        var_5 = ((/* implicit */long long int) ((((/* implicit */bool) ((((/* implicit */bool) ((var_13) ? (((/* implicit */int) (signed char)118)) : (-1574129507)))) ? (((/* implicit */int) var_21)) : ((~(((/* implicit */int) (bool)1))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2])) == (((/* implicit */int) arr_4 [i_2]))))) : (((((/* implicit */int) arr_3 [i_2] [i_2])) + (((/* implicit */int) arr_8 [i_2] [i_2]))))));
        arr_9 [i_2] = std::min((((/* implicit */int) (bool)1)), ((~(((/* implicit */int) arr_3 [i_2] [i_2])))));
        var_25 += ((/* implicit */unsigned int) ((unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) + (var_12))))));
    }

    for (signed char i_3 = ((((/* implicit */int) ((/* implicit */signed char) var_13))) - (1))/*0*/; i_3 < (signed char)12/*12*/; i_3 += (signed char)3/*3*/) 
    {
        arr_12 [(short)4] = ((/* implicit */unsigned long long int) var_5);
        var_26 = ((/* implicit */unsigned long long int) std::max((var_26), (((/* implicit */unsigned long long int) std::min(((+(((/* implicit */int) arr_7 [i_3])))), ((~(((int) arr_8 [i_3] [i_3])))))))));
        var_27 = ((/* implicit */unsigned char) std::max((var_27), (((/* implicit */unsigned char) (-(arr_0 [i_3]))))));
        var_7 = ((/* implicit */unsigned short) std::min((var_7), (((/* implicit */unsigned short) (~(std::max((((/* implicit */unsigned int) (bool)1)), (arr_11 [i_3]))))))));
    }
    /* vectorizable */


    for (unsigned int i_4 = 0U/*0*/; i_4 < ((((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))) - (4294967251U))/*12*/; i_4 += 3U/*3*/) 
    {
        var_29 = ((/* implicit */unsigned int) (-(arr_14 [i_4])));
        var_30 += ((/* implicit */short) ((long long int) (unsigned char)17));
        arr_15 [i_4] = ((/* implicit */bool) (+(arr_14 [i_4])));
    }
}
