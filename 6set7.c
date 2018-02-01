#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the two number");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("after swap %d %d",a,b);
}
