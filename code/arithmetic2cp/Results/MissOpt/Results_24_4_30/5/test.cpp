/*
yarpgen version 2.0 (build 0bfbe4f on 2024:04:29)
Seed: 2408694224
Invocation: /home/zy/OptChecker/yarpgen/build/yarpgen -o /home/zy/OptChecker/test_yarpgen
*/
#include "init.h"
#include <algorithm>
void test(bool var_0, unsigned char var_1, int var_2, bool var_3, unsigned long long int var_4, unsigned short var_5, long long int var_6, long long int var_7, short var_8, short var_9, unsigned int var_10, int zero) {
    if (((/* implicit */bool) var_7))
    {
        /* LoopSeq 1 */
        #pragma clang loop vectorize_predicate(enable)
        #pragma clang loop unroll(enable)
        for (unsigned int i_0 = ((((/* implicit */unsigned int) (~(std::max((((((/* implicit */bool) var_10)) ? (-1837981842) : (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */bool) 1837981837)))))))))) - (4294967293U))/*2*/; i_0 < ((((/* implicit */unsigned int) -1837981843)) - (2456985438U))/*15*/; i_0 += 4U/*4*/) 
        {
            /* LoopNest 2 */
            #pragma clang loop vectorize_predicate(enable)
            for (int i_1 = ((/* implicit */int) (!(((/* implicit */bool) ((10602270236126958973ULL) & (((/* implicit */unsigned long long int) var_7)))))))/*0*/; i_1 < 19/*19*/; i_1 += ((((/* implicit */int) (-(std::max(((+(-4610872562590706319LL))), (((/* implicit */long long int) std::min((((/* implicit */int) (signed char)-122)), (1245737237))))))))) - (120))/*2*/) 
            {
                #pragma omp simd
                #pragma clang loop vectorize_predicate(enable)
                #pragma clang loop vectorize(enable)
                #pragma clang loop interleave(enable)
                for (signed char i_2 = (signed char)1/*1*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) std::max((std::max((((/* implicit */unsigned long long int) (unsigned char)59)), (10602270236126958974ULL))), (((/* implicit */unsigned long long int) (~(-111458687)))))))) - (108))/*18*/; i_2 += (signed char)2/*2*/) 
                {
                    {
                        if (((/* implicit */bool) std::max((((/* implicit */unsigned long long int) std::min((1245737212), (((/* implicit */int) (unsigned char)43))))), (((var_4) & (std::max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_9)))))))))
                        {
                            var_9 = ((/* implicit */short) ((((7844473837582592649ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))))) | (((/* implicit */unsigned long long int) std::min((((/* implicit */long long int) var_0)), (var_6))))));
                            var_1 = ((/* implicit */unsigned char) var_9);
                            /* LoopSeq 2 */
                            for (unsigned char i_3 = ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) - (9))/*-9*/; i_3 < ((((/* implicit */int) ((/* implicit */unsigned char) std::max((((/* implicit */long long int) var_1)), (std::min((((/* implicit */long long int) ((((/* implicit */int) (bool)1)) << (((((/* implicit */int) (short)-32751)) + (32752)))))), (434940622121389960LL))))))) - (199))/*16*/; i_3 += (unsigned char)3/*3*/) 
                            {
                                arr_13 [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */bool) std::max((2808218156U), (((/* implicit */unsigned int) 1837981842))))) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (bool)1))))));
                                if (((/* implicit */bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (10602270236126958973ULL))))))
                                {
                                    var_3 = ((/* implicit */bool) ((std::max((((/* implicit */long long int) (bool)1)), (var_6))) | (((/* implicit */long long int) ((/* implicit */int) ((-1245737244) < (((/* implicit */int) (bool)1))))))));
                                    var_14 = ((/* implicit */unsigned char) std::min((0ULL), (((/* implicit */unsigned long long int) (bool)1))));
                                    arr_14 [i_0] [i_0] [i_0] [i_2 - 1] [i_0] = ((/* implicit */signed char) var_14);
                                    if (((/* implicit */bool) 25U))
                                    {
                                        if (((/* implicit */bool) std::min((std::min(((-2147483647 - 1)), (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) var_9)) <= (-1837981842)))))))
                                        {
                                            var_6 = ((/* implicit */long long int) std::min((var_6), (std::min((((/* implicit */long long int) std::min((4294967285U), (((/* implicit */unsigned int) (+(((/* implicit */int) (bool)1)))))))), (std::max((var_7), (((/* implicit */long long int) std::min((var_10), (((/* implicit */unsigned int) var_2)))))))))));
                                            var_16 = ((/* implicit */long long int) std::min((var_16), (((/* implicit */long long int) std::max((((/* implicit */unsigned int) std::max((((/* implicit */short) var_14)), (var_8)))), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) ^ ((+(4294967291U))))))))));
                                        }

                                        var_17 = ((/* implicit */short) (!(((/* implicit */bool) std::max((((/* implicit */long long int) ((((/* implicit */int) (bool)1)) & (((/* implicit */int) (unsigned char)236))))), (std::max((((/* implicit */long long int) var_3)), (434940622121389959LL))))))));
                                        var_18 = (!(((((/* implicit */bool) var_10)) || (((/* implicit */bool) (unsigned char)77)))));
                                    }

                                }

                            }
                            #pragma clang loop unroll(enable)
                            #pragma clang loop vectorize_predicate(enable)
                            #pragma clang loop vectorize(enable)
                            #pragma clang loop interleave(enable)
                            for (bool i_4 = ((((/* implicit */int) ((/* implicit */bool) ((-4) | (((/* implicit */int) (!(((/* implicit */bool) 11691130606887907141ULL))))))))) - (1))/*0*/; i_4 < ((/* implicit */int) (!(((/* implicit */bool) ((((/* implicit */bool) 18)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_6))))))/*1*/; i_4 += ((/* implicit */int) ((/* implicit */bool) ((std::max((std::min((((/* implicit */long long int) (short)-7876)), (-8434229975322510027LL))), (((/* implicit */long long int) std::max((var_5), ((unsigned short)45699)))))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */bool) ((((/* implicit */bool) var_5)) ? (var_6) : (((/* implicit */long long int) (-2147483647 - 1)))))))))))))/*1*/) 
                            {
                                var_9 = ((/* implicit */short) (((bool)0) ? (11930511221747322174ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                                /* LoopSeq 1 */
                                #pragma clang loop vectorize_predicate(enable)
                                #pragma clang loop unroll(enable)
                                #pragma clang loop vectorize(enable)
                                #pragma clang loop interleave(enable)
                                for (signed char i_5 = ((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */bool) std::min((((/* implicit */int) var_0)), ((-(((/* implicit */int) (unsigned short)56807))))))) || (((/* implicit */bool) std::max((((/* implicit */unsigned short) var_17)), ((unsigned short)19849)))))))/*1*/; i_5 < ((((/* implicit */int) ((/* implicit */signed char) var_9))) + (18))/*-83*/; i_5 += ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */bool) (-2147483647 - 1)))))) > (((/* implicit */int) (bool)1)))))) + (4))/*4*/) 
                                {
                                    var_20 = ((/* implicit */unsigned short) std::min(((((bool)1) ? (std::max((var_10), (((/* implicit */unsigned int) (unsigned char)26)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */bool) var_4)))))))), (((/* implicit */unsigned int) var_2))));
                                    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_17))));
                                }
                            }
                            var_6 = ((/* implicit */long long int) (!((((-2147483647 - 1)) <= (-2147483636)))));
                        }
                        else
                        {
                            var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */bool) ((((/* implicit */bool) var_21)) ? (13091258527346918372ULL) : (31ULL)))) ? (((/* implicit */int) std::max((((/* implicit */unsigned short) (bool)0)), ((unsigned short)65523)))) : (((/* implicit */int) std::min((((/* implicit */unsigned short) var_8)), (var_20))))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */bool) (signed char)34))))) | (((/* implicit */int) (!(((/* implicit */bool) std::min((((/* implicit */unsigned long long int) -1481864837)), (10164049001910682119ULL)))))))));
                            arr_20 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */unsigned char) ((std::min((((/* implicit */int) (signed char)-9)), (1484238381))) <= ((+(((/* implicit */int) (bool)1))))));
                        }

                        var_6 = ((/* implicit */long long int) std::min((var_6), (((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) var_24)) < (0ULL))))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_6 = 0LL/*0*/; i_6 < 19LL/*19*/; i_6 += 4LL/*4*/) 
            {
                var_6 = ((/* implicit */long long int) std::max((((/* implicit */unsigned long long int) std::min((std::min(((-2147483647 - 1)), (((/* implicit */int) var_17)))), (((/* implicit */int) var_1))))), (((((/* implicit */bool) 2147483615)) ? (var_4) : (((/* implicit */unsigned long long int) var_7))))));
                var_27 = ((/* implicit */unsigned short) ((((((/* implicit */bool) (signed char)-36)) ? (8282695071798869501ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (bool)1))))) ^ (((/* implicit */unsigned long long int) ((4294967289U) | (((/* implicit */unsigned int) ((((/* implicit */int) (bool)1)) | (617149705)))))))));
                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */short) std::min((((((((/* implicit */bool) 1484238394)) ? (16125309710801740211ULL) : (2163911768288903049ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */bool) 1688833773101828709LL)))))))), (((/* implicit */unsigned long long int) std::min((((/* implicit */long long int) var_1)), (var_7))))));
                var_28 = ((/* implicit */unsigned char) std::min(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) & (15263035721444878591ULL))))), (std::min((((/* implicit */unsigned long long int) 6555899687261394036LL)), (2246394446065701753ULL)))));
            }
            for (long long int i_7 = ((var_7) - (2078870686585510451LL))/*-2078870685407537589*/; i_7 < ((((/* implicit */long long int) (+(((((/* implicit */bool) 1035866552)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)8))))))) + (16760LL))/*19*/; i_7 += ((((/* implicit */long long int) std::min((((/* implicit */int) (!(((/* implicit */bool) var_17))))), (std::max((-1484238405), (((/* implicit */int) (unsigned char)229))))))) + (4LL))/*4*/) 
            {
                var_5 = ((/* implicit */unsigned short) var_23);
                /* LoopNest 2 */
                #pragma omp simd
                #pragma clang loop vectorize(enable)
                #pragma clang loop interleave(enable)
                #pragma clang loop vectorize_predicate(enable)
                for (short i_8 = (short)1/*1*/; i_8 < (short)18/*18*/; i_8 += ((((/* implicit */int) ((/* implicit */short) var_10))) + (15245))/*1*/) 
                {
                    #pragma clang loop unroll(enable)
                    for (unsigned short i_9 = (unsigned short)0/*0*/; i_9 < ((((/* implicit */int) ((/* implicit */unsigned short) std::min((16200349627643849863ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))))) + (19))/*19*/; i_9 += ((((/* implicit */int) ((/* implicit */unsigned short) std::min((((/* implicit */long long int) ((928164652) << (((16216681605241357215ULL) - (16216681605241357214ULL)))))), (var_6))))) + (2))/*2*/) 
                    {
                        {
                            if (((/* implicit */bool) std::max(((+((((bool)1) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) ((std::max((((/* implicit */unsigned long long int) var_3)), (6014100197313040203ULL))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)8)))))))))))
                            {
                                var_9 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)252)) | (0)));
                                arr_34 [i_0] [i_0] [i_9] [i_9] [i_9] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (bool)1))));
                                var_9 = ((/* implicit */short) std::min((((/* implicit */int) std::min((var_1), (((/* implicit */unsigned char) (bool)1))))), (((((/* implicit */bool) var_14)) ? (((/* implicit */int) (short)23277)) : (((/* implicit */int) (short)12489))))));
                                var_2 &= ((/* implicit */int) ((((/* implicit */bool) std::min((((((var_6) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (166))))), (((/* implicit */long long int) -1132190485))))) ? (((/* implicit */unsigned long long int) ((var_7) * (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : ((((-(var_4))) | (((/* implicit */unsigned long long int) ((/* implicit */int) std::max((var_8), (((/* implicit */short) var_3))))))))));
                            }

                            var_5 = ((/* implicit */unsigned short) std::min((std::min((((var_4) & (((/* implicit */unsigned long long int) -4536034694195482221LL)))), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) std::max((((/* implicit */short) var_28)), (var_8))))));
                            arr_35 [i_0] [i_7] [i_7] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (((((/* implicit */bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) : (2112049814U)))))) ? (((/* implicit */int) ((var_24) > (((/* implicit */unsigned int) ((/* implicit */int) (bool)1)))))) : (((/* implicit */int) var_9))));
                            var_4 = ((/* implicit */unsigned long long int) ((((/* implicit */bool) ((((/* implicit */bool) 1484238381)) ? (-7763162719084675431LL) : (((/* implicit */long long int) -2140492671))))) ? (std::max((((/* implicit */int) (unsigned char)217)), (((((/* implicit */int) (unsigned char)172)) & (0))))) : (((((/* implicit */bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) & (4294967295U)))) ? (((/* implicit */int) std::max((var_28), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) : (((((/* implicit */bool) 1229037874U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (bool)1))))))));
                            var_6 = ((/* implicit */long long int) ((((((/* implicit */int) std::min(((unsigned short)28308), (((/* implicit */unsigned short) (unsigned char)53))))) | (((/* implicit */int) std::min((var_21), (((/* implicit */unsigned short) (bool)1))))))) >> (((/* implicit */int) (!(((/* implicit */bool) std::min((var_8), (((/* implicit */short) var_1))))))))));
                        }
                    } 
                } 
                var_3 = ((/* implicit */bool) std::max((var_3), (((/* implicit */bool) std::min((((var_7) >> (((/* implicit */int) (bool)1)))), (((/* implicit */long long int) std::min(((unsigned short)28321), (((/* implicit */unsigned short) (signed char)-111))))))))));
                var_37 = ((/* implicit */bool) std::max((var_37), (((/* implicit */bool) std::max((std::min((7763162719084675423LL), (((/* implicit */long long int) ((((/* implicit */int) (bool)1)) <= (((/* implicit */int) (bool)1))))))), (std::max((((/* implicit */long long int) ((var_2) & (((/* implicit */int) (short)32748))))), (((((/* implicit */bool) var_10)) ? (((/* implicit */long long int) var_10)) : (var_16))))))))));
            }
            #pragma omp simd
            #pragma clang loop vectorize(enable)
            #pragma clang loop vectorize_predicate(enable)
            #pragma clang loop interleave(enable)
            for (bool i_10 = ((/* implicit */int) ((/* implicit */bool) ((std::max((((/* implicit */long long int) var_0)), (std::max((var_7), (((/* implicit */long long int) (signed char)124)))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45194))) / (-8195841527233148740LL))))))/*0*/; i_10 < ((((/* implicit */int) (!(((/* implicit */bool) std::min((var_2), (((/* implicit */int) var_3)))))))) + (1))/*1*/; i_10 += (bool)1/*1*/) 
            {
                /* LoopNest 2 */
                #pragma clang loop vectorize_predicate(enable)
                #pragma clang loop vectorize(enable)
                #pragma clang loop interleave(enable)
                for (unsigned int i_11 = ((var_10) - (4031628400U))/*4*/; i_11 < ((((/* implicit */unsigned int) var_7)) - (132569633U))/*1045403229*/; i_11 += ((var_10) - (4031628400U))/*4*/) 
                {
                    #pragma clang loop interleave(enable)
                    for (signed char i_12 = (signed char)1/*1*/; i_12 < ((((/* implicit */int) ((/* implicit */signed char) (!(((((/* implicit */int) (unsigned char)153)) < (((-243314413) & (((/* implicit */int) (short)-11654)))))))))) + (14))/*15*/; i_12 += ((((/* implicit */int) ((/* implicit */signed char) (-((+((+(((/* implicit */int) var_28)))))))))) - (18))/*4*/) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) std::min((((/* implicit */unsigned long long int) var_9)), (std::max((((23ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32260))))), (((/* implicit */unsigned long long int) (signed char)-126))))));
                            var_4 &= ((/* implicit */unsigned long long int) std::max((std::max((std::max((2147483647), (((/* implicit */int) var_1)))), (((/* implicit */int) std::max((var_21), ((unsigned short)20341)))))), (((/* implicit */int) var_28))));
                            var_7 = ((/* implicit */long long int) std::min((std::min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1177972862U)))), (((((/* implicit */unsigned long long int) -2005213781)) | (var_4)))));
                        }
                    } 
                } 
                arr_44 [i_0 + 1] = ((/* implicit */unsigned long long int) var_9);
                arr_45 [i_0] [i_10] [i_10] = ((/* implicit */unsigned long long int) (((-(std::min((((/* implicit */unsigned int) -149630483)), (var_10))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            }
            var_41 = (bool)1;
        }
        var_0 = ((/* implicit */bool) std::min((std::min((((/* implicit */unsigned long long int) 2147483616)), (0ULL))), (((((/* implicit */bool) ((((/* implicit */bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (std::max((((/* implicit */unsigned long long int) 3116994434U)), (16300589603968823545ULL)))))));
        var_43 = ((/* implicit */short) (((+(((/* implicit */int) var_5)))) < (((/* implicit */int) (signed char)109))));
    }

    if (((/* implicit */bool) ((std::max((((/* implicit */int) var_27)), ((-(((/* implicit */int) var_1)))))) & (std::max((((((/* implicit */int) (signed char)-118)) & (((/* implicit */int) var_8)))), ((-(-790156159))))))))
    {
        var_4 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */bool) (signed char)-6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (3116994457U))))) | (((/* implicit */unsigned int) ((/* implicit */int) std::max((var_5), (((/* implicit */unsigned short) var_9))))))));
        var_6 = ((/* implicit */long long int) ((((/* implicit */int) ((var_2) < (((((/* implicit */int) var_21)) & (((/* implicit */int) (unsigned short)43386))))))) >> (((((/* implicit */int) var_1)) - (199)))));
        if (((/* implicit */bool) var_10))
        {
            var_46 = ((/* implicit */unsigned int) std::min((var_46), (std::max(((~(std::min((var_10), (((/* implicit */unsigned int) var_1)))))), (((/* implicit */unsigned int) var_3))))));
            var_9 |= var_8;
        }

        var_48 = ((/* implicit */short) std::max((((/* implicit */long long int) std::min((std::max((var_20), ((unsigned short)3397))), (((/* implicit */unsigned short) var_8))))), (std::min((std::max((var_6), (((/* implicit */long long int) (unsigned short)20352)))), (((/* implicit */long long int) std::max((((/* implicit */int) var_37)), (-790156152))))))));
    }

}
