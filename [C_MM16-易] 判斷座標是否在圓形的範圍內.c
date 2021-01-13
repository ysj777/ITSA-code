#include<stdio.h>

int main(){
    int x,y;    //x,y座標
    int total;
    scanf("%d%d",&x,&y);
    total=x*x+y*y;    //園面積公式 x*x + y*y = r*r;
    if(total>10000){
        printf("outside\n");
    }
    else{
        printf("inside\n");
    }
}
