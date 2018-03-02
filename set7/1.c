#include<stdio.h>
void main()
{
    char str[20];
    int a,b;
    printf("\n Enter the string and a value:");
    scanf("%s %d",str,&a);
    for(b=0;b<a;b++)
    {
        printf("\n%c",str[b]);
    }
    return 0;
}
