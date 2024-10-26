//sum of hours,minutes and seconds


#include <stdio.h>

typedef struct Time{
    int hour;
    int min;
    double sec;
}time;

time addTime( time t1, time t2){
    time sum={.hour=t1.hour+t2.hour,.min=t1.min+t2.min,.sec=t1.sec+t2.sec};
    return sum;
}

int main(){
    time t1,t2,sum;
    
    printf("Enter first time in HH MM SS format\n");
    scanf("%d %d %lf",&t1.hour,&t1.min,&t1.sec);
    
    printf("Enter second time in HH MM SS format\n");
    scanf("%d %d %lf",&t2.hour,&t2.min,&t2.sec);
    
    sum=addTime(t1,t2);
    printf("Result: %dh %dm %lfs",sum.hour,sum.min,sum.sec);
    
    return 0;
    
}