#include<stdio.h>
#include<cs50.h>
void str(const char* x,const char* y){
    while(*x!='\0'){
        if(x>y){
            printf("x\n");
            break;
        }else if(x<y){
            printf("y\n");
            break;
        }else if(x==y){
            x++;
            y++;
        }
    }

}
int main(void){
    char a[]="yuyao";
    char b[]="wdyuyao";
    str(a,b);
}