//
// Created by 16920 on 2022/10/15.
//
#include <stdio.h>

int main5() {
    int number_int = 100;
    double number_double = 200;
    printf("int%d\n", number_int);
    printf("double%lf\n", number_double);
    printf("int%d\n", *(&number_int)); //  用& 取出地址 用*取出地址的值
    printf("double内存地址%lp \n", &number_double);
    printf("double%lf\n", *(&number_double));
//    =================================================================
    int *intP = &number_int;
    int *doubleP = &number_double;
    printf("*intP%d\n",*intP);
    printf("*intP%lf\n",*doubleP);
    return 0;
}
