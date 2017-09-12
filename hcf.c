#include<stdio.h>
int main()
{
int n1,n2,i,min,hcf=1;
printf("enter the number %d %d",n1,n2);
min=n1<n2 ? n1 : n2;
for(i=1;i<=min;i++)
{
if(n1%i==0 && n2%i==0)
{
hcf=i;
}
}
printf("HCF of %d and %f is =%d",n1,n2nhcf);
return 0;
}
