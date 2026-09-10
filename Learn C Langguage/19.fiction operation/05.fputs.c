//fputc
//int fputs(const char* str, FILE *stream);
//功能：把参数str里面的字符串所写入到参数stream所指定的流中(不包括结尾的\0)
//返回值：成功则返回非负整数，失败则返回EOF
#include<stdio.h>
int main(){
    FILE* pf=fopen("./input.txt","w");
    if(pf==NULL){  //用户模式下的判断
        printf("文件打开失败\n");//perror("fopen\n");perror函数输出错误函数信息
        return -1;
    }
    const char* str="helloworld";
    fputs(str,pf);
    fclose(pf);
    pf=NULL;
    return 0;
}