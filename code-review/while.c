//5的阶乘
#include<stdio.h>
int main(){
    int i=1;
    int ret=1;
    while(i<=5){
        ret*=i;
        i++;
    }
    printf("%d",ret);
    return 0;
}