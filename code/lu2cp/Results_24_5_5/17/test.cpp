/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 1708270563
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(long long int var_1, unsigned short var_3, unsigned long long int var_4, unsigned short var_5, unsigned short var_6, long long int var_7, long long int var_8, unsigned short var_9, unsigned long long int var_10, long long int var_11, int zero, long long int arr_0 [21] , unsigned short arr_1 [21] , unsigned long long int arr_2 [21] [21] , long long int arr_3 [21] ) {
    var_9 = ((/* implicit */unsigned short) std::min((((/* implicit */unsigned long long int) std::max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)61480)) ^ (((/* implicit */int) (unsigned short)61480))))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) % (var_7)))))), (std::max((14038978381617792506ULL), (((/* implicit */unsigned long long int) (unsigned short)4056))))));
    var_6 = (unsigned short)65527;
    var_6 = ((/* implicit */unsigned short) ((9223372036854775801LL) == (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    if (((/* implicit */bool) (unsigned short)41077))
    {
        var_15 = std::min((((/* implicit */unsigned long long int) ((((/* implicit */bool) var_6)) ? (((((/* implicit */int) (unsigned short)4056)) / (((/* implicit */int) var_3)))) : (((/* implicit */int) var_3))))), (var_10));
        var_1 = ((/* implicit */long long int) std::min((var_15), (((/* implicit */unsigned long long int) (-(std::min((((/* implicit */long long int) (unsigned short)65527)), (var_8))))))));
        var_17 = ((/* implicit */unsigned long long int) std::max((var_17), (((/* implicit */unsigned long long int) var_5))));
        var_9 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12870))) | (std::min((var_7), (-9223372036854775788LL)))));
    }

    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = ((var_4) - (16678681196119521702ULL))/*3*/; i_0 < ((((/* implicit */unsigned long long int) var_11)) - (3790456572426755195ULL))/*18*/; i_0 += ((((/* implicit */unsigned long long int) ((var_1) >> (((((/* implicit */int) var_5)) - (18464)))))) + (4ULL))/*18*/) 
    {
        var_19 = ((arr_2 [i_0 - 3] [i_0 + 3]) << (((arr_2 [i_0 - 1] [i_0 + 2]) - (10021251427155980162ULL))));
        if (((/* implicit */bool) var_3))
        {
            var_20 = (+(((arr_2 [i_0] [i_0]) >> (((((/* implicit */int) (unsigned short)65527)) - (65480))))));
            var_1 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) == (-9223372036854775788LL))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_0 + 3]))));
        }
        else
        {
            var_22 = ((/* implicit */bool) -9223372036854775788LL);
            var_23 = ((/* implicit */unsigned long long int) ((unsigned short) ((long long int) arr_1 [i_0])));
            var_5 = ((/* implicit */unsigned short) ((((long long int) var_1)) >> (((/* implicit */int) ((var_19) >= (((/* implicit */unsigned long long int) var_11)))))));
            arr_4 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
        }

    }
}
