#include <stdio.h>
#include <stdlib.h>
char buffer [33]; //存放轉好的16進位字串
char * inttohex(int a)
{
sprintf(buffer, "%X", a); //%X表16進位格式,a是要轉換的數字
return (buffer);
}
int main (){
    int num;  //10進位數字
    char * str; 
    scanf ("%d",&num);
    str = inttohex (num); //轉16進位
    printf ("%s\n", str);
    return 0;
}
