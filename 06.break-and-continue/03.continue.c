//continue代表继续的意思 如果在循环中代表循环继续
#include<stdio.h>
int main(){
    int i=0;
    while(i<=10){
        if(i==5)
            continue;
        i++;
        printf("%d",i);
    }
    return 0;
}
