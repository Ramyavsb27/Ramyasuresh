#include<stdio.h>
#include<string.h>
void main()
{
   int i,j,n;
   char str[25][25],temp[25];
   printf("enter tne no of string");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
      gets(str[i]);
   for(i=0;i<=n;i++)
      for(j=i+1;j<=n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf(" Sorted Strings");
   for(i=0;i<=n;i++)
      puts(str[i]);
   
}
