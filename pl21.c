#include <stdio.h>
void main()
{
	int a1[2],b1[2],c1[2],i,flag=0;
	for(i=0;i<2;i++)
	{
	    scanf("%d",&a1[i]);
	}
	for(i=0;i<2;i++)
	{
	    scanf("%d",&b1[i]);
	}
	for(i=0;i<2;i++)
	{
	    scanf("%d",&c1[i]);
	}
	for(i=0;i<2;i++)
	{
	    if(a1[i]==b1[i] && b1[i]==c1[i])
	    {
	        flag=1;
	    }
	}
	if(flag==1)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}

}
