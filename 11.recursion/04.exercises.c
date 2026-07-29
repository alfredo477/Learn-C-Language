//编写一个函数实现n的k次方，使用递归
#include<stdio.h>
 int p(int n,int k){
    int ret=0;
    if(k==0)//     if(k==1);
        return 1;//  return n;
    ret=n*p(n,k-1);
    return ret;
}
int main(){
    int n,k;
    int ret;
    scanf("%d%d",&n,&k);
ret=p(n,k);~~
    printf("%d",ret);
}