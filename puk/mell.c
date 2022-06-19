#include<stdio.h>
#include<cs50.h>
void yu(int x,int y,int z){
    int i=0;
    if(x>y){
        i=x;
        if(i>z){
            printf("max is %d\n",i);
        }else{
            printf("max is %d\n",z);
        }
    }else{
        i=y;
        if(i>z){
            printf("max is %d\n",i);
        }else{
            printf("max is %d\n",z);
        }

    }

}
void yao(int x){
    int t=0;
    t=3.14*(x*x);
    printf("%d\n",t);
}
void met(){
    int arr[10]={67,89,66,74,75,89,79,99,88,80};
      int y=0;
    for(int i=0;i<10;i++){
        y=y+arr[i];
    }
    printf("avg is %d\n",y/10);

}
void ko(string c){
    //printf("%d \n",c);
    int y=2;
    for(int i=0;i<c[i];i++){
             printf("%c \n",c[y]);
            y--;
    }

}
int main(void){
   string a=get_string("A:");
   ko(a);
    //int c=get_int("C:");

}