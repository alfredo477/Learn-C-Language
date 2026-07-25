//数组传参的重要特性：                          若是数值传参则复制一个值给形参 不共用地址
//1.函数的实参是数组，形参也可以写成数组形式
//2.形参如果是一维数组，数组大小可以省略不写
//3.数组传参，形参不会创建新的数组
//4.形参操作的数组和实参是同一个数组
//5.数组传参的本质是传递数组首地址（指针章节）
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
    print(arr,sz);//要上数组 不要写arr[3]

    reverse(arr,sz);

    print(arr,sz);
    return 0;
}