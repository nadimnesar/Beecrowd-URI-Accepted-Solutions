#include <stdio.h>
int main()
{
    int n1, n2, n3, i, j, a;
    scanf("%d %d", &n1, &n2);
    n3=n1;
    for (i=1; i<=n2; i++)
    {
        a++;
        if (n1==a)
        {
            printf("%d", i);
        }
        else
            printf("%d ", i);
        if (i==n1)
        {
            printf("\n");
            n1=n1+n3;
        }
    }
}
