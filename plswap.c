#include <stdio.h>
#include<string.h>
void main(void)
{
    char a[10];
    int i,temp,n;
    gets(a);
    n=strlen(a);
    if(n%2==0)
    {
	for(i=0;i<n;i+=2)
	{
		temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		puts(a);
	}
	else
	{
	for(i=0;i<n-1;i+=2)

	{
		temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		puts(a);
		
}
}
