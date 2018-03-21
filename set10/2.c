#include <stdio.h>
void main()
{	
int n,array[50],i,sum=0;
printf("\n Enter The Numbers");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
sum=sum+array[i];
}
printf("\n%d",sum);
return 0;
}
