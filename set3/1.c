#include<stdio.h>
int main()
{
int s,c,d,l;
float ap;
printf("enter the values for s,c,d:");
scanf("%d%d%d",&s,&c,&d);
l=c+((s-1)*d);
ap=(s/2)*(c+1);
printf("the value is :",ap);
return 0;
}
