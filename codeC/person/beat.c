#include<stdio.h>
#include<cs50.h>
int fx(int num,int sum[],int right){
    int left=0;
    while(right>=left){
        int g=(left+right)/2;
        if(num>sum[g]){
            right=g--;
        }else if(num<sum[g]){
            left=g++;
        }else{
            return 1;
        }
    }
    return 1;
}
int main(void){
    int a=get_int("A:");
    int t1[10]={1,2,3,4,5,6,7,8,9,10};
    int sd=sizeof t1[10] /sizeof t1[0]-1 ;
    int s=0;
    s=fx(a,&t1[10],sd);
    if(s==1){
        printf("we found!\n");
    }else{
        printf("not found!\n");
    }
}