#include<stdio.h>
#include<cs50.h>
#include<string.h>
void str(string h,int x){
        char temp;
        for (int j = 0; j < x/2; j++) {
            temp = h[j];
            h[j] = h[x - j-1];
            h[x - j-1] =temp;
        }
        for(int i=0 ;i<x;i++){
            printf("%c ",h[i]);

        }
}
int main(void ) {
    string a=get_string("you input:");
    int se=strlen(a);
    str(a,se);

}