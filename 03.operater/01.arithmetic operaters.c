//"+" "-" "*" "/" "%" 他们都是双目运算符 需要两个值相互运算
#include<stdio.h>
int main(){
    float x=6/4;
    int a=6/4;
    int b=3%2;          //取模运算 求余数运算 只能用于整数类型
    printf("x=%f\n",x);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
