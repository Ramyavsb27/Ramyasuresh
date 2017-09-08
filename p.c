#include<stdio.h>
void main()
{
int base,exponent;
float result=1;
printf("enter the base value");
scanf("%d",&base);
printf("enter the exponent");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("anwser=%f",result);
}
