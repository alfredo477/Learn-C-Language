//fread:函数用于从stream指向的文件流中读取数据，并将其存储到ptr指向的内存缓冲区(一般用于二进制文件)
//size_t fread(void* ptr,size_t size,size_t count,FILE* stream);
//ptr指向内存区域的指针 size为读取数据块的大小 count为数据块的数量 stream为读取的数据流
//返回值：返回实际读取的数据块的数量
#include<stdio.h>
int main(){
    FILE* pf=fopen("./test.txt","rb");
    if(pf==NULL){
        printf("打开文件失败\n");
        return -1;
    }
    int arr[5]={0};
    int len=sizeof(arr)/sizeof(arr[0]);
    int size=fread(arr,sizeof(int),len,pf);
    if(size!=len){
        perror("fread");
        return -1;
    }
    for(int i=0;i<len;i++){
        printf("arr[%d]:%d\n",i,arr[i]);
    }
    fclose(pf);
    pf=NULL;
    return 0;
}