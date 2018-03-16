#include <stdio.h>
void main()
{
int x,y,remainder,gcd;
printf("\n Enter The First Number:");
scanf("%d",&x);
printf("\n Enter The Second Number:");
scanf("%d",&y);
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}while(remainder!=0);
gcd=y;
printf("\n The GCD Of The Given Number is: %d",gcd);
return 0;
}
