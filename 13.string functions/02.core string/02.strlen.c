//strlen 字符串长度计算 遇到""\0"时停止
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    const char* str="hello";//str为指针变量 字符串末尾默认加\0 字符串长度为6
    //即使去掉const也无法令*str="b" 因为无法把"hello"修改掉 "hello"是共用的地址 其他程序的"hello"也指向相同的内存地址 只可以修改str指向的地址
    //但是若是改成*str[]="hello"就可以了 相当于私人 不再是共用的
    int len=strlen(str);
    printf("%d\n",len);//5 在遇到\0时停止 若提前遇到\0也会停止
    printf("%s\n",str);
    return 0;
}