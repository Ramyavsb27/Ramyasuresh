#include<stdio.h>
void main()
{
int l,h,t1,t2,remainder=0,n=0,r=0;
printf("enter the intervals");
scanf("%d %d",&l,&h);
printf("numbers between%d and %d",l,h);
{
for(i=l+1;i<h;++i)
{
t2=i;
t1=i;
while(t1!=0)
{
t1/=10
++n;
}
while(t2!=0)
{
remainde=t2%10;
r+=pow(remainder,n);
t2/=10;
}
if(r==i)
{
printf("%d",i);
}
n=0;
r=0;
}}
