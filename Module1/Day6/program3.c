//difference between time period....using structure
#include<stdio.h>
typedef struct time_period{
    int hours;
    int mintues;
    int seconds;
}tp;
void difference(tp t1,tp t2);
int main(){
    tp t1,t2;
    printf("\nEnter time period 1 in format hours mintues seconds :");
    scanf("%d %d %d",&t1.hours,&t1.mintues,&t1.seconds);
    printf("\nEnter time period 2 in format hours mintues seconds :");
    scanf("%d %d %d",&t2.hours,&t2.mintues,&t2.seconds);
    difference(t1,t2);
    return 0;
}
void difference(tp t1,tp t2){
    tp d;
    d.hours=t1.hours-t2.hours;
    d.mintues=t1.mintues-t2.mintues;
    d.seconds=t1.seconds-t2.seconds;
    printf("\n Differnce between timeperiod %d:%d:%d and %d;%d;%d is %d:%d:%d ",t1.hours,t1.mintues,t1.seconds,t2.hours,t2.mintues,t2.seconds,d.hours,d.mintues,d.seconds);
    return;
}