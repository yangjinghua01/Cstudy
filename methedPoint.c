//
// Created by 16920 on 2022/10/16.
//
#include "stdio.h"

void callBackMethed(char *filename, int current, int total) {
    printf("%s图片压缩的进度是:%d/%d", filename, current, total);
}

//定义函数指针
//定义函数指针 返回值（*名称）（int ,double）
void compress(char *name, void (*callBackMethedp )(char *, int, int)) {
    callBackMethed(name, 5, 100);
}

int main() {
    void (*call)(char *,int,int);
    compress("tupian.jpg",call);
    return 0;
}
