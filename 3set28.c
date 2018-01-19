#include<stdio.h>
void main()
{
int x[],i,n;
printf("enter no.of elements %d",n);
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
printf("%d,%d",x[i],i);
}
}

