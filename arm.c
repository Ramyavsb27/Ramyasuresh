#include<stdio.h>
void main()
{
int n,temp,remainder,r=0;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
remainder=temp%10;
r+=remaider*remainder*remainder;
temp=tyemp/10;
}
if(r==n)
printf("%d is armstrong",n);
else
printf("%d is not armstrong",n);
}
