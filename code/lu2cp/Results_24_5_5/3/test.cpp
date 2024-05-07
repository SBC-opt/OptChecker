/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 2046020751
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned char var_1, short var_2, unsigned char var_3, unsigned long long int var_4, unsigned char var_5, long long int var_6, unsigned char var_7, int var_9, unsigned char var_10, unsigned short var_11, unsigned long long int var_12, signed char var_13, int zero, unsigned char arr_0 [25] , unsigned char arr_1 [25] [25] , signed char arr_3 [12] , unsigned long long int arr_4 [12] [12] ) {
    var_3 = var_1;
    var_4 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) var_1)) - (245ULL))/*2*/; i_0 < ((((var_12) * (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_11)))) / (std::max((((/* implicit */int) var_5)), (var_9)))))))) + (23ULL))/*23*/; i_0 += ((var_12) - (11679457146629445535ULL))/*1*/) 
    {
        var_2 = ((/* implicit */short) std::max((((((/* implicit */int) var_13)) == (var_9))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (4294967295U))) < (((/* implicit */unsigned int) ((((/* implicit */bool) var_2)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (signed char)127)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_0 [i_0 + 1]))))) ^ (((((/* implicit */bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 1]))))));
        var_17 = ((/* implicit */unsigned long long int) (+(std::min((((/* implicit */long long int) std::min((var_7), (var_7)))), (std::min((((/* implicit */long long int) arr_0 [i_0])), (var_6)))))));
        var_18 = ((/* implicit */bool) std::min(((+(((/* implicit */int) arr_0 [i_0 - 2])))), (((/* implicit */int) ((signed char) ((var_17) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }

    for (unsigned char i_1 = (unsigned char)0/*0*/; i_1 < (unsigned char)12/*12*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned char) var_13))) - (217))/*2*/) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) var_6);
        if (((/* implicit */bool) 15648993744146362701ULL))
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */bool) (signed char)127)) ? (25ULL) : ((+(arr_4 [i_1] [i_1])))));
            arr_8 [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */bool) ((((/* implicit */int) (bool)1)) | (((/* implicit */int) (unsigned char)219))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))));
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) std::min(((-(arr_4 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((((/* implicit */bool) var_11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_1 [i_1] [i_1])))) == (((/* implicit */int) var_18)))))));
        }

        var_7 = ((/* implicit */unsigned char) std::max((var_7), (((/* implicit */unsigned char) ((((/* implicit */int) (bool)1)) - (((/* implicit */int) (bool)1)))))));
        var_20 = ((/* implicit */unsigned long long int) std::max((var_20), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
    }
}
