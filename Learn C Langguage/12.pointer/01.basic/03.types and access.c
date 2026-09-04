//通过指针访问变量 这个操作叫做解引用
#include<stdio.h>
int main(){
    char c='a';
    char* pc=&c;
    printf("%c\n",*pc);//pc表示地址 *pc叫做解引用 可以访问地址里面的内容
    *pc='k';//赋值指针可以改变地址中的内容
    printf("%c\n",*pc);
    printf("%c\n",c);//确保真正可以修改变量c的值
    short sh=10;
    short* ps=&sh;
    printf("%d",*ps);
    return 0;
}