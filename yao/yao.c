#include<stdio.h>
#include<cs50.h>
#include<string.h>
void input();
void su(int x);

void str(string x){
    printf("%lu\n",strlen(x));
}
void swap(int x[]){
    int h=0;
    for(int j=0;j<10;j++){
        if(x[j]<x[j+1]){
            h=x[j+1];
            x[j+1]=x[j];
            x[j]=h;
        }
        printf("%d \n",x[j]);
    }
}
void fre(char x[],char y[]){
    for(int i=0;i<2;i++){
        printf("%c%c%c%c\n",x[1],y[0],x[0],y[1]);
        break;
    }
}
int main(void){
    int a=get_int("A:");
    su(a);
}
void input(){
    char a[2];
    char b[2];
    for(int i=0;i<2;i++){
        char input=get_char(">>>:");
        a[i]=input;
    }
    for(int j=0;j<2;j++){
        char input2=get_char(">>>:");
        b[j]=input2;
    }


    fre(a,b);
}
void su(int x){
    for(int i=30;i>=0;i--){
        if((x>>i)&1){
            printf("%d ",x);
        }
printf("\n");
    }
}