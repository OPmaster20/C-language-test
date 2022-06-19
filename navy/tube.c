#include<stdio.h>
#include<cs50.h>
void  str(int x[10],int y){
    for (int i = 0; i < y; i++) {
        for(int j=0;j<y-1;j++){
            if (x[j] % 2 == 0) {
            //printf("%d ", x[i])
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
        }
        }
        printf("%d ", x[i]);
    }
}
int main(void) {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(a) /sizeof(a[0]);
    str(a, sz);

}