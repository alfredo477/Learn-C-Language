#include<stdio.h>
int main(){
    //printf函数
    printf("Change\nWorld\n");//printf是一个库函数 需要对应的函数头stdio.h才能调用它
    printf("Change\n");//"\n"是换行的意思
    printf("World");
    //占位符
    printf("There are %d apples,%d bananas\n",3,9);//"%d"是占位符 依次对应序号
    printf("%s will come in","judy");            //"%s"也是占位符 s占的是字符串 d占的是十进制整数
    //字段宽度
    printf("%5d\n",123);//占位符宽度最小是5 且默认向右对齐 输出为 空空123
    printf("%5d\n",123456);//若整数大于等于五位则正常输出 输出为 123456
    printf("%-5d\n,123");//向左对齐 输出为 123空空
    //限定小位个数
    printf("Number is %.3f\n",0.5);//小数点后面三位 输出为 0.500
    printf("Number is %6.2f\n",0.5);//"6"代表字段宽度为6 "2"代表为小数点后面是两位 输出为 空空0.50 小数点也算作一个宽度
    return 0;    
}