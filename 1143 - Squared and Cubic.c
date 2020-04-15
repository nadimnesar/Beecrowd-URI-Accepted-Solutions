#include <stdio.h>
int main()
{
    int n, i, k=0;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf("%d ", i);
        printf("%d ", i*i);
        printf("%d", i*i*i);
        printf("\n");
    }
}
