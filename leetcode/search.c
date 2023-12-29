#include<stdio.h>
#include<cs50.h>
int searchInsert(int* nums, int numsSize, int target);
int countOdds(int low, int high);
int main(void){
    int f = countOdds(8,10);
    printf("%d\n",f);
}
int searchInsert(int* nums, int numsSize, int target){
    for(int i = 0; i < numsSize; i++){
        if(target == nums[i]){
            return i;
        }
    }
    for(int j = 0; j < numsSize; j++){
        if(nums[j] == 0){
            nums[j] = target;
            return j;
        }
    }
    return 0;
}
int countOdds(int low, int high){
    int k = 0;
    if(low % 2 != 0){
        ++k;
        ++low;
    }
    if(low % 2 ){

    }
    return k + 2;
}