#include <stdio.h>
void main(void) 
{
	int n,k,i,d;
	scanf("%d %d",&n,&k);
	if(n>k)
	{
		d=n;
	}
	else
	{
	    d=k; 
	}
	for(i=d;i>=2;i--)
	{
		if(n%i==0 && k%i==0)
		{
			printf("%d",i);		
		}
	}

	
}
