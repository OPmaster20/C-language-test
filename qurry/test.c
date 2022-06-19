#include<stdio.h>
#include<cs50.h>
int main(void){
    int a=3;
    int b=1;
    printf("%d,%d\n",a,b);
    int c=0;
    c=a;
    a=b;
    b=c;
    printf("%d,%d\n",a,b);
}