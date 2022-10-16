//
// Created by 16920 on 2022/10/13.
//
#include <stdio.h>
//基本类型占用的字节数
int main3(){
//    int 占几个字节
    printf("int 数据类型所占的字节数:%d\n",sizeof (int)); //int 占用4字节
    printf("double 数据类型所占的字节数:%d\n",sizeof (double)); //double 占用8字节
    printf("char 数据类型所占的字节数:%d\n",sizeof (char)); //char 占用1字节
    return 0;
}
