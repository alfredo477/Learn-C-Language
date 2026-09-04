//找到1-100之间所有能被3整除的数字 要求使用continue
#include<stdio.h>
int main(){
    int i=1;
    for(i=1;i<=100;i++){
        if(i%3!=0)
            continue;
        printf("%d\n",i);
    }   
    return 0;
}