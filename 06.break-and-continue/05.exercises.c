//找到1-100之间 能够被5和6整除的数字；要求使用break或者continue
#include<stdio.h>
int main(){
    int i=1;
    for(i=1;i<=100;i++){
        if(i%5==0 && i%6==0)
            printf("%d\n",i);
            continue;
        }
    return 0;
}