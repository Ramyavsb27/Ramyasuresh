#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int len;
printf("enter the string");
gets(str);
len=strlen(str);
printf("no.of characters in the string %d",len);
}
