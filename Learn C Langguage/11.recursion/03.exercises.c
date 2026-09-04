//递归求斐波那契数列的第n项：1，1，2，3，5，8，13...... 第n项是n-1项和n-2项的和
#include<stdio.h>
int fib(int n){
    int ret;//也可以是(n==1||n==2)
    if(n<=2)//不可以写成n-2==1 这样默认n==3 不会有返回值 默认条件应该是当(n-1或者n-2)等于(2或者1)即(n-2<=2)但是递归到一定程度后int n-2为int n
        return 1;
    ret=fib(n-1)+fib(n-2);
    return ret;
}
int main(){
    int n;
    int ret;
    scanf("%d",&n);
    ret=fib(n);
    printf("%d",ret);
}