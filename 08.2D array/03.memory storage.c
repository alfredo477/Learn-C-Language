//证明空间连续
#include<stdio.h>
int main(){
    int arr[2][3]={0};
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("&arr[%d][%d]=%d\n",i,j,&arr[i][j]);//运行结果相差4 int类型字节数
        }
        printf("\n");
    }
    return 0;
}