#include<stdio.h>
void main()
{
int numbers[50],n,i,max;
printf("enter the number %d",n);
for(i=0;i<n;i++)
scanf("%d",&numbers[i]);
if(numbers[i]==n)
{
max=numbers[i];
max=max+1;
}
for(i=0;i<n-1;i++)
{
printf("%d %d",numbers[i],max);
}
}
