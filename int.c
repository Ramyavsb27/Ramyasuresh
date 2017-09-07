#include<stdio.h>
void main()
{
int count=0,a;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
++count;
}
printf("%d",&count);
}
