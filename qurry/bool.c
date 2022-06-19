#include<stdio.h>
#include<cs50.h>
void bo(int x[]);
int main(void){
    int arr[10]={9,0,1,2,3,4,5,6,7,8};
    bo(arr);

}
void bo(int x[10]){
    //检查数组中需要排序的次数
       int arrs=0;
       int n=0;
       int t=0;
    for(int ko=0;ko<9;ko++){
        for(int k=n;k<9;k++){
           if(x[k]<x[k+1]){
               break;
           }else if(x[k]>x[k+1]){
               t++;
               break;
           }
       }
       n++;
       }
       printf("有 %d 对错误\n",t);

int solo=1;
for(int j=0;j<9;j++){
    for(int i=0;i<9;i++){
            if(x[i]>x[i+1]){
                //如果要阻止条件执行和一个完美结果的话，就必须遍历数组中
                //所有元素满足有序条件
            arrs=x[i+1];
            x[i+1]=x[i];
            x[i]=arrs;
            solo=0;
          }
      }
       if(solo==1){
        break;
        }
}
printf("\n");
for(int j=0;j<10;j++){
    printf("%d  ",x[j]);
}
printf("\n");

}