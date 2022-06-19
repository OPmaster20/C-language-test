#include<stdio.h>
#include<cs50.h>
int linear(int a[3][3],int k);
int bit(int a[3][3],int k,int m,int n);

int main(void){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int k=get_int("input:");
    int x=0;
    int y=0;
    int h=bit(a,k,x,y);//linear(a,k);
    if(h==1){
        printf("found!\n");
        printf("[%d][%d]\n",x,y);
    }else{
        printf("not found!\n");
    }

}
int bit(int a[3][3],int k,int m,int n){
    int y=0;
    int z=2;
    int i=0;
    while(i<=2){
        if(k<a[i][z]){
            z--;
            if(k==a[i][z]){
                y=1;
                m=i;
                n=z;
                break;
            }
        }else if(k>a[i][z]){
            i++;
            z++;
            if(k==a[i][z]){
                y=1;
                m=i;
                n=z;
                break;
            }
        }else{
            y=1;
            m=i;
            n=z;
            break;
        }


    }
    return y;
}

int linear(int a[3][3],int k){
    int t=0;
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           if(k==a[i][j]){
               t=1;
           }
        }
    }
    return t;

}