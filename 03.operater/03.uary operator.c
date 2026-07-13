#include<stdio.h>
int main(){
    int a=10;
    int b=a++;        //b=a; a=a+1; b=10 a=11
    int c=++a;        //a=a+1; c=a; a=12 c=12
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    return 0;
}
//++a 先运算a+1 在把a+1的值赋给c a++ 先把a的值赋给b 在运算a+1
//同理 --a 先运算a-1 在把a-1的值赋给c a-- 先把a的值赋给b 在运算a-1