#include<stdio.h>
void main()
{
int n,rem,result;
printf("enter the number");
scanf("%d",&n);
if(n!=0)
{
rem=n%10;
result=result+rem*rem*rem;
n=10;
printf("The Number Is Armstrong");
}
else
{
printf(" The Number Is not  Armstrong ");
}
return 0;
}
