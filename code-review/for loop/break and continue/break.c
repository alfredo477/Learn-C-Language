//找到1-100之间第四个能被3整除的数 要求使用break
//也可以用while循环 while(count<4)
#include<stdio.h>
int main(){
    int i=0;
    int count=0;
    for(i=1;i<=100;i++){
        if(i%3==0)
            count++;
        if(count==4)
            break;
    }
    printf("%d",i);
}
//也可以用while for用在条件已知的情况下 while在循环截至的条件已知