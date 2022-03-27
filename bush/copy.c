#include<stdio.h>
#include<cs50.h>
int add(int x);
int main(void){
    int a=get_int("A:");
    add(a);

}
int add(int x){
   // while(x>10){
       int o=x/1000;
       int l=x/100%10;
       int k=x/10%10;
        int f=x%10;
        printf("%d %d %d %d\n",o,l,k,f);
    //}
return 0;
}