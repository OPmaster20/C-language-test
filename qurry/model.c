#include<stdio.h>
#include<cs50.h>
void sea(int x[]);
int main(void){
    int arr[10];
    for(int i=0;i<10;i++){
        int a=get_int("Input:");
        arr[i]=a;
    }
    sea(arr);

}
void sea(int x[]){
    int a=0;
    int b=0;
    int c=0;
    for(int k=0;k<10;k++){
        if(x[k]>=1){
            a++;
        }else if(x[k]<0){
            b++;
        }else if(x[k]==0)
        c++;
    }
    printf("pos is %d,neg is %d,other is %d",a,b,c);

}