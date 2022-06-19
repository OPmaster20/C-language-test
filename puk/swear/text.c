#include<stdio.h>
#include<cs50.h>

typedef struct uid{
    char name[10];
    int age;
    char sex[10];
    char address[10];
    int id;
}uid;
struct boddle{
    int a;
    struct uid x;
    char b;
};
void sea(uid t){
    printf("%s \n",t.name);
}
int main(void) {
    struct boddle person = {26,{"ren", 25, "女神", "苏州", 1},'a'};
    //person pel;
    printf(" % d \n", person.x.age);
    uid kail={"yuyao",23,"female","suzou",2};
    sea(kail);
}
