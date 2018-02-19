#include <stdio.h>
void main()
{
int min,hrs,mins,secs=00;
printf(" \n Enter The Time In Minutes:");
scanf("%d",&min);
hrs=min/60;
mins=min%60;
if(mins>60)
{
secs=mins%60;
hrs=hrs-mins;
}
printf("%d %d %d",hrs,mins,secs);
return 0;
}
