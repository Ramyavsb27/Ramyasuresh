#include<stdio.h>
void main()
{
int a=0,b=1,c,n,count=0;
printf("enter the value");
scanf("%d",&n);
printf("%d\n",a);
printf("%d\n",b);
count=2;
while(count<n)
{
c=a+b;
printf("fibonacci series are %d\n",c);
a=b;
b=a;
}
}
