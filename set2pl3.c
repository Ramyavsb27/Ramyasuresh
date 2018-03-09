#include<stdio.h>
void main()
{
    int n,sum=0,r,p;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        p=r*r;
        sum=sum+p;
        n=n/10;
    }
    printf("%d",sum);
}
