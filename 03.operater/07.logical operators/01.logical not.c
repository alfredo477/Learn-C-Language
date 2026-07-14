//"!"是逻辑非 把0 加上！0  则变为1
#include<stdio.h>
int main(){
    int n=0;//0是假
    if(!n)  //！n即 ！0是1 为真 进入if选择
        printf("n是假\n");
    else
        printf("n是真\n");
    return 0;
}