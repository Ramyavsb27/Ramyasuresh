#include<stdio.h>
void main()
{
    int n,l,h,d,i;
    scanf("%d%d",&l,&h);
    if(l>h)
    {
        d=l;
    }
    else
    {
        d=h;
    }
    for(i=2;i<=d;i++)
    {
        if((i%l==0)&&(i%h==0))
        {
            printf("%d",i);
        }
    }
}
