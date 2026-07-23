//用sizeof来计算整个数组的字节大小
//整个数组字节数/单个元素字节数=元素数
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d",sizeof(arr)/sizeof(arr[0]));//int 为4个字节 arr数组有五个整型 有（20个字节）/单个元素的字节=元素数
    return 0;
}