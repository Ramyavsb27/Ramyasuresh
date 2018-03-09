#include<stdio.h>
#include<string.h>
void main()
{
    char s[90];
    int d,i;
    d=strlen(s);
    scanf("%[^\n]",s);
    if(s[0]>91)
    {
        
        s[0]=s[0]-32;
    }
    for(i=0;i<d;i++)
    {
        if(s[i]==' ')
        {
            if(s[i+1]>91)
            {
                s[i+1]=s[i+1]-32;
            }
        }
    }
printf("%s",s);
}
