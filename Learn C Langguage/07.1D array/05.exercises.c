//把数组{1，2，3，4，5}变成{2，4，6，8，10}
//arr[i]=arr[i]*2
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int i=0;
    for(i=0;i<5;i++)
        printf("%d",arr[i]);
    printf("\n");
    for(i=0;i<5;i++)
        arr[i]=arr[i]*2;
    for(i=0;i<5;i++)
        printf("%d",arr[i]);    
    return 0;
}