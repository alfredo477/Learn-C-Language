//判断闰年函数 函数名：is_leap_year 参数:int year 返回值:int(1表示闰年，0表示平年)
#include<stdio.h>
int is_leap_year(int year){
    int ret;
    if((year%4==0 && year%100!=0)||year%400==0)//或者可以不用定义ret 
        ret=1;                                //直接返回 return 1
    else                                      //若if条件未满足 直接返回 return 0200
        ret=0;
    return ret;
}
int main(){
    int year;
    int ret;
    scanf("%d",&year);
    ret=is_leap_year(year);
    if(ret)
        printf("是闰年");
    else
        printf("不是闰年");
    return 0;
}