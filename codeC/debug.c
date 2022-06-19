#include<stdio.h>
#include<cs50.h>
#include<string.h>
int add(int x,int y){
    return x*y;
}
void copy(char* arr,char* arr2){
    for(int i=0;i<arr[i];i++){
        if(arr2[i]=='\0'){
            break;
        }else{
             arr[i]=arr2[i];
        }
        printf("%c ",arr[i]);
    }


}
int main(void){
    char arr[]="*******mylover";
    char arr2[]="yao";
    copy(arr,arr2);
}