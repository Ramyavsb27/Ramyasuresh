#include <stdio.h>
void main() 
{
	char s[20];
	int i,c=0,c1=0;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='(')
		{
			c=c+1;
		}
		else if(s[i]==')')
		{
			c1=c1+1;
		}
	}
	if(c==c1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
