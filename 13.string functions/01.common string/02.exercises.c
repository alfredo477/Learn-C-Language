//给定一个字符数组，只包含数字字符，和大小写字母，统计数字字符的个数，大写字母个数，小写字母个数
#include<stdio.h>
#include<ctype.h>
void count(char *p,int len){
    int count_lower_char=0;
    int count_upper_char=0;
    int count_num=0;
    for(int i=0;i<len;i++){
        int c=p[i];//p[i]=*(p+i) 因为*p是crr[0] *(p+1)是crr[1] 所以*(p+i)是crr[i];
        if(islower(c))
            count_lower_char++;
        if(isupper(c))
            count_upper_char++;
        if(isdigit(c))
            count_num++;
        }
    printf("数字字符的个数是%d\n",count_num);
    printf("大写字符的个数是%d\n",count_upper_char);
    printf("小写字符的个数是%d\n",count_lower_char);
}
int main(){
    char crr[]={"abcde1234AB"};//crr[12]长度是12 里面元素是11个char字符给数组赋值 默认末尾有一个\0
    char crr1[]={'a','b','c','d','e','1','2','3','4','A','B'};//长度为11 末尾无\0
    int len=sizeof(crr)/sizeof(crr[0]);//len长度是12 但末尾\0对数值不影响
    char* p=crr;//crr默认为数组首元素的地址
    count(p,len);
}