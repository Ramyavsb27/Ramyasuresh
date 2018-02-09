#include<stdio.h>
void main()
{
    int a,b,c,i,n,r;
    printf("enter the number");
    scanf("%d",&a);
    while(a>0)
    {
        n=a%10;
        a=a/10;
        r=n%2;
     if(r!=0)
    {
    printf("%d\t",n);
    }
   
   } 
}
