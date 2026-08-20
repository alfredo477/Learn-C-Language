//模拟交通灯类型的转换 switch一般与枚举匹配
//交通灯变换 红-绿 绿-黄 黄-红
#include<stdio.h>
enum Trafficlight{
    RED,
    GREEN,
    YELLOW
} ;
int main(){
    enum Trafficlight light=RED;
    int i;
    for(i=0;i<3;i++){
        switch(light){
            case(RED):
                printf("红灯停\n");
                light=GREEN;//红-》绿
                break;
            case(GREEN):
                printf("绿灯行\n");
                light=YELLOW;//绿-》黄
                break;
            case(YELLOW):
                printf("黄灯慢行\n");
                light=RED;//黄-》红
                break;
        }
    }
    return 0;
}