//"break"打断中断 在循环中是循环停止的意思
#include<stdio.h>
int main(){
    int i=1;
    while(i<=10){
        if(i==5)
        break;          //当运行到break永久停止这个循环
        printf("%d",i);
        i=i+1;
    }
    return 0;
}