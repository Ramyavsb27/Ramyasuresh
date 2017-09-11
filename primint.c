#include<stdio.h>
void main()
{
int a,i,j,min,max,flag=0;
printf("enterthe intervals");
scanf("%d %d",&min,&max);
printf("numbers betwween %d and %d");
for(i=min+1;i<max;i++)
{
flag=0;
for(j=2;j<=sqrt(i);j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",i);
}
}
}
