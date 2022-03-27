#include<stdio.h>
#include<cs50.h>
int main(void){
     int arr[10] = {45, 52, 65, 74, 76, 79, 81, 90, 92, 100};
     int a=get_int("A:");
     int k=1;
     for(int i=0;i<10;i++){
         if(a==arr[i]){
             printf("yes\n");
             k=1;
         }else{
             k=0;
         }
     }
     if(k==0){
         printf("no\n");

     }

}