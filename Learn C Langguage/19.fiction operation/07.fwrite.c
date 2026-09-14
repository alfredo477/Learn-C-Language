//fwritr:一般用于二进制文件
//size_t fwrite(const void* ptr,size_t size,size_t count,FILE* stream);
//ptr为写入数据的指针 size为写入数据的字节大小 count为写入数据的数量 stream为装载的文件
#include<stdio.h>
int main(){
    FILE* fp=fopen("./test.txt","wb");//wb以二进制打开文件
    if(fp==NULL){
        printf("打开文件失败");
        return -1;
    }
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int count=fwrite(arr,sizeof(int),len,fp);
    if(count!=len){
        printf("写入失败\n");
        perror("fwrite");
        return -1;
    }
    fclose(fp);
    fp=NULL;
    return 0;
}