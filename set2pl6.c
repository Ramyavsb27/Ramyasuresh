#include <stdio.h>
void main(void) 
{
	int n,i,j;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j] && i!=j )
			{
				count=count+1;	
			}
			
		}
	if(count==0)
	{
		printf("%d",a[i]);
	}
	}
}
