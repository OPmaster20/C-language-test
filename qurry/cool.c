#include<stdio.h>
#include<cs50.h>
void get(int y[]){
    int count=0;
    for(int x=0;x<10;x++){
        if(y[x]%2!=1){
            count++;
        }

    }
    printf("is %d\n",count);

}
int main(void){
    int arr[10];
    for(int i=0;i<10;i++){
        int a=get_int("input:");
        arr[i]=a;
    }
    get(arr);
}