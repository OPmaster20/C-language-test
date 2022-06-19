#include<stdio.h>
#include<cs50.h>
struct s{
    int age;
    string name;
    char number[20];
};
int main(void){
    FILE* pf=fopen("text2.txt","r");
    if(pf==NULL){
        printf("file open fail!\n");
    }else{
        printf("file open success!\n");
    }

   // fread(&str2,sizeof(struct s),1,pf);
    //fseek(pf,-2,SEEK_END);
    for(int i=0;i<4;i++){
        printf("%c \n",fgetc(pf));
    }
    if(ferror(pf)){
        printf("error\n");
    }else if(feof(pf)){
        printf("end of file\n");
    }

    // rewind(pf);
     int num=ftell(pf);
     printf("%d\n",num);
    //printf("%d %s %s",str2.age,str2.name,str2.number);


    fclose(pf);
    pf=NULL;
    printf("end\n");
}