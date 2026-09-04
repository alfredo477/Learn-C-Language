//输入一个1-7的数字，打印对应的信息
#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    switch(day){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("工作日\n");
        break;
    case 6:
    case 7:
    printf("非工作日\n");
    break;}
    return 0;
}