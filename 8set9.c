#include<stdio.h>
void main()
{
    int a,b,c,i;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    c=a*b;
    for(i=0;i<c;i++)
    {
        if(c==i*i)
        {
            printf("yes");
        }
    }
}
