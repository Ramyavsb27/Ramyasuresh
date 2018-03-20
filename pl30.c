#include <stdio.h>
void main(void) 
{
	char s[50],s2[50];
	int i,k,d1,d2,count=0;
	scanf("%s %s %d",s,s2,&k);
	d1=strlen(s);
	d2=strlen(s2);
	if(d1==d2)
	{
		for(i=0;i<d1;i++)
		{
			if(s[i]==s2[i])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
		}
		if(count==k)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}
