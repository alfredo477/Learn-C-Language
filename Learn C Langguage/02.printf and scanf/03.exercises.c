//printf()参数占位符是一一对应的关系，如果有n个占位符，printf()函数就必须有n+1个参数与他对应 
//prin("%d\n",a);一个占位符 两个参数（一个是字符串，一个是变量）
#include<stdio.h>
int main(){
     printf("%5d\n",123456);
     return 0;
}