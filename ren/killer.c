#include<stdio.h>
#include<cs50.h>
int str(char* a){
    if (*a!= '\0') {
        str(a + 1);
    }
   // printf("%s ", a );
    return 1;
}

int main(void ) {
    char a[] = "yuyao";
    int b=0;
    b=b+str(a);
    printf("%d \n",b);
}
