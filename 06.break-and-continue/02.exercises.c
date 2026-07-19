//找到1-100之间第一个能被3整除的数 要求使用break
//也可以用for循环 for(i=1;i<=100;i++)
#include<stdio.h>
int main(){
    int i=1;
    while(i<=100){
        if(i%3==0)
        break;
        i++;
    }
    printf("%d",i);
    return 0;
}