//递归来求和：1+2+...+n
#include<stdio.h>
int sum(int n){
    int ret=0;
    if(n==1)
        return 1;
    ret=n+sum(n-1);
    return ret;
}
int main(){
    int n;
    int ret;
    scanf("%d",&n);
    ret=sum(n);
    printf("%d",ret);
    return 0;
}