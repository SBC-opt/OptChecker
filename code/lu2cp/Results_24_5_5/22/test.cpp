/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 852374716
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned long long int var_0, signed char var_2, unsigned char var_3, signed char var_4, signed char var_5, unsigned long long int var_6, int var_8, unsigned long long int var_10, int var_11, int var_13, signed char var_14, unsigned char var_15, int var_16, int zero, int arr_0 [22] , signed char arr_1 [22] [22] , signed char arr_6 [17] [17] , unsigned short arr_8 [17] , signed char arr_13 [17] , signed char arr_14 [17] [17] ) {
    /* LoopSeq 4 */

    for (int i_0 = 0/*0*/; i_0 < 22/*22*/; i_0 += (((-(var_13))) - (276573854))/*4*/) 
    {
        if (((/* implicit */bool) var_15))
        {
            arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */bool) ((((/* implicit */bool) (signed char)114)) ? (arr_0 [i_0]) : (((/* implicit */int) var_4))))))))));
            arr_3 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */bool) arr_1 [(unsigned char)14] [i_0])) || (((/* implicit */bool) std::min((var_16), (((/* implicit */int) arr_1 [i_0] [i_0])))))))) != (((/* implicit */int) (signed char)(-127 - 1)))));
            var_14 = ((/* implicit */signed char) 8ULL);
            var_0 = ((/* implicit */unsigned long long int) ((int) ((arr_0 [i_0]) == (arr_0 [i_0]))));
        }

        if (((/* implicit */bool) (-(var_11))))
        {
            var_2 = ((/* implicit */signed char) std::min((var_2), (((/* implicit */signed char) std::max((((((/* implicit */bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */bool) var_4))))) : (((/* implicit */int) ((((/* implicit */bool) (signed char)46)) && (((/* implicit */bool) var_8))))))), (std::max((arr_0 [i_0]), (628112401))))))));
            arr_4 [(signed char)17] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */bool) arr_0 [i_0]))))) != (((((/* implicit */int) ((((/* implicit */bool) (signed char)-125)) || (((/* implicit */bool) 18446744073709551601ULL))))) + (((/* implicit */int) std::max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
        }

        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = (unsigned short)0/*0*/; i_1 < (unsigned short)17/*17*/; i_1 += (unsigned short)4/*4*/) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_6 [i_1] [i_1])) ^ (((/* implicit */int) arr_1 [i_1] [i_1]))))));
        var_21 = ((/* implicit */short) ((signed char) ((((/* implicit */int) var_20)) / (((/* implicit */int) (signed char)46)))));
        var_4 = ((/* implicit */signed char) std::max((var_4), (((/* implicit */signed char) (~(arr_0 [i_1]))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = (unsigned short)0/*0*/; i_2 < (unsigned short)17/*17*/; i_2 += (unsigned short)4/*4*/) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */bool) (unsigned char)14)) ? ((~(((/* implicit */int) arr_6 [i_2] [i_2])))) : (((((/* implicit */int) arr_8 [i_2])) ^ (arr_0 [i_2])))));
        arr_11 [i_2] [i_2] = arr_1 [i_2] [i_2];
        arr_12 [(signed char)3] = ((/* implicit */signed char) ((unsigned short) var_6));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_8 [i_2]))));
        var_11 = ((/* implicit */int) arr_1 [i_2] [i_2]);
    }
    for (unsigned short i_3 = (unsigned short)0/*0*/; i_3 < (unsigned short)17/*17*/; i_3 += (unsigned short)4/*4*/) /* same iter space */
    {
        if (((/* implicit */bool) var_20))
        {
            var_5 = ((/* implicit */signed char) std::max((var_5), (((/* implicit */signed char) ((((/* implicit */bool) (-(((/* implicit */int) ((short) var_3)))))) ? (((/* implicit */int) arr_6 [i_3] [i_3])) : (((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned char)98))) == (((/* implicit */int) (signed char)36))))))))));
            arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */bool) ((((((/* implicit */int) arr_13 [i_3])) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_3])) - (29188)))))) ? (((arr_0 [i_3]) | (((/* implicit */int) (short)26281)))) : (((/* implicit */int) ((signed char) (unsigned short)45280)))));
        }
        else
        {
            var_0 = ((/* implicit */unsigned long long int) (signed char)110);
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */bool) (unsigned short)48608)) || (((/* implicit */bool) var_15))));
            arr_16 [i_3] = ((/* implicit */int) ((signed char) (!(((/* implicit */bool) std::min((var_27), (15ULL)))))));
            var_28 -= ((/* implicit */int) std::max((((/* implicit */unsigned long long int) ((((/* implicit */bool) (-(var_6)))) ? (((/* implicit */int) std::min((arr_14 [i_3] [i_3]), (arr_1 [i_3] [i_3])))) : (arr_0 [i_3])))), (std::min((((((/* implicit */bool) (signed char)105)) ? (15891363033684965126ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */bool) var_8)) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) arr_1 [i_3] [(short)19])))))))));
        }

        var_10 = ((/* implicit */unsigned long long int) var_16);
    }
    var_0 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-116))))) : ((+(var_27))))));
}
