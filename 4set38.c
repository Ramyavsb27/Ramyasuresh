#include<stdio.h>
void main()
{
int i=150;
int j=160;
printf("before swapping %d %d" i,j);
i=i^j;
j=i^j;
i=i^j;
printf("after swapping %d %D" i,j);
}
