#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
//void ai(string x){
//printf("%s \n",x);
//}
//int main(void){
    //void (*str)(string)=&ai;
    //ai("yaoyao");
//}
void boddle(int arr[], int si);
int compare(const void* a,const void* b);
int com(const void*s,const void* b);
int yu(const void*x,const void* y);
int yao(const void* x,const void* y);

struct person{
    string s;
    int age;
    string t;
};



int app(int x,int y){
    return x*y;
}


int main(void ) {
    //int (*arr[5]) (int , int );
    //int (*(*parr[5]) (int, int)  = &arr;
    //int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    struct person r[3]={{"renyuyao",26,"suzou"},
    {"baowuxi",25,"nantong"},{"brain",56,"newyork"}};
    float arr2[10]={8.9,4.6,4.5,3.2,7.8,7.4,2.1,3.8,7.0,9.9};

    int si = sizeof(r) /sizeof(r[0]);
    //boddle(arr, si);
    qsort(r,si,sizeof(r[0]),yao);

    //for (int i = 0; i < si; i++) {
       // printf("%d ",r.age );
   // }
    //printf("\n");

}
void boddle(int arr[], int si) {
    int temp;
    for(int i = 0; i < si-1; i++) {
        for(int j = 0; j < si-1; j++ ) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int compare(const void* a,const void* b){
    return *(int*)a-*(int*)b;
}
int com(const void*s,const void* b){
    return ((int)*(float*)s-*(float*)b);
}
int yu(const void*x,const void* y){
    return ((struct person*) x).age- ((struct person*) y).age;
}
int yao(const void* x,const void* y){
    return strcmp(((struct person*)x).s,((struct person*)y).s);

}