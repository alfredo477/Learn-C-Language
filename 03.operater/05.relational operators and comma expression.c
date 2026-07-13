#include<stdio.h>
int main(){
    int a=11;
    int b=12;
    int c=(a>b, a=b+10,a,b=a+1);   //逗号表达式 先运算a>b 11>12为假 0 再运算a=b+10 a=12+10=22 再运算a,b=a+1 a=22+1=23 b=23 最后c的值为b的值23
    printf("a>b=%d\n",a>b);        //a>b  11>12为假  0
    printf("a<b=%d\n",a<b);        //a<b  11<12为真  1
    printf("a>=b=%d\n",a>=b);      //a>=b 11>=12为假 0
    printf("a<=b=%d\n",a<=b);      //a<=b 11<=12为真 1
    printf("a==b=%d\n",a==b);      //a==b 11==12为假 0
    printf("a!=b=%d\n",a!=b);      //a!=b 11!=12为真 1
    printf("c=%d\n",c);
    return 0;
}
