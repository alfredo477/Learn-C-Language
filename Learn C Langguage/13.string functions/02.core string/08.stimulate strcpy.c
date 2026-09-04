///strncpy函数-限定长度复制
//strncpy(char* destination,const char* source,size_t number)
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
char* my_strcpy(char* dest,const char* src){
    assert(dest!=NULL);
    assert(src!=NULL);
    char* temp=dest;
    while(*dest++=*src++){

    }
    return temp;
}
int main(){
    char dest[15];
    const char* src="abcdef";
    char* ret=my_strcpy(dest,src);
    printf("%s",ret);
    return 0;
}