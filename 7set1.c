#include<stdio.h>
#include<string.h>
void main()
{
    char s[30];
    int i,n;
    printf("enter the string");
    gets(s);
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%c",s[i]);
    }
}
