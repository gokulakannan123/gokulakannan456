#include <stdio.h>
void main()
{
int a,b,temp;
printf("\n enter two numbers to swap:");
scanf("%d %d",&a,&b);
printf("\n before swapping:");
printf("\na=%d",a);
printf("\nb=%d",b);
temp=a;
a=b;
b=temp;
printf("\n after swapping:");
printf("\na=%d",a);
printf("\nb=%d",b);
return 0;
}
