//strcat 字符串连接
//char* strcat(char* destination,const char* source);
//%s的本质是读取地址 直到遇到\0 而遇到arr[]="hello"时，arr自动退化成首地址指针
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char dest[15]="hello";//dest的长度需要大于两个数组平接之后的长度 不然会报错
    const char* str="abcdef";
    char* ret=strcat(dest,str);//原来dest字符串末尾的的"\0"被覆盖掉 结果是"helloabcdef\0"
    printf("%s\n",dest);
    printf("%s\n",ret);
    return 0;
}