#include<stdio.h>
void main()
{
    float p,t,r,si;
    printf("enter the principle,time,rate");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("%f",si);
}
