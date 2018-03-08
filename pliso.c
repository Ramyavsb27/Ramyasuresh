#include <stdio.h>
#include<string.h>
void main(void) 
{
	char s1[50],s2[50];
	int i,j,flag=1,a,b;
	scanf("%s %s",s1,s2);
	int d1=strlen(s1);
	int d2=strlen(s2);
	if(d1==d2)
	{
	for(i=0;i<d1;i++)
	{
		for(j=i+1;j<d2;j++)
		{
			a=s1[i]-s1[j];
			b=s2[i]-s2[j];
			if(a==b)
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	}
	else
	{
		printf("\nno");
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
}
