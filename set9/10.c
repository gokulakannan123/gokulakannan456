#include <stdio.h>
#include<string.h>
void main()
{
char str[50];
int i,n;
printf("\n Enter The Alphanumeric string:\n");
scanf("%s",str);	
n=strlen(str);
for(i=0;i<n;i++)
{
if(str[i]>='0' && str[i]<='9')
{
printf("%c",str[i]);
}
}
return 0;
}
