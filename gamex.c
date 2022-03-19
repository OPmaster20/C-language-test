#include<stdio.h>
#include<cs50.h>
#include<string.h>
void map();
void maps(char x[11][11]);
void play(char s[11][11]);
void game(char a[11][11],char b[11][11]);
void end();
int count=0;

int main(void){
    printf("|----STRTER----|\n");
    string a=get_string("You input>>>[yes/no]");
    int t=0;
    for(int i=0;i<a[i];i++){
      if((a[0]=='y'&&a[1]=='e'&&a[2]=='s'&&strlen(a)==3)||(a[0]=='Y'&&a[1]=='e'&&a[2]=='s'&&strlen(a)==3)){
        t=1;
       }else if((a[0]=='n'&&a[1]=='o'&&strlen(a)==2)||(a[0]=='N'&&a[1]=='o'&&strlen(a)==2)){
        t=0;
       }else{
        t=2;
    }
    }

    switch(t){
        case 1:
        printf("Letsgo>>>\n");
        count++;
        map();
        break;
        case 0:
        printf("quit....\n");
        count++;
        break;
        case 2:
        printf("????????\n");
        count++;
        if(count>0){
            printf("Do you want try a again?[1/0]\n");
            int b=get_int(">>>");
            if(b==1){
                main();
            }else if(b==0){
                printf("quit....\n");
                break;
            }

        }

    }
}
void map(){
    char arr[11][11];
    for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
            arr[i][j]='0';
            arr[0][i]='|';
            arr[j][0]='|';
            arr[i][10]='|';
            arr[10][j]='|';
        }
    }
    maps(arr);
}
void maps(char x[11][11]){
    for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
            x[2][5]='1';
            x[3][6]='1';
            x[7][8]='1';
            x[6][3]='1';
            x[7][4]='1';
            x[6][8]='1';
            x[2][8]='1';
            x[9][5]='1';
             //printf("%c ",x[i][j]);
        }
    }
    play(x);
}
void play(char s[11][11]){
    char arr[11][11];
    for(int z=0;z<11;z++){
        printf("%d ",z);

    }
    printf("\n");
    for(int i=0;i<11;i++){
         printf("%d ",i+1);
        for(int j=0;j<11;j++){
            arr[i+1][j+1]='$';
            arr[0][i]='|';
            arr[j][0]='|';
            arr[i][10]='|';
            arr[10][j]='|';
             printf("%c ",arr[i][j]);
        }
         printf("\n");
    }
    game(s,arr);

}
void game(char a[11][11],char b[11][11]){
    int cill=0;
    while(count<10){
        int t=get_int("STREAT>>>");
    int r=get_int(">>>>>");
    //printf("%c \n",t);
     int ss=t;
    int sa=r;
    if((t>0&&r<=9)||(t<=9&&r>0)){
        printf("Check...\n");
    }else{
        printf("Eorror!\n");
    }
    for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
                if(a[ss][sa]=='1'){
                    b[ss][sa]='1';
                    printf("%c ",b[i][j]);
                    printf("Boom!...\n");
                    printf("game over!\n");
                    cill=10;
             }
             if((a[ss-1][sa]=='0')&&(a[ss+1][sa]=='0')&&(a[ss+1][sa+1]=='0')
             &&(a[ss+1][sa-1]=='0')&&(a[ss-1][sa+1]=='0')&&(a[ss-1][sa-1]=='0')
             &&(a[ss][sa+1]=='0')&&(a[ss][sa-1]=='0')){
                 b[ss][sa]='&';
                 b[ss-1][sa]='0';
                 b[ss+1][sa]='0';
                 b[ss+1][sa+1]='0';
                 b[ss+1][sa-1]='0';
                 b[ss-1][sa+1]='0';
                 b[ss-1][sa-1]='0';
                 b[ss][sa+1]='0';
                 b[ss][sa-1]='0';
                 cill++;
                 printf("%c ",b[i][j]);
             }
             if ((a[ss-1][sa]=='1')||(a[ss+1][sa]=='1')||(a[ss+1][sa+1]=='1')
             ||(a[ss+1][sa-1]=='1')||(a[ss-1][sa+1]=='1')||(a[ss-1][sa-1]=='1')
             ||(a[ss][sa+1]=='1')||(a[ss][sa-1]=='1')
             ){
                 b[ss][sa]='1';
                 if((a[ss-1][sa]!='1')||(a[ss+1][sa]!='1')||(a[ss+1][sa+1]!='1')
             ||(a[ss+1][sa-1]!='1')||(a[ss-1][sa+1]!='1')||(a[ss-1][sa-1]!='1')
             ||(a[ss][sa+1]!='1')||(a[ss][sa-1]!='1')){
                 b[ss-1][sa]='0';
                 b[ss+1][sa]='0';
                 b[ss+1][sa+1]='0';
                 b[ss+1][sa-1]='0';
                 b[ss-1][sa+1]='0';
                 b[ss-1][sa-1]='0';
                 b[ss][sa+1]='0';
                 b[ss][sa-1]='0';

                 }
                 cill++;
                 printf("%c ",b[i][j]);
             }

        }
        printf("\n");
    }
    if(cill==6){
        printf("No more time!\n");
    }
    }
}
void end(){
    printf("Boom!...\n");
    printf("game over!\n");
}
