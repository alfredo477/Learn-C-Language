//"||"类似并联电路 一真则为真 全假才为假
#include<stdio.h>
int main(){
    int month;
    scanf("%d",&month);
    if(month==12||month==1||month==2)
    printf("冬天\n");
    else
    printf("不是冬天\n");
    return 0;
}
//"||"也具有短路或 若第一个条件为真 则第二个条件不运行