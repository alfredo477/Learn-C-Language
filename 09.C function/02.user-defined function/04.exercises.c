//数组操作函数 用print()函数打印数组中每一个元素 reverse()函数完成数组元素的逆置
#include<stdio.h>
void print(int arr[],int sz){//用void来表示不需要返回值 表示一个操作
    int i=0;
    for(i=0;i<sz;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void reverse(int arr[],int sz){//数组的逆置是用while来改变的
    int i=0;
    int j=sz-1;//j的值需要小于sz
    int temp;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int arr[3]={1,2,3};
    int sz=sizeof(arr)/sizeof(arr[0]);
    printf("原始: ");
    print(arr,sz);//要上数组 不要写arr[3]

    reverse(arr,sz);

    printf("逆置后: ");
    print(arr,sz);
}