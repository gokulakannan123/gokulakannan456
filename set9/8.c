#include <stdio.h>
void main()
{
int x,y,remainder,lcm,gcd,a,b;
printf("\n Enter The First Number:");
scanf("%d",&x);
printf("\n Enter The Second Number:");
scanf("%d",&y);
a=x;
b=y;
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}while(remainder!=0);
gcd=y;
lcm=(a*b)/gcd;
printf("\n The LCM Of The Given Number Is: %d",lcm);
return 0;
}
