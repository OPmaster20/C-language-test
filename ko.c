#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void){
    int a[10]={1,1,2,2,3,3,5,6,6,7};
    int time=0;
    int k=0;
    int coco=1;
    int dy=2;
    int b[dy];
    int c[2];
    int size=sizeof(a);
    printf("size=%d\n",size);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int huhu=0;
   // for(int j=0;j<10;j++){
       while(huhu<=5){
           huhu++;
           if(a[time]-a[time+1]==0){
               printf("第 %d 波相同的数字：%d,%d\n",coco,a[time],a[time+1]);
                time=time+2;
                coco++;

            }else if(a[time]-a[time+1]!=0){
                b[k]=a[time];
                b[k+1]=a[time+1];
                k=k+2;
                time=time+2;
                dy=dy+2;
       }


     //   }

    }
    dy=dy/2+1;
    for(int j=0;j<dy;j++){
        printf("%d",b[j]);

    }
    printf("\n");
    for(int z=0;z<dy;z++){
        if(b[z]!=b[z+1]){
            printf("%d ",b[z]);
        }else if(b[z]==b[z+1]){
            b[z]=0;
            b[z+1]=0;
        }
    }

    printf("相同的数字:%d\n",time);

}