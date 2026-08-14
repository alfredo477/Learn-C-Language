//把数组里面的元素位置逆置 【1，2，3，4，5】变成【5，4，3，2，1】
//就是变换元素位置 1与5变换 2与4变换 直到中间值相同
#include<stdio.h>
int main(){
    int i,j,temp;
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
     for(i=0;i<len;i++)
        printf("%d ",arr[i]);
    i=0;
    j=len-1;
    for(i=0;i<len;i++){
        for(j=len-1;j>=0;j--){
            if(i!=j){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
            else 
                break;
        }
    }
    i=0;
    for(i=0;i<len;i++)
        printf("%d ",arr[i]);
}