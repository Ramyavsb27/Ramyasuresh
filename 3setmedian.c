#include<stdio.h>
void main()
{
float median(int,int[]);
printf("enter the elements");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("median element is %d",median(n,array));
getch();
}
float median(int n,int array[])
{
int array[i],i,j,p;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(array[j]<array[i])
{
p=array[i];
array[i]=array[j];
array[j]=p;
}
}}
if(n%2==0)
return(array[n/2]+array[n/2-1]/2);
else
return array[n/2];
}
