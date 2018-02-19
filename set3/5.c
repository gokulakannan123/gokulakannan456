#include<stdio.h>
void main()
{
int i,j,n,a[15],temp;
printf(" \n Enter The Sie Of Array");
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
scanf("%d\t",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d",a[n/2]);
return 0;
}
