//
// Created by 16920 on 2022/10/16.
//
#include "stdio.h"

void add(int num1, int num2) {
    printf("num1+num2=%d\n", (num1 + num2));
}

void mins(int num1, int num2) {
    printf("num1-num2=%d", (num1 - num2));
}

// 操作回调到 add 和 mins
//void（*method）（int，int）声明好函数指针
//void 返回值
//(*methed) 函数名
//(int,int)两个参数
void opreata(void(*method)(int, int), int num1, int num2) {
    method(num1, num2);
}

int main233232() {
    opreata(add, 1,2);
    opreata(mins,10,9);
    return 0;
}

