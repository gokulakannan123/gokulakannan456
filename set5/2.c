#include <stdio.h>
#include<string.h>
void main()
{
char str1[50],str2[50];
int n1,n2;
printf(" \n Enter The String1:");
scanf("%s",str1);
printf(" \n Enter The String2:");
scanf("%s",str2);
n1=strlen(str1);
n2=strlen(str2);
if(n1>n2)
{
printf("\n%s",str1);
}
else if(n2>n1)
{
printf("\n%s",str2);
}
else
{
printf("\n %s",str2);
}
getch(0);
}
