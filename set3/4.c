#include<stdio.h>
int main()
{
int a[10],b,c,d;
scanf("%d",&n);
for(b=0;b<n;b++)
{
scanf("%d",&a[b]);
}
for(b=0;b<n-1;b++)
{
for(c=b+1;c<n;c++)
{
if(a[b]>a[c])
{
d=a[b];
a[b]=a[c];
a[c]=d;
}
}
}
printf("%d",a[b]);
return 0;
}
