#include<stdio.h>
void main()
{
int n,t=0,remainder,r;
printf("enter the number")
scanf("%d",&n);
r=n;
while(n!=0)
{
remainder=n%10;
t=t*10+remainder;
n=n/10;
}
if(r==t)
{
printf("palindrome");
}
else
{
printf("not a palindriome");
}
  
