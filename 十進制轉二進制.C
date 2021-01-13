#include<stdio.h>
#define MAX 32
int main(void){
    int i=0,n,a[MAX];
    int cnt=0;
    scanf("%d",&n);
    if(n<0){    //n是負數的話先轉成正數
        n*=-1;
        cnt=1;
    }
    while (n>0){    //轉成2進位
        a[i] = n%2;
        i = i+1;
        n = n/2;
    }
    if(cnt==1){     //如果n原本是負數
        for(int j=0;j<i;j++){   //0變1，1變0
            if(a[j]==0){    
                a[j]==1;
            }
            else{
                a[j]==0;
            }
        }
    }
    if(i<8&&cnt==0){          //不足8位數前面補0
        for(int j=i;j<8;j++){
            printf("0");
        }
    }
    else if(i<8&&cnt==1){     //不足8位數前面補1(負數)
        for(int k=i;k<8;k++){
            printf("1");
        }
    }
    for(; i > 0; i--){      //輸出
        printf("%d",a[i-1]);
    }
    printf("\n");
    return 0;
}
