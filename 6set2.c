#include<stdio.h>
void main()
{
int i=0,num,n,a;
char *c[1000];
printf("enter the integer value");
scanf("%d",&num);
while(num)
{
a=num%10;
num=num/10;
switch(a)
{
case 1:c[i++]="zero";
break;
case 2:c[i++]="one";
break;
case 3:c[i++]="two";
break;
case 4:c[i++]="three";
break;
case 5:c[i++]="four";
break;
case 6:c[i++]="five";
break;
case 7:c[i++]="six";
break;
case 8:c[i++]="seven";
break;
case 9:c[i++]="eight";
break;
case 10:c[i++]="nine";
break;
}
for(n=i-1;n>=0;n--)
printf("%s",c[n]);
}
}
