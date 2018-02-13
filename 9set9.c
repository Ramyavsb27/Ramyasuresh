#include <stdio.h>
void main()
{
char a[100],b[100];
int i,j,k;
printf("enter");
scanf("%d",&a);
int len=strlen(a);
for(i=0;i<len;i++)
{
    for(j=i+1;j<len;j++)
    {
        if(a[i]>a[j])
        {
            b[k]=a[i];
            a[i]=a[j];
            a[j]=b[k];
        }
    }
    
}
for(i=0;i<len;i++)
printf("%s",a[i]);
}
