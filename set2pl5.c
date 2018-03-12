#include <stdio.h>
#include<string.h>
void main(void) 
{
	char s[70],d;
	int i,j,count=1,m=1;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		if(s[i]==s[j])
		{
			count=count+1;
			if(count>m)
			{
				m=count;
				d=s[i];
			}
		}
 
	}
	printf("\n%c",d);
}
 
