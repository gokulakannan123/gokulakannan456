#include <stdio.h>
void main()
{
int a,b,temp;
printf("\n Enter The Two Numbers To Swap:");
scanf("%d %d",&a,&b);
printf("\n Before Swapping:");
printf("\na=%d",a);
printf("\nb=%d",b);
temp=a;
a=b;
b=temp;
printf("\n After Swapping:");
printf("\na=%d",a);
printf("\nb=%d",b);
getch();
}
