//continue代表继续的意思 如果在循环中代表循环继续
//当前循环结果为 1 2 3 4
#include<stdio.h>
int main(){
    int i=0;
    while(i<=10){
        if(i==5)
            continue;  //当i=5时 执行continue 循环到while 但是i=5值不变 陷入死循环;continue 之后的代码不会执行
        i++;
        printf("%d",i);
    }
    return 0;
}
//若循环为for循环 for(i=1;i<=10;i++) 循环结果为 1 2 3 4 6 7 8 9 10