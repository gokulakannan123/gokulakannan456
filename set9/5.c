#include <stdio.h>
void main() 
{
char str[20];
int i,n;
printf("\n Enter The String:\n");
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(i%2==0)
{
printf("%c",str[i]);
}
}
printf(" ");
for(i=0;i<n;i++)
{
if(i%2==1)
{
printf("%c",str[i]);
}
}
return 0;
}
