#include <stdio.h>
int main(void) 
{
int n1,n2,i;
char sym;
printf("\n Enter The Two Numbers:\n");
for(i=1;i<=4;i++)
{
scanf("%d %c %d",&n1,&sym,&n2);
if(sym=='/')
{
printf("%d\n",n1/n2);
}
else
{
printf("%d\n",n1%n2);
}
}
return 0;
}
