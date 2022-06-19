#include<cs50.h>
#include<stdio.h>
int main(void){
    printf("%s\n",__FILE__);
    FILE* a=fopen("text2.txt","w");
    if(a==NULL){
        printf("is null");
    }
    for(int i=0;i<3;i++){
          fprintf(a,"time:%s",__DATE__);
          printf("%d\n",i);
    }

    fclose(a);
    a=NULL;

}