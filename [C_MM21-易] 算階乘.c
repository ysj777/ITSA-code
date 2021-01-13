#include<stdio.h>

int main(){
    int num;
    long int total=1;
    scanf("%d",&num); 
    if(num==0||num==1){ //0!還有1!的值
        printf("1\n");
    }
    else{
        for(int i=2;i<=num;i++){  //計算階乘
            total*=i;
        }
        printf("%ld\n",total);
    }
}
