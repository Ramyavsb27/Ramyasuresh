#include<stdio.h>
void main()
{
int n,count=0;
printf("enter the number %d",n);
while(n>0)
{
n=n/10;
count=count+1;
}
printf("no.of digits are %d",count);
}
