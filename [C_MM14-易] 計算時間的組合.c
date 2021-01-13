#include<stdio.h>

int main(){
    long int time;
    scanf("%ld",&time);   //總時間(秒)
    if(time/86400>0){
        printf("%ld days\n",time/86400);  //天數
        time%=86400;
    }
    if(time/3600>0){
        printf("%ld hours\n",time/3600);  //小時數
        time%=3600;
    }
    if(time/60>0){
        printf("%ld minutes\n",time/60);  //分鐘數
        time%=60;
    }
    printf("%ld seconds\n",time);         //秒數
}
