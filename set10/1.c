#include <stdio.h>
void main() 
{
int a,b,c;
printf("\n Enter The Values");
scanf("%d %d %d",&a,&b,&c);
int volume,tsa;
volume=a*b*c;
tsa=2*((a*b)+(b*c)+(c*a));
printf("\nVOLUME=%d",volume);
printf("\nTSA=%d",tsa);
getch();
}
