#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n], i, mini, location=0;
    for (i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
    mini=x[0];
    for (i=1; i<n; i++)
    {
        if (x[i]<mini)
        {
            mini=x[i];
            location=i;
        }
    }
    printf("Menor valor: %d\n", mini);
    printf("Posicao: %d\n", location);
    return 0;
}
