#include <stdio.h>
void main()
{
    int n;
    int fact=1,i;
    scanf("%d",&n);
    if(n<0)
    {
        printf("negative number");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
        fact*=i;
        }
    printf("%d",fact);
    }
}
