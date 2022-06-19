#include<stdio.h>
#include<cs50.h>
#include<string.h>
void spin(char x[],int y,int str);
void spinx(char x[],int y,int str);
int main(void){
    char strs[5]={"yuyao"};
    int str=strlen(strs);
    int y=get_int("rotate:");
    spin(strs,y,str);
}


void spin(char x[],int y,int str){
    for(int j=0;j<y;j++){
        for(int i=0;i<str+1;i++){
        if(x[i+1]!='\0'){
             char temp =x[i];
        x[i]=x[i+1];
        x[i+1]=temp;
        }
    }
    }
    for(int z=0;z<str;z++){
        printf("%c ",x[z]);
    }
    printf("\n");
    //判别string相等
   // int f[5];
  //  for(int d=0;d<5;d++){
  //       char s=get_char("input>>");
  //      f[d]=s;
  //  }
  //  int g=0;
  //  while(g<5){
  //      printf("%c ",f[g]);
 //       g++;
 //   }
 //   int score=strcmp((const char*)x,(const char*)f);
 //   if(score!=0){
  //      printf("same!\n");
 //   }else{
  //      printf("not same!\n");
  //  }
    //----------------------------
    char yu[10]={"yuyao"};//yuyaoyuyao
    strncat(yu,yu,5);
    for(int m=0;m<lol/2;m++){
        if(x[m+y]==yu[m+y]){
            printf("same\n");
        }else if(x[m+y]!=yu[m+y]){
            printf("not same\n");
        }

    }

}





void spinx(char x[],int y,int str){
    for(int i=0;i<y;i++){
        if(x[i+1]!='\0'&& y!=1){
             char temp=x[i];
        x[i]=x[i+1];
        x[i+1]=temp;
        }else{
        for(int l=0;l<str+1;l++){
        if(x[l+1]!='\0'){
             char temp =x[l];
        x[l]=x[l+1];
        x[l+1]=temp;
    }
    }
    goto flag;

    }
    int count=0;
    for(int k=y;k<str-y;k++){
        count++;
        char temps=x[k];
        x[k]=x[str-count];
        x[str-count]=temps;
    }
    for(int j=0;j<str/2;j++){
        char tempd=x[j];
        x[j]=x[str-j-1];
        x[str-j-1]=tempd;
    }
    for(int p=0;p<str+1;p++){
        printf("%c ",x[p]);
    }
    printf("\n");
}

    flag:
    for(int z=0;z<str;z++){
        printf("%c ",x[z]);
    }
    printf("\n");
}