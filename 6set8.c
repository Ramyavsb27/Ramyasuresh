#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the number");
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("after swapp %d %d",a,b);
}
