//do{语句}while(表达式)
//先执行语句 在判断条件 为真则继续进行
#include<stdio.h>
int main(){
    int i=1;
    do{
        printf("%d",i);
        i++;
    }while(i<=10);
    return 0;
}