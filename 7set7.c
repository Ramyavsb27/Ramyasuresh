#include<stdio.h>
void main()
{
    int n,r,c=1;
    printf("enter the numbeer");
    scanf("%d",&n);
    printf("ente the exponenmt");
    scanf("%d",&r);
    while(r!=0)
    {
        c*=n;
        --r;
    }
    printf("%d",c+1);
}
