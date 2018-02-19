#include<stdio.h>
int main()
{
int g,re=0;
printf(" \n Enter The Number");
scanf("%d",&g);
while(g!=0)
{
re=re*10;
re=re+g%10;
g=g/10;
}
printf(" \n The Reverse Number",re);
return 0;
}
