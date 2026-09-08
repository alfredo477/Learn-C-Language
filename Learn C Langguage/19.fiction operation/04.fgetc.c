//fgetc:从stream指向的输入流中读取下一个字符
//
#include<stdio.h>
int main(){
    FILE* pf=fopen("./test.txt","r");
    if(pf==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    int ch=-1;
    while((ch=fgetc(pf))!=EOF){
        printf("%c\n",ch);
    }
    fclose(pf);
    pf=NULL;
    return 0;
}