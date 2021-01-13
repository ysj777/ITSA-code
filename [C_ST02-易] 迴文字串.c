#include<stdio.h>
#include<string.h>

int main(){
    char line[256];
    int num;
    int length;
    scanf("%d",&num);   //字串出現次數
    for(int i=0;i<num;i++){
        scanf("%s",line);
        length=strlen(line);
        for(int i=length-1;i>=0;i--){ //字串反向輸出
            printf("%c",line[i]);
        }
        printf("\n");
    }
}
