#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,d;
    char str[30];
    printf("enter");
    scanf("%s %d",str,&n);
    d=strlen(str);
   for(i=n;i<=d;i++)
   {
       printf("%c",str[i+1]);
   }
}
