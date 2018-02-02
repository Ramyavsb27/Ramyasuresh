#include<stdio.h>
void main()
{
int a=0,b=1,c,n;
printf("enter the number");
scanf("%d",&n);
printf("%d",a);
printf("%d",b);
c=a;
a=b;
b=c;
c=a+b;
printf("%d",c);
}
