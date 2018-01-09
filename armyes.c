#include<stdio.h>
void main()
{
int n,remainder,temp,r=0;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
temp=temp%10;
r+=remainder*remainder*remainder;
temp=temp/10;
}
if(r==n)
{
printf("yes this is armstrong number");
}
else
{
printf("no");
}
}
