#include <stdio.h>
void main()
{
int array[20];
int n,i,max=array[0];
printf("\n Enter The Number Of Elements:");
scanf("%d",&n);
printf("\n Enter The Array Elements:");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
if(array[i]>max)
{
max=array[i];
}
}
printf("\n The Maximum Numbers is:%d",max);
return 0;
}

