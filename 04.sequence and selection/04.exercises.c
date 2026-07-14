#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=10){
        printf("%d>=19\n",n);
    }
    else if(n>=5 && n<10){      //n<10可以不写 因为if的条件从上往下 默认上面if条件不满足
        printf("%d>=5&&n<10",n);
    }
    else{
        printf("%d<5",n);
    }
    return 0;
}