#include <stdio.h>
void main()
{
char str[50];
int i,count=1;
printf(" \n Enter The Sentence:");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(!((str[i]>='0' && str[i]<='9')||(str[i]>='a' && str[i]<='z')))
{
count=count+1;
}
}
printf("\n The Number of special characters is:%d",count);
return 0;
}
