#include <stdio.h>
#include<string.h>
void main()
{
int n,i,l,k=0,j,d,e=612;
char a[10][25];
scanf("%d",&n);
printf("%d",i);
for(i=0;i<n;i++)
{
	scanf("%s",a[i]);}
for(i=0;i<n;i++)
{	d=0;
	l=strlen(a[i]);
	for(j=0;j<l;j++)
	{
	d=d+a[i][j];	
	}
	if(d==e)
	k+=1;
}
printf("%d",k);
}
