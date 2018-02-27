#include <stdio.h>

void main() 
{
	int i;
	char a[50];
	printf("enter the string");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
	    if(i==0)
	    a[i]=toupper(a[i]);
	    if(a[i]==' ')
	    a[i+1]=toupper(a[i+1]);
	   
	}
	printf("%s",a);
}
