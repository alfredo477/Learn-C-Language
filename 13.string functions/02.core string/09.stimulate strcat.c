//strcat 字符串连接
//char* strcat(char* destination,const char* source);
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
char* my_strcat(char* dest,const char* src){
    assert(dest!=NULL);
    assert(src!=NULL);
    char* temp=dest;
    while(*dest!='\0'){//不可以写成(*dest++！=\0)在第五次的时循环 但是*dest已经是\0 下一次循环停止 执行dest++ 保留有\0未被覆盖 后面会熔断
        dest++;
    }
    while(*dest++=*src++){//边走边复制 很经典

    }
    return temp;
}
int main(){
     char dest[15]="hello";
    const char* src="abcdef";
    char* ret=my_strcat(dest,src);
    printf("%s",ret);
    return 0; 
}