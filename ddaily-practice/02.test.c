//排序
//题目描述 对输入的n个数进行排序并输出。
//输入格式 输入的第一行包括一个整数n(1<=n<=100)。 接下来的一行包括n个整数。
//输出格式 可能有多组测试数据，对于每组数据，将排序后的n个整数输出，每个数后面都有一个空格。每组测试数据的结果占一行。
//样例输入5
//       5 4 3 1 2
//样例输出1 2 3 4 5 
#include<stdio.h>
int main(){
    int n=0;
    int arr[101];//因为n从1-100
    int i,j,k,temp;
    while(scanf("%d",&n)!=EOF){
        for(i=1;i<=n;i++)
            scanf("%d",&arr[i]);//存入arr[]的值
    for(i=1;i<=n-1;i++){//
        k=i;
        for(j=i+1;j<=n;j++){
            if(arr[j]<arr[k])
                k=j;
        }       
        if(k!=i){
            temp=arr[k];
            arr[k]=arr[i];
            arr[i]=temp;
        }
    }
    for(i=1;i<=n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    }
    return 0;
}