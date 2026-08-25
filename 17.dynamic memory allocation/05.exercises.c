//动态数组求和程序：
//1.用户输入数组大小n；
//2.使用malloc动态创建包含n个整数的数组
//3.让用户输入n个整数存入数组
//4.计算并打印所有元素的和
//5.释放动态分配的内存
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main(){
    int n=0,i,sum=0;
    int arr[]={0};
    printf("请输入数字：");
    scanf("%d",&n);
    int* p=(int*)malloc(n*sizeof(int));
    assert(p!=NULL);
    if(p==NULL){
        printf("动态内存开辟失败");
        return -1;
    }
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);//可以不用建立数组 直接&p[i](&*(p+i))
    }
    for(i=0;i<n;i++){
        sum+=*(p+i);
        //printf("%d",sum);应该在循环外面
    }
    printf("%d",sum);
    free(p);
    p=NULL;
}