#include<stdio.h>
#include<cs50.h>
struct td{
    string a[3];
    int age[3];
    string b[3];
};

int main(void){
    struct td fd;
    for(int i=0;i<3;i++){
        string yao=get_string("you name:");
        int age_1=get_int("you age:");
        string money=get_string("you want:");
        fd.a[i]=yao;
        fd.age[i]=age_1;
        fd.b[i]=money;
    }
    for(int j=0;j<3;j++){
        int temp=0;
        string tempstr;
        string tempbo;
        if(fd.age[j]>fd.age[j+1]){
            temp=fd.age[j];
            fd.age[j]=fd.age[j+1];
            fd.age[j+1]=temp;
             tempstr=fd.a[j];
            fd.a[j]=fd.a[j+1];
            fd.a[j+1]=tempstr;
             tempbo=fd.b[j];
            fd.b[j]=fd.b[j+1];
            fd.b[j+1]=tempbo;
            printf("%s ",fd.a[j]);
            printf("%d ",fd.age[j]);
            printf("%s ",fd.b[j]);
        }

    }

}