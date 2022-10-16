//
// Created by 16920 on 2022/10/16.
//

#include "stdio.h"

int main00000() {
    int arr1[4];
    int arr2[4];
    int *arrp1 = arr1;
    int *arrp2 = arr2;
//   循环赋值操作
    for (int i = 0; i < 4; ++i) {
        *(arrp1 + i) = i;
    }
    for (int i = 0; i < 4; ++i) {
        arr2[i] = i + 10;
    }
    int j = 0;
    for (j = 0; j < 4; ++j) {
        printf("数组1值%d\n", arr1[j]);
    }
    /**
     * sizeof arr  =  16 原因是int 类型四字节一个int四字节四个就是16
     *sizeof (int ) = 4 int 占4字节
     */
    for (j = 0; j < sizeof arr2 / sizeof(int); ++j) {
        printf("数组2值%d\n", arr2[j]);
    }
    return 0;
}