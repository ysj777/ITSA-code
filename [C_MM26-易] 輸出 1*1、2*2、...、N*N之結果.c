#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){          //輸出1*1~n*n之結果
        printf("%d*%d=%d\n",i,i,i*i);
    }
}
