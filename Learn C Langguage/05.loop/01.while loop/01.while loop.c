//while(表达式){语句块} 表达式为1就执行语句块 语句块继续与表达式判断
//在屏幕上大阴1-10的值
//知道循环条件用while循环
#include<stdio.h>
int main(){
    int i=1;
    while(i<=10)         //打了断点之后 代码执行到这一行之后停下
    {
        printf("%d\n",i);
        i++;             //循环的步进
    }
    return 0;
}