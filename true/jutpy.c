#include<stdio.h>
#include<cs50.h>
#include<string.h>
void my_str(char x[],char y[],int k,int k2);
int main(void){
        char a[] = "wouyyyyyao";
        int k = strlen(a);
        char b[] = "yao";
        int k2 = strlen(b);
        my_str(a, b, k, k2);
    }
void my_str(char x[],char y[],int k,int k2){
    int p = 0;
    int ch = 0;
    for (int i = 0; i < k; i++) {
        if (p > k2) {
            printf("timeout!\n");
            break;
        }
        if (x[i] == y[p]&&(y[p]!= '\0') &&(x[i]!= '\0')) {
            while(x[i] + 1 == y[p]){
                i++;
                continue;
            }
            p++;
            ch=ch+1;
            printf("查询结果：%c 下标：%d\n",x[i],i);
            continue;
        }else{
             ch=ch+0;
        }
    }
    if(ch==0){
        printf("not found!\n");
    }else{
        printf("we found!\n");
    }
}