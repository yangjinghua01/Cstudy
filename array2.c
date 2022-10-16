//
// Created by 16920 on 2022/10/16.
//
#include "stdio.h"
int main12(){
    int arr [] = {1,2,3,4};
    int * arrp =arr;
    int i =0;
    for ( i = 0; i < 4; i++) {
        printf("这是数组的第%d",i);
        printf("个值为%d\n", *(arrp+i)); //1,2,3,5 指针向后移动指向元素地址 通过*号取出
        printf("个值为%p\n", (arrp+i)); // 因为是int 指针指向内存地址每次移动会拓4字节
        printf("个值为%d\n",arrp[i]);
    }
}