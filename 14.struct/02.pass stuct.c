//函数传参 和 typedef：给结构体类型或其他类型起别名
#include<stdio.h>
#include<ctype.h>
#include<string.h>
struct Student{
    char name[20];
    int age;
    char sex[5];
    char id[20];
};
void print_stuct(struct Student stu1){
    printf("%s\n",stu1.name);
    printf("%d\n",stu1.age);
    printf("%s\n",stu1.sex);
    printf("%s\n",stu1.id);
}
void print_stuct_pointer(struct Student *pstu){
    printf("%s\n",(*pstu).name);
    printf("%d\n",(*pstu).age);
    printf("%s\n",(*pstu).sex);
    printf("%s\n",(*pstu).id);
}
int main(){
    struct Student stu1={"龙傲天",10,"男","1234567890"};
    struct Student* pstu=&stu1;
    print_stuct(stu1);
    print_stuct_pointer(&stu1);
}