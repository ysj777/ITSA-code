#include<stdio.h>

int main(){
    int num;
    int total=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%3==0){     //是否被三整除
            total+=i;
        }
    }
    printf("%d\n",total);
}
