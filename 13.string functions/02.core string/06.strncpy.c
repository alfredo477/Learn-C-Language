//strncpy函数-限定长度复制
//strncpy(char* destination,const char* source,size_t number)
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char dest[15]={0};
    const char* src="abcdef";
    char* ret=strncpy(dest,src,3);
    printf("%s\n",ret);
    printf("%s\n",dest);
}
//strstr sreok