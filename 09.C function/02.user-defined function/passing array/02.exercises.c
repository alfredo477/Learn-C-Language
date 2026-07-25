//设计一个函数，传入一个数组，把所有元素设置为-1
#include<stdio.h>
void set_arr(int arr[],int len,int val){ //自定义函数 传入数组 把元素改为-1。简单就是遍历数组所有元素 并把他们设置成同一个值
    for(int i=0;i<len;i++)
        arr[i]=val;//val就是设置的值
}
void print(int arr[],int len){ //int len是遍历元素 i需要的范围
    for(int i=0;i<len;i++)
        printf("%d",arr[i]);
    printf("\n");
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int len=sizeof(arr1)/sizeof(arr1[0]);
    print(arr1,len);
    set_arr(arr1,len,-1);
    print(arr1,len);
    return 0;
}