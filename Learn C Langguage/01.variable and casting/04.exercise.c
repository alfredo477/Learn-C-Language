#include<stdio.h>
int main(){
    float f=9.999;
    int a=(int)f;    //浮点型强制转换为整型 这样会损失精度0.999
    int b=(int)(f*100);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
