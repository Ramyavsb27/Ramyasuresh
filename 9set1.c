#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the kabali's clan");
    scanf("%d",&a);
    printf("enter the oponent's clan");
    scanf("%d",&b);
    if(a<b)
    {
    c=a-b;
    printf("%d",c);
    }
    else
    {
        printf("kabali's clan never greater");
    
    }
}
