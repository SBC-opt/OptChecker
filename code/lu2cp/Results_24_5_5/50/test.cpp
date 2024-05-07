/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 1045469007
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(short var_0, unsigned int var_1, unsigned char var_3, unsigned int var_4, long long int var_5, signed char var_6, bool var_7, unsigned char var_9, signed char var_10, unsigned long long int var_11, int zero, bool arr_4 [22] , unsigned char arr_5 [22] [22] , unsigned int arr_6 [22] ) {
    /* LoopSeq 3 */


    for (short i_0 = ((((/* implicit */int) var_0)) + (18909))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_7))) + (22))/*22*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_4))) + (328))/*3*/) /* same iter space */
    {
        if (((/* implicit */bool) std::max((((/* implicit */unsigned long long int) ((((var_5) + (9223372036854775807LL))) << (((3783046269U) - (3783046269U)))))), ((+(((((/* implicit */bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) var_1)))))))))
        {
            var_9 &= (unsigned char)67;
            var_6 = ((/* implicit */signed char) std::min((var_6), (((/* implicit */signed char) var_1))));
        }

        var_6 = ((/* implicit */signed char) std::max((var_6), (((/* implicit */signed char) ((((/* implicit */bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (unsigned char)213)))))));
    }



    for (short i_1 = ((((/* implicit */int) var_0)) + (18909))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */short) var_7))) + (22))/*22*/; i_1 += ((((/* implicit */int) ((/* implicit */short) var_4))) + (328))/*3*/) /* same iter space */
    {
        var_15 = ((/* implicit */int) std::max((var_15), (((/* implicit */int) std::min((arr_6 [18U]), (((/* implicit */unsigned int) (!(((/* implicit */bool) arr_5 [(signed char)12] [i_1]))))))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) / (((unsigned int) ((unsigned char) arr_4 [i_1])))));
        var_1 *= ((((/* implicit */unsigned int) ((/* implicit */int) std::max((arr_4 [i_1]), (((var_15) <= (((/* implicit */int) (unsigned char)74)))))))) - (((2398412120U) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
    }




    for (short i_2 = ((((/* implicit */int) var_0)) + (18909))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */short) var_7))) + (22))/*22*/; i_2 += ((((/* implicit */int) ((/* implicit */short) var_4))) + (328))/*3*/) /* same iter space */
    {
        var_1 = ((/* implicit */unsigned int) std::max((var_1), (((/* implicit */unsigned int) (signed char)-42))));
        var_10 = ((/* implicit */signed char) (+((~(2398412135U)))));
    }
    var_19 = ((/* implicit */unsigned char) std::min((std::max((var_15), (((/* implicit */int) var_3)))), (((/* implicit */int) var_3))));
}
