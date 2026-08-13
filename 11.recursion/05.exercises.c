//跳跃楼梯：一只青蛙一次可以跳上1级台阶，也可以跳上2级
//求该青蛙跳上一个n级的台阶总共有多少种跳法
//分析：最后一步只有两种可能——跳1级或跳2级
//      f(n) = f(n-1) + f(n-2)  斐波那契数列
//      f(1)=1, f(2)=2

#include<stdio.h>

int jump(int n){
    int ret;
    if(n <= 2)
        return n;       // n=1返回1, n=2返回2
    ret = jump(n-1) + jump(n-2);
    return ret;
}

int main(){
    int n, ret;
    scanf("%d", &n);
    ret = jump(n);
    printf("%d", ret);
    return 0;
}