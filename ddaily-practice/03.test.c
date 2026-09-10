//输入一串字符串 每隔2个字符 空格
#include<stdio.h>
int main(){
    char str[]="hello";
    int i=0,j;
    char* p=str;
    int len=sizeof(str)/sizeof(str[0]);
    while((*p)!='\0'){
        for(i=0;i<len;i++){
            if(i%2==0 & i!=0)
                printf(" ");
        }
    }
    return 0;
}