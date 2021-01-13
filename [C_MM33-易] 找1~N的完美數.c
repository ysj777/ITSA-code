#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    if(n>=6&&n<28){   //小於28的完美數
        printf("6\n");
    }
    else if(n>=28&&n<496){  //小於496的完美數
        printf("6 28\n");
    }
    else if(n>=496&&n<8128){  //小於8128的完美數
        printf("6 28 496\n");
    }
    else if(n>=8128){
        printf("6 28 496 8128\n");  //大於8128的完美數
    }
    return 0;
}
