#include<stdio.h>
void main()
{
int num,i,flag=0;
printf("\n Enter The Number      ");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\n prime");
}
else
{
printf("\n not a prime number");
}
getch();
}
