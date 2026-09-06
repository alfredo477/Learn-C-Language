//使用联合体来判断大小端
#include<stdio.h>
union Un{
    char c;//共用内存 放在最左端
    int i;
}un;
int check(){
    un.i=1;
    return un.c;
}
int main(){
    int ret=check();
    if(ret==1)
         printf("小端\n");
    else
        printf("大端\n");
    return 0;
}