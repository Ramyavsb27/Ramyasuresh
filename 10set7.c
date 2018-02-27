#include <stdio.h>
void main()
{
    int n,r = 0,p;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        p = n%10;
        r = r*10 +p;
        n = n/10;
    }
    printf("Reversed Number = %d", r);
}
