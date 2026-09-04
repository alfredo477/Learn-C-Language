//枚举的声明和特点：
//枚举是一种常用的用户自定义数据类型，允许定义一组命名的常量来表示某个有限集合的可能值
//适宜枚举：星期 月份 扑克牌花色 开关状态 消息类型(私聊群聊) 网络类型(404 403)
//不适宜枚举(无限集合)：所有的整数 温度 所有人的名字
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
    printf("%d\n",RED);
    printf("%d\n",GREEN);
    printf("%d\n",BLUE);
    printf("%d\n",Mon);
    printf("%d\n",Tue);
    printf("%d\n",Wed);
    return 0;
}