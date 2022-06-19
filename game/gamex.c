#include<stdio.h>
#include<cs50.h>
#include<unistd.h>
void pan();
void play(int t,int t1);
int x=5;
int y=6;
void pay(char x1[x][y],int a,int b);

int main(void){
    printf("...\n");
    sleep(1);
    printf(">>>oneman<<<\n");
    pan();
    play(5,6);

}


void pan(){
    printf("input you order\n");
    char a=get_char("[y/n]>>>");
    if((a=='y')||(a=='Y')){
        printf("start game...\n");
    }else if((a=='n')||(a=='N')){
        for(int i=1;i<4;i++){
            sleep(1);
            printf("%d ",i);
        }
        printf("exit\n");
    }else{
        printf("sorry,please again\n");
        pan();
    }
}
void play(int t,int t1){
    int s=5;
    int e=7;
    char a[5][7];
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            a[i][j]='#';
            //printf("%c ",a[i][j]);
        }
//printf("\n");
    }
  pay(a,s,e);
}
void pay(char x1[x][y],int a,int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            x1[3][0]=' ';
            x1[3][1]=' ';
            x1[3][2]=' ';
            x1[2][2]=' ';
            x1[1][2]=' ';
            x1[1][3]='*';
            printf("%c ",x1[i][j]);
        }
 printf("\n");
    }
    int input=get_int("you next>>>");
    if(){

    }


}