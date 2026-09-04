//结构体 是多种数据类型 按照逻辑形式放在一起
#include<stdio.h>
#include<ctype.h>
#include<string.h>
struct Student{//结构体成员列表
    char name[20];//姓名
    int age;//年龄
    char sex[5];//中文是两个字节
    char id[20];//学号
};/*stu1,stu2;//结构体变量列表*/ //也可以在下面定义
int main(){
    struct Student stu1={"龙傲天",10,"男","1234567890"};//整体初始化
    struct Student* pstu=&stu1;
    printf("%s\n",stu1.name);//访问 (结构体变量)+点号+（成员变量）
    printf("%d\n",stu1.age);
    printf("%s\n",stu1.sex);
    printf("%s\n",stu1.id);
    printf("======================\n");
    printf("%s\n",(*pstu).name);//访问结构体变量 (结构体指针).(成员变量)
    printf("%d\n",(*pstu).age);
    printf("%s\n",(*pstu).sex);
    printf("%s\n",(*pstu).id);
    printf("======================\n");
    printf("%s\n",pstu->name);//"->"指向符 等价于 (*结构体指针).(成员变量)
    printf("%d\n",pstu->age);
    printf("%s\n",pstu->sex);
    printf("%s\n",pstu->id);
    return 0;
}
//点号：结构体变量.成员变量 & *结构体指针.成员变量
//"->"指向符 ：结构体变量->成员变量