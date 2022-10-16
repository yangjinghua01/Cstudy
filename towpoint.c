//
// Created by 16920 on 2022/10/16.
//
#include "stdio.h"
int main1asdf(){
    int num = 12;
    int* nump = &num;
//    不规范 报错
    int* numpp = nump;
    printf("nump:%p\n",nump);
    printf("numpp:%p",numpp);
    return 0;
}
