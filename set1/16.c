#include <stdio.h>
int main()
{
int N, sums = 0, K, array[5];
scanf("%d", &N);
 for (K = 0; K < N; K++)
{
scanf("%d", &array[K]);
sums = sums + array[K];
}
printf("Sum = %d\n",sums);
return 0;
}
