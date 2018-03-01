#include <stdio.h>
void main(void) 
{
	int i,n,k,x[50],count=1;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		if(x[i]%2==1)
		{
			if(count==k)
			{
				printf("%d",x[i]);
			}
		count=count+1;
		}
	}
			
}
