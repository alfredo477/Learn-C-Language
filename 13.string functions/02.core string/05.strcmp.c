//strcmp函数-字符串比较 strncmp可以选择前几个比较 (str,str,4(size_t number))
//int stecmp(const char* str1,const char* str2);
//int 返回类型是 -1(<);0(=);1(>);
//比较两个长度相等的字符串 str1和str2 从第一个字符开始对比 如果一样则相等 比较下一个字符直到不一样 比较ASCII值 谁大 则字符串大
//长度不相等 谁先遇到\0 谁小
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    const char* str1="abcdef";
    const char* str2="abcdef";
    int ret= strcmp(str1,str2);
    printf("%d\n",ret);
    return 0;
}