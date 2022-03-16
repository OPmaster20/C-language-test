#include<stdio.h>
#include<cs50.h>
#include<unistd.h>
#define c 10
#define cc 10
void log_x();
void loh(char y);
void ex(char x);
void init(char x[3][3]);
void init_2(char y[3][3]);
void init_opm(char y[c][cc]);
void play(char x[3][3]);
void AI(char z[3][3]);
int end(char t[3][3]);
int en(char u);


//--------------------------------------
int main(void){
    char map[3][3];
    log_x();
char a=get_char("input:");
if(a=='y'||a=='Y'){
    loh(a);
    init(map);
    //init_opm(map);
}else if(a=='n'||a=='N'){
    ex(a);
}else {
    ex(a);
}
}

//------------------------------------
void log_x(){
    printf("go on ..\n");
    sleep(1);
    printf("Do you want play game?[yes/no]\n");
}
void loh(char y){
    printf("load...\n");
    sleep(2);

}                         //开始界面
void ex(char x){
    printf("quit...\n");
    sleep(1);
    printf("--exit--\n");
}
//------------------------------------
void init(char x[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            x[i][j]=' ';
        }
          printf("\n");
    }
    init_2(x);
}

//--------------------------------------------------------
void init_2(char y[3][3]){
    for(int i=0;i<3;i++){
        if(i==0){
            printf("__________\n");
        }
            printf("|%c |%c |%c | \n",y[i][0],y[i][1],y[i][2]);
        if(i<3){
            printf("|__|__|__|\n");
        }
}
for(int zv=0;zv<7;zv++){
    play(y);
}

}



    //------------------------------------------
void init_opm(char y[c][cc]){
    for(int i=0;i<c;i++){
        for(int j=0;j<cc;j++){
            if(i==0){
            printf("____________________________________\n");
            }
            if(j<cc-1)
            printf("|%c  ",y[i][j]);
            printf("|");        //失败的函数
            }
            if(i<cc){
                for(int z=0;z<cc;z++){
                    if(z<cc-1){
                         printf("|__");
                      printf("|__");
                    }

                }

        }

printf("\n");
        }
    }

//-----------------------------------------------

void play(char x[3][3]){
        for(int i=0;i<3;i++){
        if(i==0){
            printf("__________\n");
        }
            printf("|%c |%c |%c | \n",x[i][0],x[i][1],x[i][2]);
        if(i<3){
            printf("|__|__|__|\n");
        }
}
    static int o=0;
    printf("____Go____\n");
    sleep(1);
    int a=get_int("you input>>");
    int b=get_int("you input>>");
    if(a>4&&b>4){
            printf("error!\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(x[a-1][b-1]==' '){
                 x[a-1][b-1]='o';
                       o++;
                 printf("is %d \n",o);
            }
            printf("%c ",x[i][j]);
    }
    printf("\n");

    }
    printf("AI >>\n");
    sleep(1);
    AI(x);
}
void AI(char z[3][3]){
        for(int i=0;i<3;i++){
        if(i==0){
            printf("__________\n");
        }
            printf("|%c |%c |%c | \n",z[i][0],z[i][1],z[i][2]);
        if(i<3){
            printf("|__|__|__|\n");
        }
}
int h=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(h==0 && z[i][j]==' '){
            z[i][j]='#';
            h++;
        }
        if(h>0 && z[i][j]==' '){
                z[i][j]=' ';
            }
         printf("%c ",z[i][j]);
    }
    printf("\n");
}

if(end(z)==2){
     printf("-------player win!\n");
}
}
int end(char t[3][3]){
    for(int n=0;n<3;n++){
        for(int m=0;m<3;m++){
            if(t[0][n]=='o'&&t[0][n]=='o'&&t[0][n]=='o'){
                printf("-------player win!\n");
                return 5;
            }else if(t[0][1]=='#'&&t[0][1]=='#'&&t[0][1]=='#'){
                printf("-------AI win!\n");
                return 4;
            }else if(t[0][1]=='#'&&t[1][1]=='#'&&t[2][1]=='#'){
                printf("-------AI win!\n");
                return 3;
            }else if(t[0][1]=='o'&&t[1][1]=='o'&&t[2][1]=='o'){
                return 2;
            }
        }
    }
    return 0;

    if(en(t)!=0){
        printf("****place*****\n");

    }
}

int en(char u){
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(u[i][j]==' '){
            return 0;
        }else{
            return 1;
        }

    }
}
return 0;

}