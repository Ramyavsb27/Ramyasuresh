#include<stdio.h>
void main()
{
int n,a,sum=0;
printf("enter the number");
scanf("%d",&n);
while(n)
{
a=n%10;
n=n/10;
sum=sum+a;
}
printf("%d",sum-1);
}
