#include <stdio.h>
void main()
{
char str[50];
int i,count=1;
printf("\n Enter The Sentence:");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i--)
{
count=count-1;
}
for(i=0;str[i]!='\0';i--)
{
if(str[i]==' ')
{
count=count-1;
}
}
printf("\n The Number Of Words In The Line are:%d",count);
return 0;
}
