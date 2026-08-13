//找到1-100之间 能够被5和6整除的数字；要求使用break或者continue
#include<stdio.h>
int main(){
    int i=0;
    for(i=1;i<=100;i++){
        if(i%5!=0 || i%6!=0)//需要"||" 只有同时满足 才会被打印
            continue;
        else
            printf("%d\n",i);
    }
    return 0;
}