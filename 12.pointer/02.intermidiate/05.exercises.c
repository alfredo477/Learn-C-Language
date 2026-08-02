#include<stdio.h>
//int main(){
//    long a[]={6,7,8,9,10};
//    long* p;
//    p=a;//数组名是数组首元素的地址：&a[0]
//    *(a+3)+=3;//*(a+3)是a[3]的值 9+3=12
//    printf("%d,%d\n",*p,*(p+3));//6,12
//return 0;
//}
int main(){
    int arr[5]={1,2,3,4,5};;
    short* p=(short*)arr;//short类型指针存储int类型 强转为short类型指针 4个字节的int类型被分为两个short类型 2个字节
    int i=0;             //也就是p指向arr[0]的前两个字节 p+1指向arr[0]的后两个字节 p+2指向arr[1]的前两个字节 p+3指向arr[1]的后两个字节
    for(i=0;i<4;i++)
        *(p+i)=0;
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);
    return 0;
    }