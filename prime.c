#include<stdio.h>
void mani()
{
int a,i,flag=1;
printf("enter the number")
scanf("%d",&a)
for(i=2;i<=a/2;++i)
{
if(a%2==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d is prime",a);
else
printf("%d is nit a prime",a);
}

