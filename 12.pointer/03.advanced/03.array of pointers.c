//指针数组：存放指针的数组 是数组 当前数组中每个元素是指针
//指针数组可以看作是二级指针的变形
#include<stdio.h>
int main(){
    int a=10,b=20,c=30;//int *p1=&a,int *p2=&b,int *p3=&c;
    int *arr[]={&a,&b,&c};
    printf("%d\n",*(arr+1));//arr+1表示arr[1]的地址 也就是&b的地址 *(arr+1)表示&b也就是b的地址 只不过%d把地址当作整型输出了
    printf("%d\n",**(arr+1));//*(arr+1)表示arr[1]也就是&b的地址 **(arr+1)表示b的值 也就是20 %d表示整型
    return 0;
}