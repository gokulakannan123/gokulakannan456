#include<stdio.h>
#include<string.h>
void main()
{
char str[50],temp[10];
int i,j,n,k;
printf("\n Enter the string");
scanf("%s",str);
n=strlen(str);
while(i<j)
{ 
for(i=0;i<n;i++)
{
for(j=n;j>=1;j--)
{
temp[k]=str[i];
str[i]=str[j];
str[j]=str[i];
}
}
}
printf("\n Yes");
return 0;
}


