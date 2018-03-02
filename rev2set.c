#include <stdio.h>
#include <string.h>
void main()
{
    char s[900];
    int i;
    printf("enter");
    scanf("%s",s);
    int len=strlen(s);
    for(i=len;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
