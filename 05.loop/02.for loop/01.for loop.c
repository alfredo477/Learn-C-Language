//for(表达式1；表达式2；表达式3){语句块}
//表达式1为循环变量的初始化 表达式2是循环变量的判断 表达式3是循环变量的调整
#include<stdio.h>
int main(){
    int i=1;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}