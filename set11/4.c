#include <stdio.h>
void main() 
{
int n,k,i,result=1;
printf("\n Enter The integers:");
scanf("%d %d",&n,&k);
for(i=1;i<=k;i++)
{
result=result*n;	
}
printf("%d",result);
return 0;
}
