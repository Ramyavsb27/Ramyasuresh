#include <stdio.h>
void main(void) 
{
	int i,n,k,ar[50],t;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(ar[i]>ar[i+1])
		{
			t=ar[i];
			ar[i]=ar[i+1];
			ar[i+1]=t;
		}
	}
	for(i=0;i<=n;i++)
	{
		if(i==k-1)
		{
			printf("%d",ar[i]);
		}
	}
			
}
