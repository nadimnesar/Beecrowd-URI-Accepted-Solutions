#include <stdio.h>

int main()
{
    int i, n, j, sum=0;
    for (i=0; i<1000000; i++)
    {
again:
        scanf("%d", &n);
        if (n==0)
        {
            break;
        }
        if (n%2!=0)
        {
            for (j=n+1; j<=n+9; j=j+2)
            {

                sum=sum+j;
            }
            printf("%d\n", sum);
            n=0;
            sum=0;
            goto again;
        }
        else
        {
            for (j=n; j<=n+8; j=j+2)
            {

                sum=sum+j;
            }
            printf("%d\n", sum);
            n=0;
            sum=0;
            goto again;
        }
    }
    return 0;
}
