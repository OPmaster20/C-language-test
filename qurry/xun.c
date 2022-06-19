#include<stdio.h>
#include<cs50.h>
void flag(int x[]);
int main(void){
    int arr[10];
    for(int i=0;i<10;i++){
        int a=get_int("input:");
        arr[i]=a;
    }
    flag(arr);
}
void flag(int x[]){
    static int y=0;
    int arrx[10];
    if(y<9){
        y++;
        flag(x+1);
    }
    arrx[0]=x[0];
    printf("%d  ",arrx[0]);
}