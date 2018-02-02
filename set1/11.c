#include <stdio.h>
int main()
{
int g,d,sum = 0;
printf("Enter a positive integer: ");
scanf("%d",&d);
for(g=1; g<=d; ++d)
{
sum += g;  
}
printf("Sum = %d",sum);
return 0;
}
