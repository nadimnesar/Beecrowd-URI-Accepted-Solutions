#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf("%d ", i);
        printf("%d ", i*i);
        printf("%d", i*i*i);
        printf("\n");
        printf("%d ", i);
        printf("%d ", (i*i)+1);
        printf("%d", (i*i*i)+1);
        printf("\n");
    }
}
