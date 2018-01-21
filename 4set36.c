#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter the value of a and b %d %d",a,b);
printf("before swapping %d %d",a,b);
temp=a;
a=b;
b=temp;
printf("after swapping %d %d",a,b);
}
