#include<stdio.h>
void main()
{
int n,temp,r=1;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(temp)
{
    temp=temp/10;
    r=r*10;
}
while(r>10)
{
    r=r/10;
    printf("%d ",n/r);
    n=n%r;
}
}
