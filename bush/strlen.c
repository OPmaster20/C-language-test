#include<stdio.h>
#include<cs50.h>
#include<string.h>
void str1(char* c){
    if(*c!='\0'){
        str1(c+1);
    }
    printf("%c",*c);
}

int main(void){
    char b[]="hello";
    str1(b);

}