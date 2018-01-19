#include<stdio.h>
struct time
{
int hour;
int minute;
}
int main()
{
int t1,t2,t3;
printf("enter the first time %d:%d",t1.hour,t2.minute);
prinf("enter the second time %d:%d",t1.hour,t2.minute);
t3.hour=t3.minute/60;
t3.minute=t3.minute%60;
printf("the difference is %d:%d",t3.hour,t3.minute);
}
