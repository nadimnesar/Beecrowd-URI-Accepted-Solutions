#include <stdio.h>
int main()
{
    long long int a[61];
    int i, n, F;
    a[0]=0;
    a[1]=1;
    for (i=2; i<61; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &F);
        printf("Fib(%d) = %lld\n", F, a[F]);
    }
    return 0;
}
