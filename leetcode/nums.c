#include<cs50.h>
#include<stdio.h>
#include<string.h>
int snum(int* nums,int numsize);
int main(void){
    int arr[10] = {1,2,2,4,5,6,7,8,9,10};
    int len = sizeof(arr) / sizeof(arr[0]);
    snum(&arr,len);
    printf("%d\n",len);
}
int snum(int* nums,int numsize){
    for(int i = 0; i < numsize - 1; i++){
        if(nums[i] == nums[i + 1]){
            nums[i + 1] = ' ';
            int k = nums[i + 1];
            nums[i + 2] = 
        }
    }
    printf("Hello\n");
    return 0;
}