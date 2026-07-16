//1-100之间2的倍数的数字之和
#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    for(i=1;i<=100;i++)
        {
            if(i%2 == 0)
            sum+=i;
        }
    printf("%d",sum);
    return 0;
}