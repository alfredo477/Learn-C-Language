//枚举常量的使用
#include<stdio.h>
enum Day{//枚举常量 可能取值
    Mon=1,//默认第一个值为0 但是可以任意赋初值
    Tue=3,//接下来递增1
    Wed,
    Thur=7,
    Fri,
    Sat,
    Sun
};
enum color{
    RED=2,
    GREEN=4,
    BLUE=8
};
int main(){
    enum color clr=GREEN;//等号可以赋值 需要两边类型相同
    int i=GREEN;
    printf("%d",clr);
    printf("%d",i);
}