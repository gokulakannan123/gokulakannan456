#include<stdio.h>
int main()
{
int g=3,h=0,g1;
while(g!=0)
{
g1=g%10;
h+=g1;
g/=10;
}
printf("%d",h);
return 0;
}
