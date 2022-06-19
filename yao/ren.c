#include<stdio.h>
#include<cs50.h>
struct srr{
        int a;
        string f;
        int c;
    };
int main(void){
    struct srr t;
    struct srr* grr=&t;
    t.a=4;
    t.f="hello";
    t.c=6;
    printf("%s\n",(*grr).f);
    printf("%d\n",t.a);

}