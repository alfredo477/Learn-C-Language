//swap 为什么传参会使用到指针
//传值调用：在函数调用时，实参的值会被复制一份传递给形参，形参和实参是两个不同的变量，形参的改变不会影响实参的值。
//传址调用：在函数调用时，实参的地址会被传递给形参，形参和实参指向同一个内存地址，形参的改变会影响实参的值。
#include<stdio.h>
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}
void swap1(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=10;
    int b=20;
    printf("a=%d b=%d\n",a,b);//a=10 b=20
    swap1(&a,&b); //如果调用swap(a,b); 传值调用 交换的是形参的值 不会影响实参的值
    printf("a=%d b=%d\n",a,b);//a=20 b=10 
}