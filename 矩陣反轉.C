#include <stdio.h>

int main(){
    int a,b,count;
    scanf("%d%d",&a,&b);   //行 列
    int matrix[a*b];
    for(int i=0;i<(a*b);i++){
    	scanf("%d",&matrix[i]);
	}
	for(int i=0;i<b;i++){       //列
		for(int j=0;j<a;j++){     //行
			count++;
			printf("%d",matrix[j*b+i]); //反轉後輸出
			if(count%a!=0){
				printf(" ");
			}
		}
		printf("\n");
	}
}
