#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){         //因數判定
            printf("%d ",i);
        }
    }
    printf("%d\n",n);
}
