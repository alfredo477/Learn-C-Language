//数组串联:
//给你一个长度为n的整数组nums。请你构建一个长度为2n的答案数组ans，数组下标从0开始计数，对于所以0<=i<n的i，满足下述要求
//1.ans[i]==nums[i] 因为ans长度是ans两倍 就是赋值
//2.ans[i+n]==nums[i]
//ans是由两个数组串联形成 返回ans
//示例：
//输入：nums=[1,2,1]
//输出：[1,2,1,1,2,1]
#include<stdio.h>
#include<stdlib.h>
int* array_cat(int* nums,int numssize,int* returnsize){
    int* ans=malloc(numssize*sizeof(int));
    int i;
    for(i=0;i<numssize;i++){
        ans[i]=nums[i];
        ans[i+numssize]=nums[i];
    }
    *returnsize=numssize*2;
    return ans;
}
int main(){
    int nums[]={1,2,1};
    int numssize=sizeof(nums)/sizeof(nums[0]);
    int returnsize=0;
    int* ptr=array_cat(nums,numssize,&returnsize);
    printf("%d\n",returnsize);
    for(int i=0;i<returnsize;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}