#include<stdio.h>
void main()
{
int a[50],i,n,lar,sam;
prinf("enter the elements %d",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
lar=sam=a[0];
for(i=0;i<n;i++)
{
if(a[i]>lar)
a[i]=lar;
if(a[i]<sam)
a[i]=sam;
}
printf("largest and samllest value is %d %d",lar,sam);
}
