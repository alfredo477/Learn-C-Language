//下列打印内容的结果分别是多少？请写出结果并解释原因
#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    printf("%d\n",sizeof(a));//当前数组整体大小 20个字节
    printf("%d\n",sizeof(a+1));//a表示数组首元素地址 a+1表示数组第二个元素地址 地址8个字节
    printf("%d\n",sizeof(a[1]));//a[1]表示数组第二个元素整型 4个字节
    printf("%d\n",sizeof(&a));//&a表示整个数组的地址 8个字节
    printf("%d\n",sizeof(&a+1));//&a表示整个数组的地址 &a+1表示当前地址加了一个数组地址 还是地址8个字节
    printf("%d\n",sizeof(&a[0]));//表示地址 8个字节
    printf("%d\n",sizeof(&a[0]+1));//&a[0]表示数组首元素地址 &a[0]+1表示数组第二个元素地址 8个字节
    return 0;
}