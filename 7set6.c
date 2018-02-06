#include<stdio.h>
void main()
{
    int n,i,j,t;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%1==0)
        t++;
    }
    if(t==2)
    {
        printf("prime");
    }
    else
    {
        printf("no");
    }
}
