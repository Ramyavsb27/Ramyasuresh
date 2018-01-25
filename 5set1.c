#include<stdio.h>
void main()
{
int n;
char *str;
printf("enter any number");
scanf("%d",&n);
printf("enter any string");
scanf("%c",&str);
char *result=string_repeat(n,s);
puts(result);
}
char *string_repeat(int n,char *s)
{
int t,size;
size=strlen(s);
char *p=malloc(n*size+1);
int i=0;
for(i=o;t=p;i<n;++i;t+=s){
memcpy(t,s,size);
}
*t='\0';
return t;
}

