#include <stdio.h>
#include<string.h>
void main()
{
    int i,d;
    char s[90];
    scanf("%s",s);
    d=strlen(s);
    for(i=0;i<d;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            s[i]='+';
        }
    }
    for(i=d;i>=0;i--)
    {
        if(s[i]!='+')
        {
            printf("%c",s[i]);
        }
    }
}
