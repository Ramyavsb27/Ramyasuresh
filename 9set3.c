#include <stdio.h>
int main() 
{	
   int x,y,i;
   char w;
   for(i=0;i<4;i++)
   {
       scanf("%d %c %d",&x,&w,&y);
       if(i%2==0)
       {
           printf("%d\n",(x/y));
       }
       else
       {
           printf("%d\n",(x%y));
       }
   }return 0;
}
