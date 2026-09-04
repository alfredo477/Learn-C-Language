//二级指针 主要作用是存储一级指针的地址
//在解引用这个操作当中 一个*表示解引用一次
#include<stdio.h>
int main(){
    int a=10;
    int *p1=&a;//一级指针 存储变量a的地址
    int **p2=&p1;//二级指针 存储一级指针p1的地址
    printf("%p\n",*p2);//输出一级指针p1的地址
    printf("%p\n",p1);//输出一级指针p1的地址
    printf("================\n");
    printf("%d\n",*p1);//输出变量a的值
    printf("%d\n",**p2);//输出变量a的值
    return 0;
}