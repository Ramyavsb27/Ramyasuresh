#include<stdio.h>
void main()
{
int x,y,z;
printf("enter the number");
scanf("%d %d %d",&x,&y,&z);
if(x>y&&x>z)
printf("x is large")
else if(y>z&&y>x)
printf("y is large");
else 
printf("z is large")
}
