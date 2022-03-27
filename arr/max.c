#include<stdio.h>
#include<cs50.h>
int main(void){
    int arr[10]={2,6,21,45,1,0,89,67,99,76};
    int mx=arr[0];
    for(int i=0;i<10;i++){
        if(mx<arr[i]){
            mx=arr[i];
        }

    }
    printf("is %d\n",mx);

}