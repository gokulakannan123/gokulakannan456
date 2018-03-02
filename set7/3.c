#include <stdio.h>
void main()
{
char str[50];
int i,count=1;
printf("\n Enter the sentence:");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
count=count+1;
}
}
printf("\n Number Of Words In Line =%d",count);
return 0;
}
