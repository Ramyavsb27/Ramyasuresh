#include<stdio.h>
#include<string.h>
int main()
{
    char s[300];
    int a,i;
    printf("enter the strimg");
    scanf("%s",s);
    a=strlen(s);
    for(i=0;s[i]<a;i++)
    {
        if(s[i]>='0' && s[i]<='9');
        {
        printf("%c",s[i]);    
        }
    }
    return 0;
}
