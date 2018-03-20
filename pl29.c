#include<stdio.h>
void main()
{
	long int l,r,count=0,i,j;
	scanf("%d %d",&l,&r);
	for(i=l;i<r;i++)
	{
		for(j=2;j<2000;j++)
		{
			if(j*j==i)
			count++;
		}
	}
	printf("%d",count);
}
