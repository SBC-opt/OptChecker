/*
yarpgen version 2.0 (build 0bfbe4f on 2024:04:29)
Seed: 3282519121
Invocation: /home/zy/OptChecker/yarpgen/build/yarpgen -o /home/zy/OptChecker/test_yarpgen
*/
#include "init.h"
#include <algorithm>
void test(bool var_0, long long int var_1, short var_2, signed char var_3, signed char var_4, bool var_6, unsigned short var_8, int var_9, bool var_10, int var_11, int zero, bool arr_0 [24] [24] , signed char arr_1 [24] , bool arr_2 [24] [24] , unsigned int arr_4 [24] [24] [24] , unsigned int arr_5 [24] , long long int arr_6 [24] [24] [24] [24] , long long int arr_7 [24] [24] [24] [24] , unsigned int arr_8 [25] , unsigned long long int arr_10 [25] , bool arr_11 [25] , bool arr_13 [25] [25] [25] , bool arr_14 [25] [25] , unsigned char arr_15 [25] [25] [25] [25] ) {
    var_8 = ((/* implicit */unsigned short) std::min((var_8), (((/* implicit */unsigned short) var_6))));
    /* LoopSeq 3 */
    for (bool i_0 = ((((/* implicit */int) ((/* implicit */bool) (+(((/* implicit */int) (bool)1)))))) - (1))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */bool) var_8))) + (1))/*1*/; i_0 += (bool)1/*1*/) 
    {
        var_3 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */bool) arr_1 [i_0])))))));
        var_0 = (!(((/* implicit */bool) ((((/* implicit */bool) (+(1208114949U)))) ? (((/* implicit */int) (!(arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))));
        if (((/* implicit */bool) var_1))
        {
            var_16 = ((/* implicit */bool) (signed char)100);
            var_0 &= ((/* implicit */bool) ((((/* implicit */bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-96))))) ? ((((bool)0) ? (3086852346U) : (1208114949U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
            /* LoopNest 2 */
            #pragma omp simd
            for (unsigned char i_1 = (unsigned char)0/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned char) arr_2 [(bool)1] [i_0]))) + (24))/*24*/; i_1 += (unsigned char)3/*3*/) 
            {
                #pragma clang loop vectorize(enable)
                for (bool i_2 = ((/* implicit */int) ((/* implicit */bool) ((int) var_3)))/*0*/; i_2 < ((/* implicit */int) ((/* implicit */bool) (~(((/* implicit */int) arr_1 [i_0])))))/*1*/; i_2 += ((/* implicit */int) ((/* implicit */bool) (-(((/* implicit */int) arr_2 [(signed char)20] [i_1])))))/*1*/) 
                {
                    {
                        if (((/* implicit */bool) (signed char)-111))
                        {
                            var_18 = ((/* implicit */signed char) (~(((((/* implicit */bool) ((((/* implicit */bool) var_3)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)-111))))) ? (((((/* implicit */bool) 1208114949U)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_7 [i_0] [i_0] [i_1] [i_1]))) : (((/* implicit */long long int) ((int) arr_4 [i_0] [i_1] [i_2])))))));
                            var_11 ^= std::max((((/* implicit */int) (bool)0)), (16777215));
                            var_9 = ((/* implicit */int) std::max((var_9), (((/* implicit */int) var_16))));
                        }

                        var_21 = ((/* implicit */signed char) (!(((/* implicit */bool) (+(-1182764997))))));
                        var_22 = ((((/* implicit */bool) std::max((((/* implicit */short) std::max(((signed char)(-127 - 1)), ((signed char)110)))), (((short) (bool)1))))) ? ((~(arr_5 [i_1]))) : (((unsigned int) var_0)));
                    }
                } 
            } 
            var_23 -= ((/* implicit */unsigned short) var_1);
            var_2 = ((/* implicit */short) ((int) (~(((/* implicit */int) (bool)1)))));
        }

        var_25 = ((/* implicit */int) (+(3620329651984531075LL)));
    }
    #pragma omp simd
    for (bool i_3 = (bool)0/*0*/; i_3 < ((/* implicit */int) ((/* implicit */bool) var_2))/*1*/; i_3 += ((((/* implicit */int) std::min(((bool)0), ((bool)1)))) + (1))/*1*/) 
    {
        var_26 = ((/* implicit */unsigned short) std::min((var_26), (((/* implicit */unsigned short) (short)(-32767 - 1)))));
        /* LoopNest 3 */
        for (signed char i_4 = ((/* implicit */int) var_21)/*0*/; i_4 < ((((/* implicit */int) ((/* implicit */signed char) var_0))) + (24))/*25*/; i_4 += ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */bool) (~(((/* implicit */int) (unsigned char)250))))) ? ((-(arr_8 [i_3]))) : ((~(arr_8 [i_3]))))))) + (7))/*4*/) 
        {
            #pragma clang loop vectorize(enable)
            #pragma clang loop interleave(enable)
            #pragma clang loop vectorize_predicate(enable)
            for (signed char i_5 = ((/* implicit */int) ((/* implicit */signed char) (+(((/* implicit */int) (!(arr_11 [i_4])))))))/*0*/; i_5 < ((((/* implicit */int) (signed char)-118)) + (143))/*25*/; i_5 += ((((/* implicit */int) ((/* implicit */signed char) arr_10 [i_4]))) + (27))/*3*/) 
            {
                #pragma clang loop vectorize_predicate(enable)
                #pragma clang loop interleave(enable)
                #pragma clang loop vectorize(enable)
                for (unsigned short i_6 = ((/* implicit */int) ((/* implicit */unsigned short) var_3))/*0*/; i_6 < (unsigned short)25/*25*/; i_6 += ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */bool) ((int) arr_11 [i_5]))) ? ((+(1208114949U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1663695898)) <= (18055156672921469644ULL))))))))) - (24322))/*3*/) 
                {
                    {
                        var_0 = ((/* implicit */bool) (-(((/* implicit */int) ((unsigned char) (unsigned short)65535)))));
                        var_28 = ((/* implicit */signed char) (unsigned short)3624);
                        var_9 = ((/* implicit */int) var_1);
                        var_10 = ((/* implicit */bool) std::max((((/* implicit */int) (((+(((/* implicit */int) var_28)))) > (((/* implicit */int) arr_15 [i_3] [i_3] [i_5] [(unsigned char)20]))))), (((((/* implicit */bool) ((unsigned long long int) var_8))) ? ((~(((/* implicit */int) var_26)))) : (((/* implicit */int) arr_13 [i_6] [i_4] [i_3]))))));
                        var_31 = ((/* implicit */int) std::min((var_31), (((/* implicit */int) ((unsigned short) ((long long int) (bool)1))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        #pragma clang loop interleave(enable)
        for (int i_7 = ((((/* implicit */int) arr_14 [i_3] [i_3])) - (1))/*0*/; i_7 < ((((/* implicit */int) var_28)) - (15))/*25*/; i_7 += 1/*1*/) 
        {
            var_32 += ((/* implicit */int) var_6);
            var_33 = ((/* implicit */short) ((unsigned int) std::max(((~(((/* implicit */int) var_18)))), (((/* implicit */int) (!(((/* implicit */bool) var_21))))))));
        }
    }
    #pragma clang loop vectorize_predicate(enable)
    #pragma clang loop interleave(enable)
    for (unsigned int i_8 = 2U/*2*/; i_8 < ((((/* implicit */unsigned int) (~((-2147483647 - 1))))) - (2147483627U))/*20*/; i_8 += ((((/* implicit */unsigned int) var_31)) + (1U))/*2*/) 
    {
        var_10 = ((/* implicit */bool) (~(((/* implicit */int) arr_13 [i_8] [i_8] [(short)21]))));
        var_35 = ((/* implicit */int) std::max((var_35), (((/* implicit */int) -8589934592LL))));
        var_1 = arr_6 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1];
    }
    var_37 += ((/* implicit */unsigned long long int) var_1);
}
