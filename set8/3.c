#include<stdio.h>
void main()
{
int a,b,c;
printf("\n Enter The Number");
scanf("%d",&a);
printf("\n Enter the left and right range");
scanf("%d%d",&b,&c);
if(a>b && a<c)
{
printf("\n Yes");
}
else
{ 
printf("\n No");
} 
return 0;
}
