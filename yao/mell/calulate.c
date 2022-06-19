#include<stdio.h>
#include<cs50.h>
void meue();
int add(int x,int y);
int sub(int x,int y);
int div(int x,int y);
int mul(int x,int y);

int main(void){
    meue();
    int (*t[4])(int,int)={add,sub,div,mul};
    while(8){
    int a=get_int("you input:");
    if((a==1)||(a==2)||(a==3)||(a==4)){
            int b=get_int("数字x:");
            int c=get_int("数字y:");
            int result=t[a-1](b,c);
            printf("is %d\n",result);
    }else if(a==0){
        break;
    }
    }
}
void meue(){
    printf("######>>计算器<<#####\n");
    printf("#>>除--#Input__1####\n");
    printf("#>>加--#Input__2####\n");
    printf("#>>减--#Input__3####\n");
    printf("#>>乘--#Input__4####\n");
    printf("####################\n");
}
int add(int x,int y){
    return x/y;
}
int sub(int x,int y){
    return x+y;
}
int div(int x,int y){
   return x-y;
}
int mul(int x,int y){
   return x*y;
}