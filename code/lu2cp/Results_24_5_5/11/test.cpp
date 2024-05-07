/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 2074402791
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned int var_0, signed char var_1, signed char var_2, bool var_3, bool var_4, signed char var_5, signed char var_6, signed char var_7, short var_8, int var_9, unsigned int var_10, signed char var_12, signed char var_13, unsigned int var_14, unsigned int var_15, bool var_16, int zero, short arr_0 [25] , int arr_1 [25] , short arr_2 [25] , short arr_3 [25] , long long int arr_8 [15] , unsigned int arr_10 [15] ) {
    /* LoopSeq 2 */



    for (unsigned char i_0 = (unsigned char)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_5))) + (8))/*25*/; i_0 += (unsigned char)3/*3*/) 
    {
        if (((bool) ((unsigned int) var_8)))
        {
            var_14 -= ((/* implicit */unsigned int) arr_0 [i_0]);
            arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) std::min((arr_2 [i_0]), (((/* implicit */short) var_7))))) < (((/* implicit */int) (!(((/* implicit */bool) arr_2 [i_0])))))));
            var_0 += ((/* implicit */unsigned int) arr_2 [(bool)1]);
        }

        var_2 *= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-87))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (bool)1)) - (-464988052)));
        arr_6 [i_0] [i_0] = std::min((((/* implicit */signed char) ((bool) arr_3 [i_0]))), (std::min(((signed char)98), (((/* implicit */signed char) (bool)1)))));
    }
    for (bool i_1 = (bool)0/*0*/; i_1 < (bool)1/*1*/; i_1 += ((/* implicit */int) var_3)/*1*/) 
    {
        var_20 ^= ((/* implicit */unsigned int) std::min(((-(((((/* implicit */int) arr_2 [(unsigned char)8])) - (((/* implicit */int) (signed char)-90)))))), (((/* implicit */int) (!(((/* implicit */bool) std::min((((/* implicit */long long int) arr_1 [i_1])), (arr_8 [i_1])))))))));
        var_21 = ((/* implicit */short) std::max((var_21), (((/* implicit */short) (!(((/* implicit */bool) ((((/* implicit */bool) arr_3 [i_1])) ? (((((/* implicit */bool) arr_1 [i_1])) ? (arr_8 [i_1]) : (((/* implicit */long long int) var_20)))) : (((/* implicit */long long int) arr_10 [i_1]))))))))));
    }
    var_22 = ((/* implicit */signed char) var_16);
    var_23 = ((/* implicit */unsigned short) ((unsigned int) var_1));
    if (((/* implicit */bool) (+(((/* implicit */int) (!(((/* implicit */bool) 1368713457))))))))
    {
        var_4 *= ((/* implicit */bool) ((((-2120286066) + (2147483647))) >> (((((/* implicit */int) var_7)) + (101)))));
        var_12 = ((/* implicit */signed char) std::max((var_12), (((/* implicit */signed char) ((long long int) (signed char)98)))));
        var_13 += ((/* implicit */signed char) ((((/* implicit */unsigned int) (((~(((/* implicit */int) var_1)))) - (((/* implicit */int) ((bool) var_0)))))) & (((((/* implicit */bool) ((long long int) var_16))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    }

    if (((((/* implicit */bool) (((+(var_9))) << (((((/* implicit */int) (bool)1)) / (((/* implicit */int) (signed char)-110))))))) || (((/* implicit */bool) std::min(((unsigned char)220), (((/* implicit */unsigned char) ((signed char) var_9))))))))
    {
        /* LoopSeq 1 */


        for (int i_2 = ((((/* implicit */int) (~((((~(var_14))) & (((((/* implicit */bool) var_21)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_14)))))))) + (1))/*0*/; i_2 < ((((std::max((((/* implicit */int) var_21)), ((~(((/* implicit */int) var_2)))))) + (((/* implicit */int) var_1)))) - (81))/*41*/; i_2 += ((((/* implicit */int) var_7)) + (98))/*1*/) 
        {
            var_2 = ((/* implicit */signed char) std::min(((~(((/* implicit */int) arr_3 [i_2])))), (((/* implicit */int) std::min((((/* implicit */short) (bool)1)), (arr_3 [i_2]))))));
            var_28 = ((/* implicit */unsigned char) std::min((var_28), (((/* implicit */unsigned char) var_23))));
        }
        var_8 = var_21;
    }
    else
    {
        var_1 = var_5;
        var_10 += ((((/* implicit */unsigned int) ((((/* implicit */bool) std::max((var_8), (var_21)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_23))) >= (2617537466U)))) : (((((/* implicit */bool) var_0)) ? (((/* implicit */int) var_21)) : (((/* implicit */int) (bool)0))))))) ^ (((unsigned int) (bool)1)));
        var_32 &= ((/* implicit */unsigned char) ((((/* implicit */int) (bool)1)) ^ (((/* implicit */int) (signed char)92))));
        var_5 = std::max((((/* implicit */signed char) var_3)), ((signed char)(-127 - 1)));
    }

}
