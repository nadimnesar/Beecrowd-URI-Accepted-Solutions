#include<stdio.h>
void main()
{
    int i, n, p, j, k=0;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &p);
        for (j=2; j<=p; j++)
        {
            if (j!=p)
            {
                if ((p%j)==0)
                {
                    k=1;
                    break;
                }
                else
                {
                    k=2;
                }
            }
        }
        if (k==1||p==1)
        {
            printf("%d nao eh primo\n", p);
        }
        else if (k==2||p==2)
        {
            printf("%d eh primo\n", p);
        }
    }
}
