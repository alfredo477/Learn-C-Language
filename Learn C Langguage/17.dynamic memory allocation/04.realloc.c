//realloc函数可以对动态内存的大小(过大或过小)进行调整
//void* realloc(void* ptr,size_t size)
//参数和返回值说明：
// 1.ptr是要调整的内存地址
// 2.size是调整之后的大小 单位是字节
// 3.返回值为调整之后的内存起始位置
// 4.这个函数调整原内存空间大小的基础上，还会将原来内存的数据移动到新的空间
//realloc调整内存的两种方式(内存需要连续)：
// 1.原有内存地址后有足够的空间 在堆区申请所需要的地址接在一块
// 2.原有内存地址之后没有足够的空间 在堆区申请一块全新的地址(连续且空间足够)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main(){
    int n=5;
    int* p=(int*)malloc(n*sizeof(int));
    int* ptr=NULL;
    assert(p!=NULL);
    if(p==NULL){
        printf("申请失败\n");
        return -1;
    }
    for(int i=0;i<n;i++){
        *(p+i)=i+1;
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    printf("========================\n");
    //现在需要40个字节扩容 用realloc函数扩容
    //但是realloc函数不一定分配成功 如果失败realloc返回NULL p=NULL 原来数据丢失
    ptr=(int*)realloc(p,2*n*sizeof(int));
    if(ptr!=NULL){
        p=ptr;
        for(int i=0;i<n*2;i++)
            printf("%d ",*(p+i));
    }
    free(p);
    p=NULL;
}