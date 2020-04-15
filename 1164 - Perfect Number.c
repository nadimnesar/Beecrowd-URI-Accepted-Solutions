#include <stdio.h>

int main()
{
    int n, i, sum=0, p, j;
    scanf("%d", &n);
    for (j=1; j<=n; j++)
    {
        scanf("%d", &p);
        for (i=1; i<p; i++)
        {
            if (((p%i)==0))
            {
                sum=sum+i;
            }
        }
        if (sum==p)
        {
            printf("%d eh perfeito\n", p);
        }
        else
        {
            printf("%d nao eh perfeito\n", p);
        }
        sum=0;
    }
    return 0;
}
