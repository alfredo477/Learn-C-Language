//size_t strlen(const char* str)
//原理：遇到\0停止
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
size_t my_strlen(const char*str){
    int count;
    if(str==NULL)
        return 0;
    while(*str!='\0'){
        count++;
        str++;
    }
    return count;
}
int main(){
    char* str="NULL";//如果str是NULL 
    assert(str!=NULL);//断言 在开发者模式里面 现在是release模式
    int len=my_strlen(str);   
    printf("%d\n",len);
    return 0;
}