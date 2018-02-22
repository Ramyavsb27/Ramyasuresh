#include<stdio.h>
void main()
{
    int n,i,a[40];
    int sum=0;
    printf("Enter te number");
    scanf("%d",&n);
    printf("numbers are");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        for(i=0;i<=n;i++)
        {
          sum=sum+i;
        }
          printf("%d",sum);
          
    
}
