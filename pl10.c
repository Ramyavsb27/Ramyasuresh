#include <stdio.h>
#include<string.h>
void main(void) 
{
	char s1[50],s2[50];
	int i,j,d1,d2,count=0;
	scanf("%s %s",s1,s2);
	d1=strlen(s1);
	d2=strlen(s2);
	if(d1==d2)
	{
		for(i=0;i<d1;i++)
		{
			if(s1[i]==s2[i])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
			
		}
		if(count==1)
		{
			printf("\nyes");
		}
		else
		{
			printf("\nno");
		}
	}
	else
	{
		printf("\nno");
	}
}
