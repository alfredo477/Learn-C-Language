//最小公倍数
//a*b=最小公倍数*最大公约数
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("请输入a,b的值");
    scanf("%d%d",&a,&b);
    c=a%b;
    d=a*b;
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
    }
    e=d/b;
    printf("最小公倍数=%d",e);
    return 0;
}