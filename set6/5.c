#include <stdio.h>
void main()
{
int a,b,c;
printf("\n Enter The Number1:");
scanf("%d",&a);
printf("\n Enter The Number2:");
scanf("%d",&b);
c=a*b;
if(c%2==0)
{
printf("\n The Number Is Even");
}
else
{
printf("\n The Number Is Odd");
}
return 0;
}
