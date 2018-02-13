#include<stdio.h>
#include<string.h>
void main()
{
   char a[100];
   int len,i;
   printf("enter");
   scanf("%c",a);
   len=strlen(a);
   for(i=0;i<len;i++)
   {
       if(i%2==0)
           printf("%c",a[i]);
   }
       printf(" ");
       for(i=0;i<len;i++)
   {
       if(i%2!=0)
           printf("%c",a[i]);
   }
      
      
   }
