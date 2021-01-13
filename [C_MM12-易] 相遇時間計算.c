#include<stdio.h>

int main(){
    int distance;         //兩者之間距離(公尺)
    scanf("%d",&distance);
    double tottime=(double)distance*100/23.8;    //距離除以兩者速度差
    if(tottime-(int)tottime>0){
        tottime=(int)tottime+1; //無條件進位
    }
    printf("%.0f\n",tottime);
}
