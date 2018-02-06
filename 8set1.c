#include<stdio.h>
#include<string.h>
void main()
{
    char s[30];
    int i,n,len,flag=0;
    printf("enter the string");
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]!=s[len-i-1])
        {
        flag=1;
        break;
        }
    }
    if(flag)
    {
        printf("palindronme");
    }
    else
    {
        printf("no");
    }
    
}
