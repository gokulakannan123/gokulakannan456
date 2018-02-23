
#include <stdio.h>
void main()
{
char str[50];
int i,count=0;
printf("\n Enter The Numeric:");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
count=count+1;
}
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
count=count+1;
}
}
printf("\n The Number Of Numeric is:%d",count);
return 0;
}

