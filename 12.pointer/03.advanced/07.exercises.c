//下列打印内容的结果分别是多少？请写出结果并解释原因
//字符串可以理解为一个数组名 指针指向的是字符串的首个字符的地址
//字符串数组 指针指向数组 指针表示数组首元素的地址(二级指针) 
//求指针的字节大小 去掉* 求sizeof
#include<stdio.h>
int main(){
    char* a[]={"work","at","alibaba"};//指针数组 元素是指针(地址)
    char** pa=a;//pa指向字符串数组a的首元素"work"的首字母"w"地址的地址
    char* pc="boge";
    char** pc2=&pc;
    pa++;
    printf("%d\n",pc2);
    printf("%d\n",pc2+1);//二级指针加一(加8个字节 去掉* 求sizeof还是指针) 指向第二个元素 所以 pa++表示a[1]中"a"地址的地址
    printf("============================");
    printf("%s\n",pc);//%s按首地址打印字符串
    printf("%p\n",pc);
    printf("%p\n",pc+1);//一级指针 求字节大小(去掉* 求sizeof char类型 1个字节)
    printf("%s\n",*pa);//所以*pa是a[1]中首元素"a"的地址 但是%s是以地址去打印把它输出为at
    return 0;
}