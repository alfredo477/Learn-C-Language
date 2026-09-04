#include<stdio.h>
int main(){
        int x=10;
        int y=3;
        float f1=(float)x/y;     //f1=10.00/3
        float f2=x/(float)y;     //f2=10/3.00
        float f3=(float)(x/y);    //f3=10/3
        printf("f1=%.2f\n",f1);   //f1=3.33
        printf("f2=%.2f\n",f2);   //f2=3.33
        printf("f3=%.2f\n",f3);   //f3=3.00
        return 0;
}