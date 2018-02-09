#include<stdio.h>
void main()
{
    char x[20]="hello",c='*';
    int p,i,count=0;
    for(i=0;x[i]!='\0';i++)
    {
        count++;
    }
    p=count/2;
    if(count%2==0)
    {
        x[p]=c;
        x[p+1]=c;
        for(i=0;x[i]!=0;i++)
        {
            printf("%c",x[i]);
        }
    }
    else
    {
        x[p]=c;
        for(i=0;x[i]!=0;i++)
        {
            printf("%c",x[i]);
        }
    }
}
