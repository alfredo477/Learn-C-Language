//核心字符串函数一览 
//strlen函数-字符串长度计算：strlen函数介绍 
//strcpy函数-字符串复制：stISRy函数企绍 
//strcat函数-字符串连接：strcat函数介绍 
//strcmp函数-字符串比较：strcmp函数介绍 
//strncpy函数-限定长度复制：strnspy函数介绍
//size_t strlen(const char *str)
//size_t 等同于unsigned 无符号的整型常用于正数如果是负数则会显示很大的值 用于存储长度，个数，字节数
#include<stdio.h>
#include<string.h>
int main(){
    int a=10;//当一个普通变量被const修饰之后 变量不可被修改
    const int *p=&a;//int const *p此时const 修饰整型*p (*p)的值固定 *p不可被修改 但是可以通过改变a的值 来修正*p的值
    *p=100;
    printf("%d\n",a);
    printf("%d\n",*p);
    return 0;
}
//若int *const p=&a;//const修饰的是p表示地址 即p不可被修改 地址不可被修改(p=&b是错误的) 但是*p=100可以