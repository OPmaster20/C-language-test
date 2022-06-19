#include<stdio.h>
#include<cs50.h>
#include<string.h>
struct sd{
    char name[20];
    int age;
    char address[30];
    char number[18];
    char sex;
};
void add(struct sd* persons);
//void delect(int x,struct sd* personx);
void show(int k,struct sd* persons);
void delect(int k,struct sd* persons);
void save(int k,struct sd* persons);
void start(){
    printf("#0:退出#4:添加####\n");
    printf("#1:搜索#5:显示####\n");
    printf("#2:修改#6:排序####\n");
    printf("#3:删除#7:保存####\n");
}
int main(void){
    struct sd person[50];
    int k=sizeof(person);
    while(1){
        start();
        int a=get_int("input:");
        if(a==0){
            printf("exit...\n");
            break;

        }else if(a==1){
            printf("search mode...\n");

            //search();
        }else if(a==2){
            printf("modify mode...\n");

           // modify();
        }else if(a==3){
            printf("delect mode...\n");
            delect(k,&person[50]);
            //delect();
        }else if(a==4){
            printf("add mode...\n");
            add(&person[50]);
           // add();
        }else if(a==5){
            printf("show mode...\n");
            show(k,&person[50]);
            //show();
        }else if(a==6){
            printf("sort mode...\n");

            //sort();
        }else if(a==7){
            printf("save mode...\n");
            save(k,&person[50]);


        }else{
            printf("input again\n");
        }
    }
}
void add(struct sd* persons){
    int i=0;
    int a;
     a=get_int("输入次数：");
    while(1){
        if(i!=a){
            printf("[%d/%d]\n",i,a);
            string name_you=get_string("name:");
            int y=strlen(name_you);
            for(int m=0;m<y;m++){
                persons->name[m]=name_you[m];
            }

            int age_you=get_int("age:");
            persons->age=age_you;

            string address_you=get_string("address:");
            int x=strlen(address_you);
            for(int n=0;n<x;n++){
                persons->address[n]=address_you[n];
            }
            string number_you=get_string("number:");
            int p=strlen(address_you);
            for(int c=0;c<p;c++){
                persons->number[c]=number_you[c];
            }

            char sex_you=get_char("sex:");
            persons->sex=sex_you;

        i++;

        } else if(a<0){
        printf("error!\n");
    }else if(i==a){
        printf("[%d/%d]\n",i,a);
        printf("thank you!\n");
        break;
    }
    }


}
void show(int k,struct sd* persons){
    printf("please wait...\n");
    if(persons->age==' '){
        printf("is null!");
    }else{
        printf("name:");
        for(int i=0;i<5;i++){
             printf("%c ",persons->name[i]);
        }
        printf("\n");
         printf("age:%d\n",persons->age);

         printf("address:");
         for(int j=0;j<6;j++){
             printf("%c ",persons->address[j]);
         }
         printf("\n");

          printf("number:");
         for(int z=0;z<10;z++){
             printf("%c ",persons->number[z]);
         }
         printf("\n");

         printf("sex:%c \n",persons->sex);
    }
}

void delect(int k,struct sd* persons){
    if(k==0){
        printf("check out you data!\n");
    }
    printf("do you want to empty it?[n/y]\n");
    char a=get_char("you:");
    if(a=='n'&&a=='N'){
        printf("ok\n");
    }else if(a=='y'&&a=='Y'){
        printf("waitting..\n");
        for(int i=0;i<k;i++){
            persons->name[i]=' ';
            persons->age=' ';
            persons->address[i]=' ';
            persons->number[i]=' ';
            persons->sex=' ';
        }
        printf("empty ok\n");
    }
}
void save(int k,struct sd* persons){
    FILE* p=fopen("text3.txt","w");
    if(p==NULL){
        printf("is NULL!\n");
    }else{
        printf("open success!\n");
    }

    for(int i=0;i<3;i++){
        fwrite();

    }

    fclose(p);
    p=NULL;

}