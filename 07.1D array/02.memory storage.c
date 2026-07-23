//证明数组类型内存空间连续
#include<stdio.h>
int main(){
    int arr[5]={0};
    int i=0;
    for(i=0;i<=4;i++){
        printf("arr[%d]=%d",i,&arr[i]);//输结果末尾相差4 int类型字节为4 证明连续
    }
    return 0;
}