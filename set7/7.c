#include<stdio.h>
void main()
{
    int g;
    printf("\n Enter The Number");
    scanf("%d",&g);
    g+=1;
    while(g%10!=0)
    {
        g=g+1;
    }
    printf("\n%d",g);
    getch();
}
