#include <stdio.h>
int main() 
{
int a[10];
int i;
int greatest;
printf("\n Enter Ten values:");
for (i = 0; i < 10; i++) 
{
scanf("%d", &a[i]);
}
greatest = a[0];
for (i = 0; i < 10; i++)
{
if (a[i] > greatest) 
{
greatest = a[i];
}
}
printf("\n Greatest Of Ten Numbers is %d", greatest);
getch();
}
