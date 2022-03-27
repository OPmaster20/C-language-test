#include<stdio.h>
#include<cs50.h>
int main(void){
    int arr[3][3]={{1,4,5},{7,3,8},{9,6,1}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("%d is %p\n",arr[i][j],&arr[i][j] );
        }
        //printf("\n");
    }


}