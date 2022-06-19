#include<stdio.h>
#include<cs50.h>
#include<string.h>
void ppd(char h[],char l[],int x,int y);
void ppds(char h[],char l[]);
int main(void){
    char a[10]="yuyao";
    char b[]="wode";
    int d=strlen(b);
    int f=strlen(a);
   // printf("%d \n",d);
   //ppd(a,b,d,f);
   ppds(a,b);
}
void ppd(char h[],char l[],int x,int y){
    for(int i=0;i<y;i++){
       if(l[i]!='\0')
           h[x+i]=l[i];
   }
   for(int i=0;i<10;i++){
       printf("%c ",h[i]);
   }
}
void ppds(char h[],char l[]){
    for(int i=0;i<6;i++){
        h[i]=l[i];
        printf("%c ",h[i]);
    }

}