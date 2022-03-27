#include<stdio.h>
#include<cs50.h>
#include<string.h>
void add();
int main(void){
    //string s="hello";
    //string *t=NULL;
    //t=&s;
    //printf("%s,%s",s,*t);

    //char t[]="he ll o";
    //int count=0;
    //for(int i=0;i<t[i];i++){
      //  if(t[i]!=32){
        //    count++;
            //printf("%d\n",t[i]);
        //}

    //}
    //printf("%d\n",count);
add();

}
void add(){
    char a[]="yu";
    char t[]="yao";
    char c[10];
    for(int i=0;i<2;i++){
        if(c[i]!='\0'){
            c[i]=a[i];
            printf("%c ",c[i]);
        }else{
            break;
        }
    }

}