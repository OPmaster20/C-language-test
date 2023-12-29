#include<stdio.h>
#include<cs50.h>
double average(int* salary, int salarySize);
int main(void){
    int salary[4] = {4000,3000,1000,2000};
    double n = average(&salary[0],4);
    printf("%f\n",n);
}
double average(int* salary, int salarySize){
    int k = salary[0];
    int g = salary[0];
    for(int i = 0; i < salarySize - 1; i++){
        if(k < salary[i + 1]){
            k = salary[i + 1];
        }else if (g > salary[i + 1]){
            g = salary[i + 1];
        }
    }
    printf("%d,%d\n",k,g);
    int n = 0;
    int m = 0;
    for(int j = 0; j < salarySize - 1; j++){
        if(k == salary[j] || g == salary[j]){
            salary[j] = 0;
        }
        if(salary[j] != 0){

        }
        n = n + salary[j];
        m = m + 1;
    }

    return n / m;
}