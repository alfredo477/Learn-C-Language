//32位系统：地址总线宽度为32位(4字节)，最大寻址空间2^32=4GB                指针4字节
//64位系统：地址总线宽度为64位(8字节)，理论寻址空间2^64（实际受操作系统限制）指针8字节
#include<stdio.h>
int main(){
    char c='a';//char一个字节
    char* pc=&c;
    short sh=10;//short两个字节
    short* ps=&sh;
    int a=100;//int四个字节
    int* p=&a;
    printf("%d\n",sizeof(pc));//pc表示char类型地址 但是地址不和当前变量相关 都是8个字节 地址表示以16进制表示
    printf("%d\n",sizeof(ps));
    printf("%d\n",sizeof(p));
    return 0; 
}