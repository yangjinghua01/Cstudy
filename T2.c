#include <stdio.h>

//
// Created by 16920 on 2022/10/13.
//
int main2(){
    int i = 100;
    double  d = 200;
    float f = 200;
    long l = 100;
    short s = 100;
    char c = 'd';
    char * str = "yangjinghua";
    printf("i的值是%d\n",i);
    printf("d的值是%lf\n",d); //lf == long float
    printf("f的值是%f\n",f); //f = float
    printf("l的值是%d\n",l); // d 代表整形
    printf("s的值%d\n",s);
    printf("c的值是%c\n",s);
    printf("str的值%s\n",str);
    return 0;
}
