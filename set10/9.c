#include <stdio.h>
int main(void) 
{
int a,b,c,mod;
printf("\n Enter The Number:");
scanf("%d %d %d",&a,&b,&c);
mod=((a*b)%c);
printf("\n%d",mod);
return 0;
}
