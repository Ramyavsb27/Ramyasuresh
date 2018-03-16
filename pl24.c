#include <stdio.h>
#include<string.h>
void main() {
	char a[10];
	int temp=0,i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]>='0'&&a[i]<='9')
	    {
	        temp=0;
	    }
	    else
	    {
	        temp++;
	    }
	}
	if(temp==0)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}

}
