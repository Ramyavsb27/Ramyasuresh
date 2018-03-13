#include <stdio.h>
void main(void) 
{
	char s[950];
	int i,d;
	scanf("%s",s);
	d=strlen(s);
	for(i=0;i<d;i++)
	{
		s[i]=s[i]+3;
		
	}
	printf("%s",s);
	
}
