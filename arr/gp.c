#include<stdio.h>
#include<cs50.h>
#define sun 5
int main(void){
    int arr[sun]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d = %p\n",arr[i],&arr[i]);

    }

}