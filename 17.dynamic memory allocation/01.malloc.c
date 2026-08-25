//动态内存分配：malloc(库函数) 需要头文件#include<stdlib.h>
//void* malloc(size_t size)
// 功能说明：向内存的堆区申请一块连续可用的内存，并返回指向这块内存的起始地址
// 1.如果开辟成功，则返回这块空间的起始地址
// 2.如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查
// 3.返回值的类型是void*，所以malloc函数并不知道开辟空间的类型，具体在使用的时候由使用者自己决定
// 4.如果参数size_t返回值为0，malloc的行为标准是未定义的，取决于编译器
// 5.对于定义完之后的malloc函数内存在堆上 用完之后需要程序员手动释放回收
//free函数(也是库函数)：用来释放动态内存的开辟
// void free(void* ptr) 
// 1.如果参数ptr指向的空间不是动态开辟的 那么free函数的行为是未定义的
// 2.如果参数ptr是NULL指针，则函数什么事都不做
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main(){
    int n=5;
    int* p=(int*)malloc(n*sizeof(int));//我们要的是返回首地址 但是malloc返回的是void* 需要强转
    //malloc(20);//不直接写20(可读性不高) 可以认为malloc存储5个int类型
    assert(p!=NULL);
    if(p==NULL){
        printf("申请失败\n");
        return -1;
    }
    for(int i=0;i<n;i++){//如果不对这块内存赋值 则输出的值是未定义值(随机值)
        *(p+i)=i+1;
    }
     for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    free(p);
    p=NULL;//释放完p指针之后需要把它重新定义为NULL(空指针) 不然就是野指针
    return 0;
}