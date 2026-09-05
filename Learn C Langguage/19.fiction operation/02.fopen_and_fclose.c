//用c语言来打开(fopen)和关闭(fclose)文件
//FILE *fopen(const char *filename, const char *mode) 
//filenmae:被打开的文件名可以是绝对路径或相对路径 mode:对打开文件的操作模式(读取或者写入等)
//若打开文件成功则返回指向FILE文件的指针，否则返回NULL指针 需要对fopen的返回值进行判断
//mode：r:以只读方式打开文件，该文件必须存在，否则打开失败
//      w:以只写方式打开文件，如果该文件不存在则创建该文件，如果该文件存在则清空该文件内容
//      a:以追加方式打开文件，如果该文件不存在则创建该文件，如果该文件存在则在该文件末尾追加内容
//      rb：以二进制只读方式打开文件，该文件必须存在，否则打开失败
//      wb：以二进制只写方式打开文件，如果该文件不存在则创建该文件，如果该文件存在则清空该文件内容
//      ab：以二进制追加方式打开文件，如果该文件不存在则创建该文件，如果该文件存在则在该文件末尾追加内容
//int fclose(FILE *stream)
//stream:指向FILE文件的指针，关闭该文件并释放资源
#include<stdio.h>
int main(){
    FILE *fp=fopen("test.txt","r");//打开文件 test.txt 以只读模式：该文件必须存在 否则打开失败
    if(fp==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    
    fclose(fp);//关闭文件
    return 0;
}