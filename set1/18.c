#include <stdio.h>
int main ()
{
long long k;
int count = 0;
printf ("Enter an integer");
scanf ("%d", &k);
while(k != 0)
{
k /= 10;
++count;
}
printf ("Number of digits: %d", count);
return 0;
}
