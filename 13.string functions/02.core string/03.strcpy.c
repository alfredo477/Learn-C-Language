//strcpy 字符串复制 返回值是字符串地址
//char* strcpy(char* destination,const char* source)
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char dest[15];//不加const因为要拷贝进去
    const char* str="abcdef";
    strcpy(dest,str);
    printf("%s\n",dest);
    return 0;
}