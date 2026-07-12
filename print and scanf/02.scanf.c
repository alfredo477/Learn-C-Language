#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("请输入成绩：");
    scanf("%d%d%d%d",&a,&b,&c,&d);//"&"为取地址符号 scanf是要我们从键盘上输入的
    printf("%d,%d,%d,%d\n",a,b,c,d);
    return 0;
}
//"%d%d%d%d"在键盘输入中可以用空格隔开数据 但若是%d之间用"-"隔开 输入数据时也要如此