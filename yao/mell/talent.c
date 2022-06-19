#include<stdio.h>
#include<cs50.h>
void king(int b){
    char* a=(char*)&b;
    if(*a==1){
        printf("min\n");
    }else{
        printf("max\n");
    }
}
int main(void){
    char a=-1;
    signed char a=-1;
    printf("%d \n",a)
}
