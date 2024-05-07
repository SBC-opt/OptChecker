/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 3536122998
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(bool var_0, bool var_2, bool var_5, signed char var_8, short var_9, bool var_10, unsigned long long int var_11, unsigned char var_14, int zero, unsigned char arr_1 [19] , signed char arr_2 [19] [19] , unsigned short arr_3 [19] ) {
    var_5 = ((/* implicit */bool) ((std::max((std::max((var_11), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0LL/*0*/; i_0 < 19LL/*19*/; i_0 += 1LL/*1*/) 
    {
        if (((/* implicit */bool) (-(((/* implicit */int) var_9)))))
        {
            arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0]))));
            var_2 = ((((/* implicit */int) arr_3 [i_0])) > (((/* implicit */int) (!(((/* implicit */bool) arr_3 [i_0]))))));
            arr_5 [i_0] [i_0] = ((/* implicit */short) var_14);
            arr_6 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        }
        else
        {
            var_14 -= ((/* implicit */unsigned char) ((short) ((((/* implicit */bool) var_14)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_2)))));
            var_19 = arr_3 [i_0];
        }

        var_8 -= ((/* implicit */signed char) (!(((/* implicit */bool) arr_2 [i_0] [i_0]))));
    }
}
