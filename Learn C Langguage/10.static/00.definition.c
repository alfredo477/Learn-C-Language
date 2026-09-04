//static 控制变量和函数可见性
//static 修饰局部变量改变生命周期
//static 修饰全局变量改变作用域
#include<stdio.h>
 int g_val = 100;//全局变量加上static关键字后 他的作用域范围缩小了：只能在当前.c文件里面使用
int Add(int x,int y){
    return x+y;
}