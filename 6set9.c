#include<stdio.h>
void main()
{
int a[30];
int i,max,n;
printf("enter the numbers");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=0;i<n;i++)
{
if(max<a[i])
max=a[i];
}
printf("maximum among 10 numbers is %d",max);
}
