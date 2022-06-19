#include<stdio.h>
#include<cs50.h>
#include<string.h>
void move(int a[],int x,int k){
    int g[x];      //g[2]?
    int count=0;
    int count_be=0;
    for(int i=0;i<x+2;i++){
        if(count==(x+2)/2){
            a[x+i-1]=g[count_be];
            ++count_be;
        }else{
            ++count;
            g[i]=a[x+i-1];
            a[x+i-1]=a[i];
            g[i+1]=a[(x+i-1)+1];
        }
    }
    for(int j=0;j<k;j++){
        printf("%d ",a[j]);
    }
    printf("\n");
}
int main(void){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10];
    int a1=get_int("1>>:");
    move(a,a1,10);
    memcpy(b,a,sizeof(a));
    for(int i=0;i<10;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
}