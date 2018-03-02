#include <stdio.h>
void main()
{
    int n,r,p=0;
    scanf("%d",&n);
    while(n>00)
    {
        r=n%10;
        p=p*10+r;
        n/=10;
    }
    printf("%d",p);
    
}
