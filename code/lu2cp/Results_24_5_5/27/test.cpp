/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 3841581670
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned int var_0, bool var_1, unsigned char var_2, int var_3, unsigned int var_5, unsigned int var_7, unsigned char var_8, unsigned short var_9, unsigned short var_11, bool var_12, unsigned char var_13, bool var_14, long long int var_15, int var_16, bool var_17, unsigned char var_18, int zero, unsigned char arr_0 [22] , signed char arr_1 [22] , int arr_2 [22] , long long int arr_3 [22] [22] , unsigned char arr_4 [22] , int arr_5 [22] , bool arr_6 [22] [22] , bool arr_7 [22] [22] ) {
    var_14 = var_17;
    var_2 |= ((/* implicit */unsigned char) std::max((((((((/* implicit */int) var_17)) <= (((/* implicit */int) var_17)))) ? (var_16) : (((/* implicit */int) (unsigned short)38565)))), (((/* implicit */int) ((((/* implicit */bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-17663))) % (var_0)))) || (((/* implicit */bool) var_15)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) ((signed char) ((((/* implicit */bool) ((unsigned int) (unsigned short)26974))) ? (((/* implicit */long long int) std::max((1042412325U), (var_5)))) : (var_15)))))) - (72))/*0*/; i_0 < (unsigned char)22/*22*/; i_0 += (unsigned char)2/*2*/) /* same iter space */
    {
        var_7 = ((/* implicit */unsigned int) var_11);
        var_22 = ((/* implicit */bool) std::min((var_22), (((/* implicit */bool) ((unsigned int) ((long long int) arr_0 [i_0]))))));
        var_1 -= ((/* implicit */bool) arr_0 [i_0]);
        var_24 -= ((/* implicit */long long int) ((arr_2 [i_0]) % (((((/* implicit */bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */bool) var_13)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0]))))))));
    }



    for (unsigned char i_1 = ((((/* implicit */int) ((/* implicit */unsigned char) ((signed char) ((((/* implicit */bool) ((unsigned int) (unsigned short)26974))) ? (((/* implicit */long long int) std::max((1042412325U), (var_5)))) : (var_15)))))) - (72))/*0*/; i_1 < (unsigned char)22/*22*/; i_1 += (unsigned char)2/*2*/) /* same iter space */
    {
        var_9 = ((/* implicit */unsigned short) var_0);
        var_16 = ((/* implicit */int) arr_3 [i_1] [i_1]);
        var_27 *= ((/* implicit */unsigned short) arr_4 [i_1]);
        if (((/* implicit */bool) ((((/* implicit */bool) (unsigned char)37)) ? (-1467365852) : (1351032682))))
        {
            var_28 = std::max((((((/* implicit */bool) arr_0 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) ((var_17) || (((/* implicit */bool) arr_0 [i_1]))))));
            var_29 |= ((-1467365852) | (1351032685));
        }

    }


    for (unsigned char i_2 = ((((/* implicit */int) ((/* implicit */unsigned char) ((signed char) ((((/* implicit */bool) ((unsigned int) (unsigned short)26974))) ? (((/* implicit */long long int) std::max((1042412325U), (var_5)))) : (var_15)))))) - (72))/*0*/; i_2 < (unsigned char)22/*22*/; i_2 += (unsigned char)2/*2*/) /* same iter space */
    {
        arr_8 [7ULL] = ((/* implicit */short) ((((/* implicit */bool) ((((/* implicit */bool) std::max((((/* implicit */int) arr_6 [i_2] [i_2])), (arr_2 [i_2])))) ? (var_28) : ((-(arr_5 [i_2])))))) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) ((((arr_5 [i_2]) % (((/* implicit */int) arr_0 [i_2])))) <= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) == (((/* implicit */int) var_8))))))))));
        var_30 = std::min((((((/* implicit */long long int) ((/* implicit */int) var_14))) | (std::max((((/* implicit */long long int) arr_5 [i_2])), (-1320418547621466229LL))))), (((/* implicit */long long int) arr_2 [i_2])));
        var_31 = ((/* implicit */int) arr_1 [i_2]);
    }
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */bool) var_30)) ? (((var_15) - (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */bool) std::max((((/* implicit */unsigned int) var_29)), (var_0)))) ? (((/* implicit */int) ((((/* implicit */bool) -1320418547621466230LL)) && (((/* implicit */bool) 1380395995))))) : (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))))));
}
