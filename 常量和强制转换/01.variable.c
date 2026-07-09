#include<stdio.h>
int main(){
    int a=10;
    int a=20;
    int a=30;        //在c语言里，变量名不能重复定义
    printf("%d\n",a);
}
//
#include<stdio.h>
int main(){
    int a=10;
        a=20;
        a=30;      //在C语言里，变量名不能重复定义，但是可以对变量进行赋值操。a的值会被覆盖，最终输出30。
    printf("%d\n",a);
}