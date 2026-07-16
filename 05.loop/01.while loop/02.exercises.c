//求5的阶乘
#include<stdio.h>
int main(){
    int i=1;
    int ret=1;
    while(i<=5){
        ret=ret*i;
        i++;
    }
    printf("%d\n",ret);
    return 0;
}