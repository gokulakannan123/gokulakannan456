#include <stdio.h>
void main() 
{
int i,n,k,array[20];
printf("\n Enter The Number");
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++)
{
scanf("%d",&array[i]);
}
for(i=1;i<=n;i++)
{
while(i==k)
{
printf("\n%d",array[i]);
break;
}
}
return 0;
}
