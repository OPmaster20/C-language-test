#include<stdio.h>
#include<cs50.h>
int main(void){
    int x[10][10]={0};
    for(int i=0;i<10;i++){
        for(int j=0;j<=i;j++){
            if(i==j){
                x[i][j]=1;
            }
            if(j==0){
                x[i][j]=1;
            }
            if(j>=2&&x[i][j]==0){
                x[i][j]=x[i-1][j]+x[i-1][j+1];
            }
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }

}