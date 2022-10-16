//
// Created by 16920 on 2022/10/15.
//

#include <stdio.h>

void change(int i) {
    i = 200;
}

//先声明在实现
void changed();
int i = 100;
int mai7n() {
//    int i = 100;
    changed();
    printf("i%d\n", i);
    return 10;
}

//函数不能写在main下面
//void change(){
//
//}
void changed() {
    i = 200;
}