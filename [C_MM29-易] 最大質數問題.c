#include <stdio.h>


int main(){
    int n;
    int isPrime = 1;    //質數判定
    scanf("%d",&n);
    for(int i = n-1;i>0;i--){ //從大到小開始看
        isPrime = 1;
        for(int j = 2; j<i;j++)  //除了1跟自己以外沒有其他數能整除
            if (i%j == 0 ) {
            isPrime = 0;
            continue;
        }
        if(isPrime == 1){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
