//
// Created by 16920 on 2022/10/16.
//
#include "stdio.h"
int main9(){
    int num = 666;
    int * nump = &num; // 取出num的内存地址给nump
    printf("nump的地址是%p\n",nump);
    int ** numpp = &nump; //取出nump的地址给numpp
    printf("numpp的地址是%p\n",numpp);
    int *** numppp = &numpp;
    printf("取值%p\n",*numppp);
    return 0;
}
