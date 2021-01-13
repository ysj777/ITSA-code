#include<stdio.h>

int main(){
    int month;
    scanf("%d",&month);
    if(month>=3&&month<=5){   //3~5月 春天
        printf("Spring\n");
    }
    else if (month>=6&&month<=8){ //6~8月 夏天
        printf("Summer\n");
    }
    else if(month>=9&&month<=11){ //9~11月 秋天
        printf("Autumn\n");
    }
    else{                         //12~2月 冬天
        printf("Winter\n");
    }
}
