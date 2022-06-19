#include<stdio.h>
#include<cs50.h>
int  ai(int x, int y) {
    return x+y;
}
int  ai1(int x, int y) {
    return x*y;
}
int  ai2(int x, int y) {
    return x-y;
}
int  ai3(int x, int y) {
   return x/y;

}

char* mystr(char* dest,const char* src){
    return 0;
}
int main(void ) {
   // int  (*p[4]) (int , int )  = {ai, ai1, ai2, ai3};
   // for (int i = 0; i < 4; i++) {
     //   printf("%d\n", p[i](5, 6) );
    //}
char* (*pf)(char*,const char*)=mystr;
char* (*pfd[4])(char*,const char*);
}