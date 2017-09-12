#include<stdio.h>
void main()
{
int n,i,factorial=1;
printf("enter the number");
scanf("%d",&n);
if(n<0)
printf("factorial doesnot exist");
else
{
for(i=1;i<=n;i++)
{
factorial*=i;
}
printf("factorial of %d=%d",n,factorial);
}
}
