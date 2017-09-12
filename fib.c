#include<stdio.h>
void main()
{
int f1=0,f2=1,f3,n,count=0;
printf("enter the number %d",n);
printf("%d factorial numbers are",n);
printf("%d\n",f1);
printf("%d\n",f2);
count=2;
while(count<n)
{
f3=f2+f1;
count++;
printf("%d\n,f3);
f1=f2;
f2=f3;
}
}


