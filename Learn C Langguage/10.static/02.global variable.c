//全局变量
#include<stdio.h>
extern int g_val; //extern 的使用范围也就是作用域 ：整个工程
extern int Add(int x,int y);
int main(){
    int ret=Add(1,2);
    printf("%d",ret);//虽然extern声明了全局变量g_val 但是在01.c文件里面也有main函数 无法一起编 不然会冲突
    return 0;
}