#include<stdio.h>

int main(){
    int a,b;
    long int total;
    scanf("%d%d",&a,&b);  //兩數
    if(a>b){
        for(int i=b;i<=a;i++){  //從b到a把所有數相加
            total+=i;
        }
    }
    else{
        for(int i=a;i<=b;i++){//從a到b把所有數相加
            total+=i;
        }
    }
    printf("%d\n",total);
}
