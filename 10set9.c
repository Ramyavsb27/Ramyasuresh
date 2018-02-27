#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter numbers");
    scanf("%d%d%d",&a,&b,&c);
    int d=((a*b)%c);
    printf("%d",d);
    
}
