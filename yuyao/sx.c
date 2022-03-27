#include<stdio.h>
#include<cs50.h>
#include<string.h>
void str();
void yao();
void bao();
int main(void){
    //str();
    //yao();
    bao();
}
void str(){
    string a=get_string("A:");
    string b=get_string("B:");
    string c=get_string("C:");
    if(strlen(a)>strlen(b)){
        printf("max is %s\n",a);
    }else if(strlen(c)>strlen(a)){
        printf("max is %s\n",c);
    }else{
        printf("max is %s\n",b);
    }
}
void yao(){
    char x[]="abcdef";
    char y[]="123456";
    char z[10];
    for(int i=0;i<x[i];i++){
        z[i]=x[i];
        printf("%c\n",z[i]);
    }
    for(int j=0;j<y[j];j++){
        z[j+6]=y[j];
        printf("%c\n",z[j+6]);
    }


}
void bao(){
    int arr[3][5]={{80,61,59,85,76},{75,65,63,87,77},
    {92,71,70,90,85}};
    int t=0;
            int t1=0;
            int t2=0;
    for(int i=0;i<1;i++){
        for(int j=0;j<5;j++){
            t=t+arr[0][j];
            //t1=t1+arr[1][j];
            //t2=t2+arr[2][j];

        }
    }
    for(int i=0;i<1;i++){
        for(int j=0;j<5;j++){
            t1=t+arr[1][j];
            //t1=t1+arr[1][j];
            //t2=t2+arr[2][j];

        }
    }
    for(int i=0;i<1;i++){
        for(int j=0;j<5;j++){
            t2=t+arr[2][j];
            //t1=t1+arr[1][j];
            //t2=t2+arr[2][j];

        }
    }
    t=t/5;
    t1=t1/5;
    t2=t2/5;
    int tr[3];
    tr[0]=t;
    tr[1]=t1;
    tr[2]=t2;
    int avg=0;
for(int i=0;i<tr[i];i++){
    avg=avg+tr[i];
}
 printf("%d\n",avg/3);

}