#include <stdio.h>
int main()
{
    int n, i, k=0;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        int j;
        for (j=1+k; j<=3+k; j++)
        {
            printf("%d ", j);
        }
        k=k+4;
        printf("PUM\n");
    }
}
