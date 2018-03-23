#include <stdio.h>
void main() 
{
int n,array[30],i;
printf("\n Enter The Number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&array[i]);
}
for(i=1;i<=n;i++)
{
if(i!=array[i])
{
printf("\n%d",i);	
break;
}
}
getch();
}
