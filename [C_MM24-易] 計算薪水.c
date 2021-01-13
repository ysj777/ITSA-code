#include<stdio.h>

int main(){
    int worktime,pay;
    double total;
    scanf("%d%d",&worktime,&pay); //工時 時薪
    if(worktime<=60){             //工時<60小
        total=worktime*pay;
    }
    else if(worktime>60&&worktime<=120){  //工時介於60~120小之間
        total=60*pay;
        worktime-=60;
        total+=(double)worktime*pay*1.33;
    }
    else if(worktime>120){              //工時>120小
        total=60*pay;
        worktime-=60;
        total+=(double)pay*1.33*60;
        worktime-=60;
        total+=(double)worktime*pay*1.66;
    }
    printf("%.1f\n",total);
}
