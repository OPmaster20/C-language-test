#include<cs50.h>
#include<stdio.h>
struct vii{
    int s;
    string g;
    string h;
};
int main(void){
    struct vii s={78,"yuyao","mygirl"};
    FILE* b=fopen("text.txt","w");
    if(b==NULL){
        printf("file open error!\n");
    }else{
        printf("file open success!\n");
    }
  fprintf(b,"%d %s %s",s.s,s.g,s.h);
    //char a[20];
    //printf("%s ",fgets(a,20,b));
    string a=get_string("you want to input word:");
    fputs(a,b);
    fclose(b);
    b=NULL;
    printf("close success!\n");
    printf("Do you want to check file?[n/y]\n");
    char str=get_char("your answer:");
    if(str=='n'){
        printf("thank you!\n");
    }else if(str=='y'){
        FILE* pf=fopen("text.txt","r");
        if(pf==NULL){
            printf("is NULL!,check out!\n");
            fclose(pf);
            pf=NULL;
            printf("do it again!\n");
        }else{
            char txt[30];
            printf("file content:%s ",fgets(txt,30,pf));
            printf("\n");
            fclose(pf);
            pf=NULL;
            printf("see you later\n");
        }

    }

}