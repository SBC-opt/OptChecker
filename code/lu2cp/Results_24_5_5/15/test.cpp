/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 1297458310
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(bool var_0, unsigned short var_1, signed char var_2, signed char var_3, unsigned short var_4, signed char var_5, int var_7, int var_8, long long int var_10, int var_11, int var_12, unsigned short var_13, long long int var_14, signed char var_15, int zero, short arr_0 [20] , unsigned short arr_1 [20] , long long int arr_2 [20] [20] , signed char arr_3 [20] [20] , bool arr_4 [20] , unsigned int arr_5 [20] , signed char arr_7 [22] [22] , signed char arr_9 [22] , int arr_10 [22] , bool arr_18 [20] [20] , signed char arr_19 [24] , unsigned char arr_20 [24] [24] ) {
    /* LoopSeq 3 */



    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) (unsigned char)137))) - (137))/*0*/; i_0 < (short)20/*20*/; i_0 += (short)4/*4*/) /* same iter space */
    {
        var_5 ^= ((/* implicit */signed char) (~(((((/* implicit */bool) arr_1 [i_0])) ? (((((/* implicit */bool) var_12)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) (bool)1)) | (((/* implicit */int) arr_0 [i_0]))))))));
        var_2 |= ((/* implicit */signed char) var_7);
    }
    /* vectorizable */
    for (short i_1 = ((((/* implicit */int) ((/* implicit */short) (unsigned char)137))) - (137))/*0*/; i_1 < (short)20/*20*/; i_1 += (short)4/*4*/) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) / (((((/* implicit */bool) -2193668298329114492LL)) ? (-1540634355) : (((/* implicit */int) var_2))))));
        if (((/* implicit */bool) ((((/* implicit */bool) ((((/* implicit */bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (bool)1))))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (((7892106988090919595LL) + ((-9223372036854775807LL - 1LL)))))))
        {
            var_19 = ((((((/* implicit */bool) var_10)) ? (var_12) : (((/* implicit */int) var_4)))) >> (((((/* implicit */bool) var_8)) ? (((/* implicit */int) (bool)1)) : (((/* implicit */int) (signed char)111)))));
            arr_6 [i_1] [(unsigned char)12] = ((/* implicit */unsigned int) var_19);
        }

        if (((/* implicit */bool) ((((/* implicit */bool) (short)-17900)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181))) : (929445080U))))
        {
            var_20 = ((/* implicit */short) (~(((((/* implicit */bool) var_8)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) var_11))))));
            var_5 += ((/* implicit */signed char) (((!(((/* implicit */bool) var_10)))) ? (((((/* implicit */bool) var_14)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_1 [i_1]))));
            var_1 = ((/* implicit */unsigned short) arr_4 [i_1]);
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */bool) arr_0 [i_1])) ? (((((/* implicit */bool) var_3)) ? (((/* implicit */int) (unsigned char)252)) : (var_8))) : (((/* implicit */int) (bool)1))));
            var_24 = ((((/* implicit */bool) ((((/* implicit */bool) arr_5 [(signed char)8])) ? (((/* implicit */int) var_1)) : ((-2147483647 - 1))))) ? (((((/* implicit */bool) var_13)) ? (var_23) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))));
        }

        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) arr_1 [i_1]))));
    }
    /* vectorizable */


    for (short i_2 = (short)0/*0*/; i_2 < (short)22/*22*/; i_2 += (short)4/*4*/) 
    {
        arr_11 [i_2] = ((/* implicit */bool) arr_7 [i_2] [i_2]);
        var_26 = ((/* implicit */short) ((((/* implicit */bool) arr_7 [i_2] [i_2])) ? (((/* implicit */long long int) arr_10 [i_2])) : (4450132069161175244LL)));
        arr_12 [i_2] = ((/* implicit */int) arr_9 [(signed char)2]);
    }
    /* LoopSeq 3 */

    for (signed char i_3 = ((((/* implicit */int) ((/* implicit */signed char) var_10))) + (3))/*0*/; i_3 < ((((/* implicit */int) ((/* implicit */signed char) ((((((/* implicit */bool) ((((/* implicit */bool) var_25)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_26)) : (((/* implicit */int) (signed char)106)))) * (((/* implicit */int) (!(var_0)))))))) + (12))/*12*/; i_3 += (signed char)4/*4*/) 
    {
        var_0 += ((/* implicit */bool) ((((/* implicit */bool) (-(((/* implicit */int) (short)-28427))))) ? (((/* implicit */int) var_13)) : (((((((/* implicit */int) var_3)) << (((/* implicit */int) (bool)0)))) ^ (((((/* implicit */bool) (unsigned char)132)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (unsigned char)255))))))));
        arr_15 [i_3] = ((/* implicit */long long int) var_20);
        arr_16 [i_3] |= ((/* implicit */signed char) var_7);
    }




    for (signed char i_4 = (signed char)0/*0*/; i_4 < (signed char)20/*20*/; i_4 += ((((/* implicit */int) ((/* implicit */signed char) var_26))) + (11))/*2*/) 
    {
        var_12 = ((/* implicit */int) std::min((var_12), (((/* implicit */int) ((((/* implicit */bool) arr_0 [i_4])) ? (13503082405443137618ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4]))))))));
        var_3 = ((/* implicit */signed char) std::max((var_3), (((/* implicit */signed char) ((((/* implicit */bool) ((((/* implicit */bool) 12582912)) ? (((var_0) ? (-1410473405) : (-12582913))) : (((/* implicit */int) std::max((((/* implicit */unsigned short) var_20)), (var_13))))))) ? (((/* implicit */int) arr_18 [i_4] [7])) : (((((/* implicit */bool) ((((/* implicit */bool) var_7)) ? (2193668298329114491LL) : (8036114531803474920LL)))) ? (((/* implicit */int) arr_9 [(unsigned char)4])) : (((/* implicit */int) ((-2193668298329114508LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234)))))))))))));
    }

    for (int i_5 = 0/*0*/; i_5 < 24/*24*/; i_5 += ((var_11) - (1634153088))/*2*/) 
    {
        arr_21 [i_5] = ((/* implicit */bool) (unsigned char)246);
        arr_22 [i_5] = ((/* implicit */signed char) ((unsigned long long int) arr_20 [i_5] [i_5]));
        var_30 = ((/* implicit */unsigned long long int) std::max((var_30), ((((bool)1) ? (((unsigned long long int) ((((/* implicit */int) var_20)) >= (((/* implicit */int) var_1))))) : (((((/* implicit */bool) var_14)) ? (((/* implicit */unsigned long long int) (((bool)1) ? (var_7) : (((/* implicit */int) arr_19 [i_5]))))) : (((((/* implicit */bool) 2147483647)) ? (((/* implicit */unsigned long long int) var_7)) : (var_24)))))))));
        var_31 = ((((/* implicit */bool) ((((/* implicit */bool) 2147483647)) ? (((/* implicit */int) std::max((var_2), (arr_19 [i_5])))) : (((((/* implicit */bool) var_4)) ? (((/* implicit */int) (bool)1)) : (((/* implicit */int) arr_19 [i_5]))))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-106)) >= (((/* implicit */int) arr_20 [i_5] [i_5]))))) : (((/* implicit */int) std::min((arr_20 [i_5] [i_5]), (((/* implicit */unsigned char) arr_19 [i_5]))))));
    }
}
