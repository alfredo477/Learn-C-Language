//用指针判断大小端
//小端：低地址(内存地址顺序靠前)存放低字节(从个位开始存储)数据
//大端：低地址存放高字节数据
#include<stdio.h>
int main(){
    int n=0x11223344;
    char* p=(char*)&n;//int n有四个字节 而char类型只有一个 解引用输出"44"为小端
    printf("%d",*p);//十进制为68
    return 0;
}