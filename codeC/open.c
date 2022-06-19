#include<stdio.h>
#include<cs50.h>
void cmd();
int more(int y);
void year2();
int year(int z);
void sea(int k);
int add(int b);
void cmd2(int x);
int cmd3(int o);
int fx(int num,int sum[]){
    int sd=0;
    sd=sizeof sum /sizeof sum[0] ;
    for(int i=0;i<=sd;i++){
        if(num==sum[i]){
            return 1;
        }else{
            return 0;
        }
    }
}
int main(void){
    int a=get_int("A:");
    int t1[]={1,2,3,4,5,6,7,8,9,10};
    int s=0;
    s=fx(a,t1[]);
    if(s==1){
        printf("we found!\n");
    }else{
        printf("not found!\n");
    }
    //int num=get_int("Num:");;
    //int sum=0;
    //sum=add(num);
    //printf("is :%d\n",sum);
    //cmd();
    //int t=0;
    //for(int i=1000;i<=2000;i++){
        //if(year(i)==1){
           // t++;
            //printf("is %d\n",i);
        //}
   // }
    //year2();

    //printf("result:%d\n",t);
}
int cmd3(int o){
    if((o%2!=0)&&(o%3!=0)&&(o%5!=0)&&(o%7!=0)&&(o%11!=0)&&(o%13!=0)&&(o%17!=0)&&(o%19!=0)){
       return 1;
    }else{
        return 0;
    }
}
void cmd(){
for(int i=100;i<=200;i++){
if((i%2!=0)&&(i%3!=0)&&(i%5!=0)&&(i%7!=0)&&(i%11!=0)&&(i%13!=0)&&(i%17!=0)&&(i%19!=0)){
        //printf("YES!\n");
        printf("is %d\n",i);
    }//else{
       // printf("NO!\n");
   // }
}

}
void cmd2(int x){
if((x%2!=0)&&(x%3!=0)&&(x%5!=0)&&(x%7!=0)&&(x%11!=0)&&(x%13!=0)&&(x%17!=0)&&(x%19!=0)){
        printf("YES!\n");
    }else{
        printf("NO!\n");
    }

}
int more(int y){
    for(int u=2;u<y;u++){
    if(y%u==0)
        return 0;
    }
    return 1;
}
int year(int z){
    int t=0;
    if((z%4==0)&&(z%100!=0)){
       return 1;
    }else if(z%400==0){
        return 1;
    }

    return 0;
}

void year2(){
    int p=0;
    for(int ye=1000;ye<=2000;ye++){
     if((ye%4==0)&&(ye%100!=0)){
        printf("is %d\n",ye);
        p++;
    }else if(ye%400==0){
        printf("is %d\n",ye);
        p++;
    }
    }
printf("result :%d\n",p);
}


void sea(int k){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<=arr[i];i++){
        if(k==arr[i]){
            printf("We found!\n");
            break;
        }else{
            printf("Not found!\n");
            break;
        }
    }
}
int add(int b){
    b++;
    int t=0;
    t=b;
    return t;
}