#include <stdio.h>
void main()
{
int a,b,c;
printf("\n Enter the numbers:");
scanf("%d%d",&a,&b);
c=a-b;
if(c%2==0)
{
printf("\n Even");
}
else
{
printf("\n Odd");
}
getch();
}
