#include<stdio.h>
void main()
{
    int a[9],min,i;
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
}
