#include <stdio.h>
void main()
{
int x,y;
printf("\n Enter The Two Numbers To Swap:");
scanf("%d %d",&x,&y);
printf("\n Before Swapping:");
printf("\n x=%d",x);
printf("\n y=%d",y);
x=x+y;
x=x+y;
y=x-y;
x=x-y;
printf("\n After Swapping:");
printf("\n x=%d",x);
printf("\n y=%d",y);
return 0;
}
 
