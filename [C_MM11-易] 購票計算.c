#include<stdio.h>

int main(){
    int money;
    scanf("%d",&money);
    int total;
    total=money/10;   //可以用多少10元
    printf("NT10=%d\n",total);
    money%=10;
    total=money/5;    //可以用多少5元
    money%=5;
    printf("NT5=%d\n",total);
    printf("NT1=%d\n",money);   //可以用多少1元


}
