#include <stdio.h>
void main()
{
int n,remainder,product=1;
printf("\n Enter The Numbers:");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
product=product*remainder;
n=n/10;
}
printf("\n%d",product);
getch();
}
