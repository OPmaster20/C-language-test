#include<stdio.h>
#include<cs50.h>
void bird(int a[3][3],int x,int y);
void tag(int (*p)[3],int x,int y);
int main(void){
    int t[5]={1,2,3,4,5};
    int fog[3][3]={{2,5,6},{8,9,3},{0,3,2}};
    bird(fog,3,3);
    tag(fog,3,3);
    //int (*t1)[5]=&t;
    //for(int i=0;i<5;i++){
      //  printf("%d \n",(*t1)[i]);
    //}
}
void bird(int a[3][3],int x,int y){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void tag(int (*p)[3],int x,int y){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }

}