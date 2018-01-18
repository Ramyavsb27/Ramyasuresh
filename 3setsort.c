#include<stdio.h>
void main()
{
int a[i],i,n,t,j;
printf("enter the no.of elements");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
printf("soterd elements are");
{
for(i=0;i<n;i++)
printf("%d",a[i]);
}
}}
}
