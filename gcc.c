#include<stdio.h>
#include<cs50.h>
#include<unistd.h>
void index (char x);
void new();
void quit(char x);
void renn(int x);
void AI_1();
void AI_2();
void am();
void am_1();
void AI_3();
void AU_AI(char map[4][4]);
void AU_AI2();

int tim=0;

int main(void){
    printf("----game----\n");
    for(int y=1;y<=5;y++){
        sleep(1);
        printf("%d\n",y);

    }
    new();
}


void quit(char x){
    printf("exit...\n");
}
void index(char x){
    tim++;
    printf("this is %d round\n",tim);
    char map[4][4]={{'1','2','3','4'},{'2','#','#','#'},
    {'3','#','#','#'},{'4','#','#','#'}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("|%c| ",map[i][j]);

        }
     printf("\n");
    }
    int a=get_int("you input (like 33 or 22):");
    renn(a);

}
void new(){
    printf("Do you want play game?\n");
    char s=get_char("You:");
    if(s=='Y'||s=='y'){
        index(s);
    }else if(s=='N'||s=='n'){
        quit(s);
    }else{
        printf("quit...\n");
    }


}
void renn(int x){
    tim++;
    printf("this is %d round\n",tim);
    if(x==33){
        char map[4][4]={{'1','2','3','4'},{'2','#','#','#'},
    {'3','#','o','#'},{'4','#','#','#'}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("|%c| ",map[i][j]);

        }
     printf("\n");
    }
    sleep(1);
    printf("AI is thinking:\n");
    int t=1;
    while(t<4){
        sleep(1);
        printf("%d\n",t);
        t++;
    }
    AI_1();
    sleep(1);
    printf("AI is finish!\n");
    sleep(1);
    int b=get_int("you next step:");
    switch(b){
        case 23:
        am();
        break;
        case 24:
        am_1();
        break;
        default:
        printf("Are you ok?\n");


    }


    }else if(x==22){
        tim++;
        printf("this is %d round\n",tim);
         char map[4][4]={{'1','2','3','4'},{'2','o','#','#'},
    {'3','#','#','#'},{'4','#','#','#'}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("|%c| ",map[i][j]);

        }
     printf("\n");
    }

    }

}
void AI_1(){
    tim++;
    printf("this is %d round\n",tim);
    char map[4][4]={{'1','2','3','4'},{'2','#','#','#'},
    {'3','/','o','#'},{'4','#','#','#'}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("|%c| ",map[i][j]);

        }
     printf("\n");
    }
}
void am(){
    tim++;
    printf("this is %d round\n",tim);
    char map[4][4]={{'1','2','3','4'},{'2','#','o','#'},
    {'3','/','o','#'},{'4','#','#','#'}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("|%c| ",map[i][j]);

        }
     printf("\n");
    }
    printf("Wait...\n");
    sleep(2);
    AI_2();
}
void am_1(){
    tim++;
    printf("this is %d round\n",tim);
    char map[4][4]={{'1','2','3','4'},{'2','#','#','o'},
    {'3','/','o','#'},{'4','#','#','#'}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("|%c| ",map[i][j]);

        }
     printf("\n");
    }

}
void AI_2(){
    tim++;
    printf("this is %d round\n",tim);
    char map[4][4]={{'1','2','3','4'},{'2','#','o','#'},
    {'3','/','o','#'},{'4','#','/','#'}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("|%c| ",map[i][j]);

        }
     printf("\n");
    }
    AI_3();
}
void AI_3(){
    int a=get_int("you next step:");
    char map_1[4][4]={{'1','2','3','4'},{'2','#','o','#'},
    {'3','/','o','#'},{'4','#','/','#'}};
    int i=0;
    int ii=0;
    char map_copy[4][4];
    if(a==24){
    for(int k=0;k<4;k++){
        for(int h=0;h<4;h++){
                map_1[i+1][ii+3]='o';
                map_copy[k][h]=map_1[k][h];
                printf("|%c| ",map_1[k][h]);
        }
        printf("\n");
    }
    sleep(2);
    printf("Wait...\n");
    sleep(1);
    AU_AI(map_copy);
    }else if(a==42){
        for(int k=0;k<4;k++){
        for(int h=0;h<4;h++){
                map_1[i+3][ii+1]='o';
                printf("|%c| ",map_1[k][h]);
        }
        printf("\n");
    }
    sleep(2);
    printf("Wait...\n");
    sleep(1);
    AU_AI2();
    }else if(a==44){
        for(int k=0;k<4;k++){
        for(int h=0;h<4;h++){
                map_1[i+3][ii+3]='o';
                 printf("|%c| ",map_1[k][h]);
        }
        printf("\n");
    }
    }else if(a==34){
        for(int k=0;k<4;k++){
        for(int h=0;h<4;h++){
               map_1[i+2][ii+3]='o';
                 printf("|%c| ",map_1[k][h]);
        }
        printf("\n");
    }
    }else if(a==22){
        for(int k=0;k<4;k++){
        for(int h=0;h<4;h++){
              map_1[i+1][ii+1]='o';
                 printf("|%c| ",map_1[k][h]);
        }
        printf("\n");
    }
    }

}
void AU_AI(char map[4][4]){
     tim++;
     int k=0;
     int kk=0;
    printf("this is %d round\n",tim);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            map[k+3][kk+1]='/';
            printf("|%c| ",map[i][j]);
        }
     printf("\n");
    }
    sleep(1);
    int a1=get_int("you next step:");
    if(a1==22){
        for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            map[k+1][kk+1]='o';
            printf("|%c| ",map[i][j]);
        }
     printf("\n");
    }
    sleep(1);
    printf("You win!!\n");
    }


}
void AU_AI2(){
     tim++;
    printf("this is %d round\n",tim);
    char map[4][4]={{'1','2','3','4'},{'2','#','o','/'},
    {'3','/','o','#'},{'4','o','/','#'}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("|%c| ",map[i][j]);

        }
     printf("\n");
    }

}