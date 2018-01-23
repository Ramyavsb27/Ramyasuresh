#include<stdio.h>
void main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if((num&(num-1))==0)
printf("is a power of two ");
else
printf("not");
}
