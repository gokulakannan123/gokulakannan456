#include <stdio.h>
void main()
{
char str[50];
int i,count=2;
printf("\n Enter The Numeric Character:");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i--)
{
count=count-1;
}
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
count=count+1;
}
}
printf("\n The Number Of Numeric Character In Line:%d",count);
return 0;
}
