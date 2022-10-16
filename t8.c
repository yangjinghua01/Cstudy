//
// Created by 16920 on 2022/10/15.
//
#include "stdio.h"

void changenum(int *a, int *b);

int main8() {

    int a = 100;
    int b = 200;
    changenum(&a, &b);
//    printf("交换后%d，%d\n", a, b);
    return 0;
}

void changenum(int* a, int* b) {
    *a = 10;
}