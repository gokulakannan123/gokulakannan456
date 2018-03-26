#include <stdio.h>
void main()
{
char str[50];
int i,n;
printf("\n Enter The Values:");
scanf("%s %d",str,&n);	
int len;
len=strlen(str);
for(i=n;i<=len;i++)
{
printf("%c",str[i]);
}
return 0;
}
