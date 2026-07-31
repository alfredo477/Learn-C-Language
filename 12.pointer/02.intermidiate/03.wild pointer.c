//野指针：指针指向位置是不可知的(随机的，不正确的)
#include<stdio.h>
//指针指向的变量超过函数生命周期
//int* func(){
//    int a=10;
//    return &a; //a是局部变量 生命周期是函数被调用是创建 在函数结束时摧毁
//}
//int main(){
//    int* ret=func();
//    printf("%d",*ret);//指针指向的是a的地址 但是a的内容已经被摧毁 所以解引用是个随机值
//    return 0;
//}
//指针越界
//int main(){
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int* p=arr[10];
//    printf("%d\n",*p);
//    return 0;
//}
//指针未初始化
//int main(){
//    int* p;
//    *p=100;
//    printf("%d\n".*p);
//    return 0;
//}