//
// Created by 16920 on 2022/10/16.
//
#include "stdio.h"

int mainarray() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int i = 0;
    for (i = 0; i < 4; ++i) {
        printf("值%d\n", arr[i]);
    }
//    数组和指针挂钩
//    数组的内存地址 == 第一个元素的内存地址 == &arr
//    数组的内存地址 == 第一个元素，不是第二个元素
    printf("arr %p\n",arr);
    printf("arr地址%p\n",&arr);
    printf("arr地址%p\n",&arr[0]);
    int * arrp =arr;
    printf("获得值%d",*arrp);
    arrp++;//指针移动
    printf("指针获得，%d",*arrp);
    return 0;
}
