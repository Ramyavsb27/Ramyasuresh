#include<iostream>
using namespace std;
int isNumericString(unsigned char *num)
{
int i=0;
while(*(num+i))
if(*(num+i)>='0'&&(*num+i)<='9')
i++;
else 
return 0;
}
return 1;
}
int main()
{
int r=0;
unsigned char str[]="123";
r=isNumericString(str);
if(r)
cout<<"it is numeric"<<;
else
cout<<"no"<<;
return 0;
}

