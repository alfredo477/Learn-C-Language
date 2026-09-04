//矩阵转置 原始矩阵  j=0 1 2 
//               i=0  1 2 3    转置后矩阵 1 4 7
//               i=1  4 5 6              2 5 8
//               i=2  7 8 9              3 6 9
//矩阵的值沿着对角线对折变换 arr[0][1]=arr[1][0] 所以就是i，j互换
#include<stdio.h>
int main(){
    int arr[3][3]={1 ,2,3,4,5,6,7,8,9};
    int i,j;
    int temp;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",arr[i][j]);//printf("%d ",arr[i][j])时，%d后面需要有空格 不然输出是为123 而不是1 2 3
        printf("\n");//进行换行的主要原因是突出矩阵是三行;而在这里是因为在i循环里面;这样i=0时，当j遍历完之后就相当于一行完成
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){         //i=j时不换 所以从j=i+1开始 这样保证除了对角线的值 都进行了互换值
                temp=arr[i][j];     //计算的时候 把元素看成一个整体 不要单纯的互换i，j的值
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    printf("\n");
}