//5！
#include<stdio.h>
int main(){
    int i=1;
    int ret=1;
    for(i=1;i<=5;i++)
    {
        ret*=i;
    }
    printf("%d",ret);
    return 0;
}