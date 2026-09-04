//数组名表示数组首元素的地址
//printf("%p\n",arr) 输出的值是数组首元素的地址
//printf("%p\n",&arr) 输出的值是数组的地址
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};//
    int *p=arr;
    printf("%p\n",p);//此时p为指针变量 表示地址
    printf("%p\n",arr);//此时arr为数组名，表示数组首元素的地址
    printf("%p\n",&arr[0]);//此时&a[0]表示数组首元素的地址
    printf("================\n");
    printf("%p\n",p+1);//此时p+1表示数组第二个元素的地址
    printf("%p\n",arr+1);//此时arr+1表示数组第二个元素的地址
    return 0;
}