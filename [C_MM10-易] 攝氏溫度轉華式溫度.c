#include<stdio.h>

int main(){
    double c; //攝氏
    double a; //華氏
    while(scanf("%lf",&c)!=EOF){
        a=c*9/5+32; //轉換公式
        printf("%.1f\n",a);
    }
}
