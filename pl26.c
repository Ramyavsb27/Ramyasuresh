#include <stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int i,j=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
    	if(a[i]==' '&&a[i+1]==' ');
    	else
    	{
    	b[j]=a[i];
    	j++;
    }
 }

printf("%s",b);
}
