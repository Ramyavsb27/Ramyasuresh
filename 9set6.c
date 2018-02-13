#include<stdio.h>
#include<string.h>
void main()
{
   char a[100];
   int len,i,c=0;
   printf("enter");
   scanf("%c",a);
   len=strlen(a);
   for(i=0;i<len;i+=2)
   {
     if(a[i]==a[i+1])
     {
     c++;
     }
   }
   if(c>0)
   {
       printf("no");
   }
   else
   {
       printf("yes");
   }
}
