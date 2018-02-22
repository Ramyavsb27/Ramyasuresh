#include<stdio.h>
void main()
{
    float a,b,c;
    printf("enter");
    scanf("%f%f%f",&a,&b,&c);
    float vol,sa;
    sa=2*(a*b+a*c+b*c);
    vol=a*b*c;
    printf("%f\n",sa);
    printf("%f\n",vol);
}
