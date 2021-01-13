#include <stdio.h>


int main(){
    int n;
    int total=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0&&i%3==0&&i%12!=0){    //判定此數是否能被2,3整除，但不能被12整除
            total+=i;
        }
    }
    printf("%d\n",total);
    return 0;
}
