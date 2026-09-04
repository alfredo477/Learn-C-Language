//"&&"为逻辑与 只有同时满足为1 输出才为1 看作串联电路 只有两个灯泡都亮（1）整个输出才为1 
#include<stdio.h>
int main(){
    int month;
    scanf("%d",&month);
    if(month>=3&&month<=5)//不可写成3<=month<=5 若写成"<=""是双目运算符 先运算month>=3 成立则为1 继续拿1与5比较 判断真假
        printf("春天\n");
    else
        printf("不是春天");
    return 0;
}
//短路与 if中两个判断条件 若第一个条件为假则熔断 不再对第二个条件判断求值