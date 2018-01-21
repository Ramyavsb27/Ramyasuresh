#include<stdio.h>
void main()
{
char ch;
int lcount=0;
while(ch=getc(stdin)!=EOF)
{
if(ch=='\n')
++lcount;
}
printf("no.of lines are %d",lcount);
}
