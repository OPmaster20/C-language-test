#include<stdio.h>
#include<cs50.h>
void asd(int copy[]);
void asd_plus(int copt[]);

int main(void){
     int y=0;
     int copy[5];
     int arr[5];
     for(int k=0;k<5;k++){
        int a=get_int("A:");
        arr[k]=a;
     }
     asd(arr);
     asd_plus(arr);

}
void asd(int copy[]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+copy[i];
    }
    printf("result is %d\n",sum/5);

}
void asd_plus(int copt[]){
    int sum=0;
    int mx=0;
    int jk=0;
    for(int i=0;i<5;i++){
        sum=sum+copt[i];
    }
    mx=sum/5;
    for(int j=0;j<5;j++){
        if(sum>copt[j]){
            jk=copt[j];
        }
    }
    printf("max is %d \n",jk);/

}