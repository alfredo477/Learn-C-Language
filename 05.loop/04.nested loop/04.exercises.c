//1-100中出现过多少个九的个数
#include<stdio.h>
int main(){
    int i;
    int n=0;
    for(i=1;i<=100;i++){
        if(i%10==9)
            n++;
        if(i/10==9)
            n++;
    }
    printf("%d\n",n);
    return 0;
}