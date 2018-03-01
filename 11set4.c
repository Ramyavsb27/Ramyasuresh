#include <stdio.h>
void main() 
{
	int n,k,i,product=1;
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
	{
		product=product*n;	
	}
	printf("%d",product);
}
