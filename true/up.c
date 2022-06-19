#include<stdio.h>
#include<ctype.h>
#include<string.h>


void my_str(void* x[5],void* y[],int z){
    for(int i=0;i<z;z--){
        *(char*)y[i]=*(char*)x[i];
        printf("%c ",*(char *)y[i]);
    }

}
int main(void){
    char a[5]="yuyao";
    char b[10];
    int k=strlen(b);
    int c=sizeof(a);
    my_str(a,b,c);
    //int t=strlen(a);
    //for(int i=0;i<t;i++){
      //  if(islower(a[i])){
        //    a[i]=toupper(a[i]);
          //  printf("%c ",a[i]);
       // }
   // }
   // printf("\n");
}