#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the number");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        if(a%b==0)
        {
        printf("%d\t",b);
        }
}
}
