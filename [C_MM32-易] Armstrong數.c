#include <stdio.h>


int main(){
    int n;
    int temp;
    int total=0;
    int h,t,o;
    scanf("%d",&n);
    temp=n;
    h=n/100;
    n%=100;
    t=n/10;
    n%=10;
    o=n;
    total= h*h*h + t*t*t + o*o*o;   //阿姆斯壯數條件(每位數的立方和相加等於自己本身)
    if(total==temp){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}
