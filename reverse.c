#include<stdio.h>
int main()
{
int n,remainder,temp=0;
printf("enter the number %d",n);
while(n!=0)
{
remainder=n%10;
temp=temp*10+remanider;
n=n/10;
}
printf("Reversed number= %d",temp);
return 0;
}
