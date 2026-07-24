//自定义函数阶乘
//函数先定义后使用
#include<stdio.h>
int fac(int n){       //int函数返回类型 fac函数名 (int n)形式参数
    int ret=1;        //形式参数 int n 若与下方定义类似 int n 不冲突 因为定义作用域（一个是fac函数 一个是main函数）不同
    int i=1;          //函数体
    for(i=1;i<=n;i++)
        ret*=i;
    return ret;
}
//调用函数需要：1.函数名要匹配 2.参数 个数，类型，顺序匹配(顺序：参数类型需要顺序) 3.返回值匹配
int add(int a,int b);//若对于自定义函数先使用后定义 需要对自定义函数进行声明
int main(){
    int x=1;//实参 实参给形参传输值
    int y=1;//实参
    int ret=add(x,y);//需要重新定义变量来确定整数 x+y的和
    printf("%d",ret);
    return 0;

}int add(int a,int b){          //int a,int b 是形式参数
    printf("add函数被调用了\n");
    int ret=a+b;
    return ret;
}
