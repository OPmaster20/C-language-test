#include<stdio.h>
#include<cs50.h>
int main(void){
    int a=get_int("数字>>:");
    int b=get_int("次数>>:");
    int sum=0;
    int h=0;
    int y=0;
    for(int i=0;i<b;i++){
        y=y*10+2;
       sum=sum+y;
    }
    printf("result: %d \n",sum);

//a  aa  aaa  aaaa aaaaa
//2  22  222  2222 22222

}