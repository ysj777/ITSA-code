#include<stdio.h>


int main(){
    double a,b,c; //長寬高
    double total; 
    scanf("%lf%lf%lf",&a,&b,&c);
    total=(a+b)*c/2;  //計算面積
    printf("Trapezoid area:%.1f\n",total);
}
