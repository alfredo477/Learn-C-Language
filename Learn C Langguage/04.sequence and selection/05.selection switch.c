//"switch case case...defult"
//switch后的expression必须是整型表达式 case后的值必须是整型常量
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("匹配到1\n");
        break;
        case 2:
        printf("匹配到2\n");
        break;
        default:
        printf("谁也没有匹配到\n");
        break;
    }
    return 0;
    
}