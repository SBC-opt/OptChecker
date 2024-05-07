/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 8868666
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(short var_1, unsigned char var_3, short var_6, signed char var_9, signed char var_10, int zero, short arr_0 [19] , bool arr_1 [19] , unsigned char arr_5 [11] ) {
    var_9 = ((/* implicit */signed char) (!(((/* implicit */bool) (+((-(((/* implicit */int) var_3)))))))));
    /* LoopSeq 3 */
    /* vectorizable */


    for (signed char i_0 = (signed char)0/*0*/; i_0 < (signed char)19/*19*/; i_0 += (signed char)1/*1*/) 
    {
        var_1 = ((/* implicit */short) std::min((var_1), (((/* implicit */short) (+((+(((/* implicit */int) arr_1 [(bool)1])))))))));
        if (((/* implicit */bool) (~((+(((/* implicit */int) arr_1 [0U])))))))
        {
            arr_2 [i_0] = ((/* implicit */bool) (-(((/* implicit */int) (!(((/* implicit */bool) var_6)))))));
            var_3 ^= ((/* implicit */unsigned char) (~((+(((/* implicit */int) (short)19258))))));
            arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)23529))))));
        }

        arr_4 [i_0] = ((/* implicit */short) (~((+(((/* implicit */int) arr_0 [i_0]))))));
    }


    for (bool i_1 = ((/* implicit */int) ((/* implicit */bool) var_9))/*0*/; i_1 < ((/* implicit */int) ((/* implicit */bool) (~((~((~(((/* implicit */int) var_10)))))))))/*1*/; i_1 += ((/* implicit */int) ((/* implicit */bool) var_6))/*1*/) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */bool) (-((~((+(((/* implicit */int) arr_5 [i_1]))))))));
        var_14 = ((/* implicit */short) std::max((var_14), (((/* implicit */short) (!(((/* implicit */bool) (~(((/* implicit */int) (!(((/* implicit */bool) (unsigned short)30101)))))))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */bool) (unsigned short)42023)))))));
    }
    /* vectorizable */

    for (unsigned short i_2 = ((((/* implicit */int) ((/* implicit */unsigned short) (-((+(((/* implicit */int) (short)-13141)))))))) - (13141))/*0*/; i_2 < (unsigned short)17/*17*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_14)))))))) - (1945))/*1*/) 
    {
        var_15 = ((/* implicit */signed char) (+((~(((/* implicit */int) (short)19258))))));
        arr_15 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (bool)1))));
        arr_16 [i_2] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_6))))));
    }
}
