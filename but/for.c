#include<stdio.h>
#include<cs50.h>
int main(void){
    int arr[3][3];
    int ad=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int a=get_int("A:");
            arr[i][j]=a;
        }

    }
    for(int z=0;z<3;z++){
        for(int y=0;y<3;y++){
            //printf("%d ",arr[z][y]);
            if(arr[z][y]<arr[z][y+1]){
                ad=arr[z][y+1];
            }else{
                ad=arr[z][y];
            }
        }
       // printf("\n");
    }
    printf("%d\n",ad);

}