//1-200之间2的倍数的和
#include<stdio.h>
int main(){
    int i;
    int sum=0;
    for(i=1;i<=200;i++){//for(i=2;i,=200;i+=2)
        if(i%2==0)
            sum+=i;
    }
    printf("%d",sum);
}