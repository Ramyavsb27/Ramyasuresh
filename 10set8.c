#include <stdio.h>
 
int main(void) 
{
	int n,x[30],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i!=x[i])
		{
			printf("\n%d",i);
			break;
		}
	}
 
	return 0;
}
