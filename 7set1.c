#include<stdio.h>
#include<string.h>
void main()
{
    char s[30];
    int i=0,j=0;
    printf("enter the string");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        j=s[i+1];
    }
    for(j=0;j<s[i+1];j++)
    {
        printf("%c",s[i]);
    }
}
