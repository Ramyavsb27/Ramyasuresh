#include<stdio.h>
void main()
{
    int n,k,i,a[2000];
    printf("Enter twwo number");
    scanf("%d %d",&n,&k);
    printf("numbers are");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
     for(i=0;i<n;i++)
     {
         if(i==k)
         {
         printf("yes");
         }
     }
}
