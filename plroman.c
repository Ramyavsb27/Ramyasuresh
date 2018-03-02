#include <stdio.h>
#include<string.h>
void main(void) 
{
	char s1[50],s2[50];
	int i,j,flag=1,a,b;
	scanf("%s %s",str1,str2);
	int d1=strlen(str1);
	int d2=strlen(str2);
	if(d1==d22)
	{
	for(i=0;i<d1;i++)
	{
		for(j=i+1;j<d2;j++)
		{
			u=str1[i]-str1[j];
			v=str2[i]-str2[j];
			if(u==v)
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
