#include <stdio.h>
int f(int n){         //遞迴函式
	if(n==1 || n==0){   //n=0 or 1 >>f(n)=n+1
		return n+1;
	}   
	else{               //f(n)=f(n-1) + f(n/2)              
		return (f(n-1)+f(n/2));
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
}
