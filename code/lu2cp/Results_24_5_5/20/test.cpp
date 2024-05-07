/*
yarpgen version 2.0 (build 343be0e34b on 2024:05:05)
Seed: 4174666509
Invocation: /home/zy/OptChecker/yarpgen/build_noprama_1if/yarpgen -o /home/zy/OptChecker/code/lu2cp/yarpgen_out
*/
#include "init.h"
#include <algorithm>
void test(unsigned char var_1, unsigned int var_3, signed char var_4, unsigned short var_6, unsigned char var_7, long long int var_8, unsigned char var_9, bool var_10, short var_11, int zero, signed char arr_0 [13] [13] , unsigned long long int arr_1 [13] , unsigned short arr_2 [13] ) {
    var_9 = ((/* implicit */unsigned char) ((((/* implicit */bool) ((((/* implicit */bool) std::min((((/* implicit */long long int) (signed char)-126)), (1084719291513715870LL)))) ? (((/* implicit */int) ((((/* implicit */bool) 2666179434U)) || (((/* implicit */bool) 2666179434U))))) : (((/* implicit */int) ((unsigned char) (unsigned short)58528)))))) || (((/* implicit */bool) std::max((-1084719291513715874LL), (((/* implicit */long long int) var_6)))))));
    /* LoopSeq 1 */


    for (unsigned int i_0 = 0U/*0*/; i_0 < ((((/* implicit */unsigned int) std::min((((/* implicit */long long int) ((((/* implicit */bool) (~(var_3)))) ? (((/* implicit */int) std::min((var_11), (((/* implicit */short) var_9))))) : (((/* implicit */int) std::max((((/* implicit */unsigned short) var_4)), ((unsigned short)63518))))))), (std::min((((((/* implicit */bool) 1084719291513715870LL)) ? (-1084719291513715873LL) : (((/* implicit */long long int) 1517068460)))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)45414)))))))))) - (743424850U))/*13*/; i_0 += ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_10))))) > (std::min((((/* implicit */long long int) 2666179423U)), (var_8))))))))) + (4U))/*4*/) 
    {
        if (((/* implicit */bool) ((((/* implicit */bool) ((long long int) (bool)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (bool)1))) : (2666179437U))))
        {
            arr_3 [i_0] [i_0] = ((/* implicit */signed char) std::min((std::min((arr_2 [i_0]), (arr_2 [i_0]))), (((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0] [i_0])))));
            arr_4 [i_0] = ((/* implicit */short) var_7);
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) std::min(((~(arr_1 [i_0]))), (((/* implicit */unsigned long long int) (-(var_8))))));
        }
        else
        {
            arr_6 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) (bool)1));
            arr_7 [i_0] [0U] = ((/* implicit */bool) ((unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [7U] [7U])) < (((/* implicit */int) var_6))))) != (((/* implicit */int) var_7)))));
        }

        arr_8 [i_0] = ((/* implicit */unsigned int) var_1);
    }
}
