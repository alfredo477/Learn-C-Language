//strcpy 字符串复制 返回值是字符串地址
//char* strcpy(char* destination,const char* source)
//确保目的地长度要大过目标
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char dest[15]={0};//不加const因为要拷贝进去 数据初始化为十进制0可以认为是\0
    //为什么定义数组而不是指针 定义数组是已经向内存申请空间存放char类型的字符 但是指针只是向内存申请了地址 无实际内存(只有指针自己的内存)
    const char* str="abcdef";
    char* ret=strcpy(dest,str);
    int len=strlen(strcpy(dest,str));//链式函数(复合函数):先求内部 再取外部
    printf("%s\n",dest);
    printf("%s\n",ret);
    printf("%d\n",len);
    return 0;
}