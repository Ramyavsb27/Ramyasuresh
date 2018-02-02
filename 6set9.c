#include<stdio.h>
void main()
{
int a[10];
int i,max,n;
  printf("enter the numbers");
  scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("maximum among 10 numbers is %d",max);
}
