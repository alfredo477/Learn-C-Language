//calloc与malloc(未定义)都是定义动态内存 不同的是默认初始化为0
//void* calloc(size_t num,size_t size)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main(){
    int n=5;
    int* p=(int *)calloc(n,sizeof(int));
    assert(p!=NULL);
    if(p==NULL){
        printf("calloc开辟失败\n");
        return -1;
    }
    for(int i=0;i<n;i++){
        *(p+i)=i+1;
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));//或者printf("%d",p[i])
    }
    free(p);
    p=NULL;
    return 0;
}