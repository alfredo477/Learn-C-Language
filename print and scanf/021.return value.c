#include<stdio.h>
int main(){
    int a,b,c;
    int ret = scanf("%d%d%d",&a,&b,&c);//"ret"为读取数字的个数
    printf("%d,%d,%d\n",a,b,c);
    printf("ret=%d\n",ret);
}
//control Z为终止符 终止之后printf里面的数字是随机值
//返回值为0 表示没有读取任何值或者匹配失败
//返回值为-1（EOF）表示在读取正确文件之前 发生读取错误或读取到文件末尾 EOF(End Of File) 