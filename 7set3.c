#include<stdio.h>
void main()
{

    int i,count=0;
    char s[30];
    printf("enter the string");
    scanf("%c",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        count++;
    }
    
   printf("%d",count+1);
    
}
