#include<stdio.h>
void main()
{
    int n,r,sum=1;
    printf("enter numbers");
    scanf("%d",n);
    while(n!=0)
    {
        r=r%10;
        sum=sum*r;
        n=n/10;
    }
    printf("%d",sum);
}
