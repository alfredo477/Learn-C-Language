//函数          如果返回下列条件即为真
//iscentrl      任何控制字
//isspace       空白字符：空格'',换页'\f',换行'\n',回车'\r',制表符'\t',或者垂直制表符'\v'
//isdigit       十进制数字'0'-'9'字符
//isxdigit      十六进制数字，包括所有十进制数字字符，小写字母a-f，大写字母A-F
//islower       小写字母a-z
//isupper      大写字母A-Z
//isalpha       字母a-z或者A-Z
//isalnum       字母或者数字，a-z,A-Z,0-9
//ispunct       标点符号，任何不属于数字或者字母的图形字符(可打印)
//isgraph       任何图形字符
//isprint       任何可打印字符，包括图形字符和空白字符
//上述是库函数 可以直接使用
#include<stdio.h>
#include<ctype.h>
int main(){
    char c='a';
    int r=isdigit(c);
    if(r)//如果是if(c)那么结果一直是真 因为c会转化为ASCII值99
        printf("是十进制数字\n");
    else
        printf("不是十进制数字\n");
    if(islower(c))
        printf("是小写字符\n");
    else
        printf("不是小写字符\n");
    if(isupper(c))
        printf("是大写字符\n");
    else
        printf("不是大写字符\n");
    if(isalpha(c))
        printf("是字母\n");
    else
        printf("不是字母\n");
    if(isalnum(c))
        printf("是数字或字母\n");
    else
        printf("不是字母或数字\n");
    
}