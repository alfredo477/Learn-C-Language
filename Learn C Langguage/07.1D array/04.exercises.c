//把数组里面的元素位置逆置 【1，2，3，4，5】变成【5，4，3，2，1】
//就是变换元素位置 1与5变换 2与4变换 直到中间值相同
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=len-1;
    int temp;
    for(i=0;i<len;i++)
        printf("%d",arr[i]);
    printf("\n");
    i=0;                    //需要重置i=0 不然后面while和for条件都不满足 都跳过
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(i=0;i<len;i++)
        printf("%d",arr[i]);
    return 0;
}