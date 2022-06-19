#include<stdio.h>
#include<cs50.h>
#include<string.h>
void swap(int arr[10],int t);
void king();
void ren(int x);
void yuyao(int x,int y);
void pole(int m,int n);
void hub(int x);
void def(int c);
void cell(int v[],int k);
void add(int x);
void loop(char* x);
void loop_x(char b[],int l);


int kill=0;

int main(void){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int yuyao=sizeof(arr)/sizeof(arr[0]);
    //int a=get_int("A:");
    char a[]={"yuyao"};
    int ai=sizeof(a)/sizeof(a[0]);
    int bo=strlen(a)-1;
    //int b=get_int("B:");
    printf("%d \n",ai);
    loop(a);

    for(int i=0;i<a[i];i++){
        printf("%c ",a[i]);
    }

}
void swap(int arr[10],int t){
    for(int i=0;i<4;i++){
        if(arr[0+i]<arr[9-i]){
            int temp;
            temp=arr[0+i];
            arr[0+i]=arr[9-i];
            arr[9-i]=temp;
        }
    }
    for(int y=0;y<t;y++){
         if(arr[4]<arr[5]){
            int temp_s;
            temp_s=arr[4];
            arr[4]=arr[5];
            arr[5]=temp_s;
        }
         printf("%d ",arr[y]);
    }
}

void king(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int t=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<t;i++){
        int x;
        x=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=x;
        printf("%d ",arr1[i]);
        printf("%d \n",arr2[i]);
    }
}
void ren(int x){
    int count=0;
    yuyao(x,count);
    for(int i=0;i<x;i++){
        if(x%2==1){
            count++;
        }
        x=x/2;
    }
    printf("%d \n",count);

}
void yuyao(int x,int y){
    for(int i=0;i<32;i++){
        if(((x>>1)&1)==1){
            y++;
        }
    }
    printf("%d \n",y);

}
void pole(int m,int n){
    int v=0;
    for(int i=0;i<32;i++){
        if(((m>>1)&1)!=((n>>1)&1)){
            v++;
        }
    }
    printf("%d \n",v);

}
void hub(int x){
    for(int i=0;i<x;i++){
        if(x%2==1){
            printf("%d \n",x);
        }
        x=x/2;
    }

}
void def(int c){
    for(int i=30;i>=0;i--){
            printf("%d ",   (c>>i)&1);
    }
    printf("\n");
    for(int i=31;i>=0;i--){
        printf("%d ",(c>>i)&1);
    }
    printf("\n");
}
void cell(int* v,int k){
    for(int i=0;i<k;i++){
        printf("%d ",*(v+i));
    }
    printf("\n");
}
void add(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<i;j++){
            printf("%d*%d=%d",i,j,i*j);
        }
         printf("\n");
    }
}
void loop(char* x){
    //char j;

}
void loop_x(char b[],int l){
    char t;
    for(int i=0;i<2;i++){
        t=b[i];
        b[i]=b[l-i-2];
        b[l-i-2]=t;
    }

}