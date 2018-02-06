#include<stdio.h>
void main()
{
    char s[30];
    int i,len;
    printf("enter the string");
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        printf("yes");
     else
        printf("no vowel");
    }
}
