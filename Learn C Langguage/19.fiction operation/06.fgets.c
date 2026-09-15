//fgets:从stream里面读取数据写到str里 num为读取数量，至读取到换行符，文末尾(\0)主要针对文本文件(一串字符)
//char* fgets(char* str,int num,FILE* stream);
#include<stdio.h>
int main(){
    FILE* fp=fopen("./test.txt","r");
    if(fp==NULL){
        printf("打开文件失败");
        return -1;
    }
    char str[100];
    fgets(str,sizeof(str),fp);
    printf("%s\n",str);
    fclose(fp);
    fp=NULL;
    return 0;
}