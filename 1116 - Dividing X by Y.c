#include <stdio.h>
int main()
{
    int i, N;
    scanf("%d", &N);
    for (i=1; i<=N; i++)
    {
        float x, y, d;
        scanf("%f %f", &x, &y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            d=x/y;
            printf("%.1f\n", d);
        }
    }
    return 0;
}
