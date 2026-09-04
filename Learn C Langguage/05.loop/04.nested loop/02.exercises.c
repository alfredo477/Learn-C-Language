//最大公约数
//辗转相除法 被除数a与除数b相除得出余数c 除数b作为被除数除以c得出余数d 以此类推 直到d为0 最大公约数为c
#include<stdio.h>
int main(){
    int a=24;
    int b=18;
    int c=a%b;//一直除直到余数为0
    while(c!=0){
        a=b;//a=18
        b=c;//b=6
        c=a%b;//c=0
    }
    printf("%d\n",b);
    return 0;
}