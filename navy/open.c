#include<stdio.h>
#include<cs50.h>
int main(void){
    int a=get_int(">>:");
    int con=6;
    int c;
    for(int i=0;i<a;i++){
        con--;
        c=0;
        for(int j=0;j<a;j++){
            if(c<con){
                printf(" ");
                c++;
            }else{
                c--;
                printf("*");
            }
        }
        printf("\n");
    }
}