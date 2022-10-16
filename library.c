#include "library.h"

#include <stdio.h>

void main1() {
    int i, sum=0;	  //初始化i和sum
    for(i=1;i<=100;i++){  //注意for内部的分号
        sum=sum+i;
    }
    printf("%d",sum);
    if(sum>5000){
        printf("大于5050");
    }

}
