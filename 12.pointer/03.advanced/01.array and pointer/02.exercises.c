//用指针方式输出数组的值
//在32位下 指针为4个字节 在64位下 指针为8个字节
//数组在传参过程中会退化为指针类型 只会传递数组首元素的地址 所以数组的本质是指针类型
#include<stdio.h>
void array_printf(int *p,int len){
    int i;
    for(i=0;i<len;i++)
        printf("%d ",p[i]);//p[i]等价于*(p+i) 中括号作用与解引用相同 也就是数组的下标访问方式
    printf("\n");
}
void array_printf1(int arr[],int len){
    int i;
    for(i=0;i<len;i++)
        printf("%d ",arr[i]);//arr[i]也等价于*(arr+i)
    printf("\n");
}
void array_printf2(int arr[]){
    int i;//数组名作为实参传递给函数时，数组名会退化为指针类型，sizeof(arr)计算的是指针的大小，而不是数组的大小，所以len的值不正确
    int len=sizeof(arr)/sizeof(arr[0]);//(arr)作为指针为8个字节，(arr[0])是整型为4个字节，所以len=2
    for(i=0;i<len;i++)
        printf("%d ",arr[i]);//arr[i]也等价于*(arr+i)
    printf("\n");
}
int main(){
    int arr[]={1,2,3,4};
    int *p=arr;
    //int len=sizeof(arr)/sizeof(arr[0]);
    array_printf2(p);
    printf("=============\n");
    printf("%d\n",*(p+1));//"+1"加的是指针类型的字节 与数组类型无关 此时恰好相同 所以输出2
    printf("%d\n",*(arr+1));//arr默认指向数组首元素地址约等于指针p
    printf("%d\n",*(p+2));
    printf("%d\n",*(arr+2));
    return 0;
}