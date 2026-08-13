//证明数组内空间连续
#include<stdio.h>
int main(){
    int arr[5]={0};
    int i=0;
    for(i=0;i<5;i++){
        printf("%d\n",&arr[i]);//需要从地址上面来看
    }
    return 0;
}