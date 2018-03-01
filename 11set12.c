#include<stdio.h>
void main()
{
int a,n,d;
int sum;
printf("enter the values of a,n,d");
scanf("%d%d%d",&a,&n,&d);
sum=a+(a+(n-1)*d);
printf("%d",sum);
}
