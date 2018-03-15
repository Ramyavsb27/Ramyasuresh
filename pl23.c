#include<stdio.h>
void main()
{
	int n,i,j=0,a1[10],b1[10],t,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a1[i]);
	for(i=0;i<k;i++)
	scanf("%d",&b1[i]);
	for(i=n;i<n+k;i++)
	{
	a1[i]=b1[j];
	j++;
	}
	for(i=0;i<n+k;i++)
	{
	    for(j=0;j<n+k;j++)
	    {
	        if(a1[i]<a1[j])
	        {
	            t=a1[i];
	            a1[i]=a1[j];
	            a1[j]=t;
	        }
	    }
	}
if(a1[n+k-1]==a1[n+k-2])
printf("%d %d",a1[n+k-1],a1[n+k-2]);
else
printf("%d",a1[n+k-1]);
}
