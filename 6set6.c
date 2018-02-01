#include<stdio.h>
void main()
{
char s[50];
int n,i;
printf("enter the strinng");
printf("\nemter elements");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s",&s[i]);
while(s[i]!='/0')
{
if((s[i]>='a'&&s[i]<='z')&&(s[i]>='0'&&s[i]<='9'))
{
printf("yes");
}
else
{
printf("no");
}}
}
