//typedef：给结构体类型或其他类型起别名
#include<stdio.h>
typedef struct Student{
    char name[20];
    int age;
    char sex[5];
    char id[20];
}stu;//无typedef时 stu是结构体变量 有时 stu 则成为一种数据类型(stuct student)
struct Student2{
    char name[20];
    int age;
    char sex[5];
    char id[20];
};
typedef struct Student str;
typedef long long LLong;
typedef int* p;
int main(){
    struct Student stu1={"龙傲天",10,"男","1234567890"};
    stu s={"龙傲天",10,"男","1234567890"};
    str s2={"龙傲天",10,"男","1234567890"};
    LLong b=1000;
    int a=10;
    p p1=&a;//不可以是p1=&stu1 因为类型不匹配 一个是int 一个是stuct 除非struct studet别名是 *stu
    printf("%s\n",s.name);//需要在后面输出具体变量 %s无法打印出完整结构体
    printf("%s\n",s2.name);
    return 0;
}