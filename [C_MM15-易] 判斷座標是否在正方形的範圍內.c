#include<stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);    //x,y座標
    if(x>100||y>100){       //正方形範圍
        printf("outside\n");
    }
    else{
        printf("inside\n");
    }
}
