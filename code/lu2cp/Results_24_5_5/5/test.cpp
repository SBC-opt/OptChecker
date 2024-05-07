/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 3510818652
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned char var_0, unsigned char var_1, int var_2, int var_3, unsigned short var_4, unsigned long long int var_5, unsigned long long int var_7, short var_8, unsigned int var_9, short var_10, unsigned char var_11, int var_12, int zero, short arr_0 [24] , int arr_1 [24] [24] , short arr_4 [18] , int arr_5 [18] , unsigned char arr_6 [18] [18] ) {
    var_3 = ((/* implicit */int) ((((unsigned int) var_7)) >= (((unsigned int) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) (short)-31174)))))));
    var_4 = ((/* implicit */unsigned short) 4150370020579678561ULL);
    var_2 ^= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) <= (((((/* implicit */bool) 1965883736U)) ? (var_5) : (((/* implicit */unsigned long long int) var_9))))))) <= (((/* implicit */int) var_11))));
    /* LoopSeq 4 */



    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) - (76))/*0*/; i_0 < (unsigned char)24/*24*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) std::min((var_10), (var_10))))))))) - (85))/*4*/) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((int) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((std::min((arr_1 [(unsigned char)2] [i_0]), (var_2))) + (1065896652))) - (24))))));
        var_17 -= ((/* implicit */unsigned long long int) (unsigned short)45462);
        arr_3 [i_0] = ((/* implicit */unsigned char) var_17);
    }
    for (unsigned int i_1 = 3U/*3*/; i_1 < 15U/*15*/; i_1 += 3U/*3*/) 
    {
        if (((/* implicit */bool) (~(((/* implicit */int) arr_4 [(unsigned short)14])))))
        {
            arr_7 [i_1] = ((/* implicit */short) (+((-(arr_5 [i_1])))));
            arr_8 [i_1] = ((/* implicit */unsigned short) (~((~(3U)))));
            arr_9 [i_1] [i_1] = ((/* implicit */long long int) var_0);
        }

        var_1 = ((unsigned char) ((((/* implicit */bool) (unsigned short)20058)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) : (1073725440U)));
    }



    for (unsigned int i_2 = 0U/*0*/; i_2 < ((((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((((/* implicit */int) var_8)) + (17706))) - (11)))))) - (2147465940U))/*12*/; i_2 += ((((/* implicit */unsigned int) var_12)) - (1524457560U))/*4*/) /* same iter space */
    {
        var_9 = ((/* implicit */unsigned int) var_17);
        var_1 -= ((/* implicit */unsigned char) arr_4 [i_2]);
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) std::min((((/* implicit */unsigned int) (unsigned char)105)), (2887945787U)));
    }

    for (unsigned int i_3 = 0U/*0*/; i_3 < ((((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((((/* implicit */int) var_8)) + (17706))) - (11)))))) - (2147465940U))/*12*/; i_3 += ((((/* implicit */unsigned int) var_12)) - (1524457560U))/*4*/) /* same iter space */
    {
        var_2 = ((/* implicit */int) std::min((var_2), (std::min((((/* implicit */int) arr_6 [(unsigned char)3] [i_3])), (((((/* implicit */bool) arr_6 [i_3] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_3] [i_3]))))))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-31482)) + (((/* implicit */int) (unsigned char)134))));
        var_22 = ((/* implicit */bool) std::min((var_22), (((/* implicit */bool) (-(((((-5394999285308916806LL) + (9223372036854775807LL))) << (((/* implicit */int) ((3231847597183828154ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))))));
    }
}
