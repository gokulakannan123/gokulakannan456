#include<stdio.h>
int main()
{
int G,H,J;
printf(" \n Enter The Two Limits ");
scanf("%d%d",&G,&H);
for(J=G;J<H;J++)
{
if((J+1)%2==0)
printf("%d \n",J);
return 0;
}
}
