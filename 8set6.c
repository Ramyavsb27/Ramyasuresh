#include<stdio.h>
void main()
{
    int a,b,c=0;
    printf("enter the number");
    scanf("%d",&a);
    for(b=1;b<a;b++)
    {
        if(a%b==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
}
