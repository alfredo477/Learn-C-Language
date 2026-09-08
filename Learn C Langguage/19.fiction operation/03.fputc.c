//fputc:将参数character写入到stream指向的输出流中
//
//fgetc:从stream指向的输入流中读取下一个字符
//
#include<stdio.h>
#include<assert.h>
int main(){
    FILE* pf=fopen("./test.txt","w");//"w"write 写入数据
    if(pf==NULL){
        printf("打开文件失败\n");
        return -1;
    }
    fputc('h',pf);
    fputc('e',pf);
    fputc('l',pf);
    fputc('l',pf);
    fputc('o',pf);
    char crr[]={'a','b','c','d'};
    int len=sizeof(crr)/sizeof(crr[0]);
    for(int i=0;i<len;i++){
        fputc(crr[i],pf);
    }
    fclose(pf);
    pf=NULL;
    return 0;
}