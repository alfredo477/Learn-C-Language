//递归：一个方法在执行过程中调用自己
//递归的主要条件：分成一个个子问题 子问题解决方法需要和主问题一致
//求n的阶乘 ：n*(n-1)!=n*(n-1)*(n-2)!......直到为1
#include<stdio.h>
int fac(int n){
    int ret;
    if(n==1)
        return 1;
    ret=n*fac(n-1);//调用fac n=n-1 fac(n-1)=(n-1)*fac(n-2)
    return ret;
}
int main(){
    int n;
    int ret;
    scanf("%d",&n);
    ret=fac(n);
    printf("%d",ret);
    return 0;
}