#include<stdio.h>
void main()
{
    int a,b,n;
    printf("enter the range");
    scanf("%d",&a);
    printf("enter the range");
    scanf("%d",&b);
    printf("enter the number");
    scanf("%d",&n);
    if((n>a)&&(n<b))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
