#include<stdio.h>
#include<cs50.h>
#include<string.h>
void sea(int x){
    if(x>9){
        sea(x/10);
    }
    printf("%d\n",x%10);

}
int main(void){
    int a=get_int("A:");
    sea(a);



}