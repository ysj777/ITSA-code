#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    while(a!=0&&b!=0){  //除到有一方變成0為止
        if(a>=b){     
            a=a%b;
        }
        else if(b>a){
            b=b%a;
        }
    }
    if(a>=b){
        printf("%d\n",a);
    }
    else{
        printf("%d\n",b);
    }
}
