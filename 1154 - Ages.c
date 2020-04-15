#include <stdio.h>

int main()
{
    int N, X=0, a=0, i;
    float Y;
    for (i=0; i<10000000000; i++)
    {
    again:
    scanf("%d", &N);
    if (N>0)
    {
        a++;
        X=X+N;
        goto again;
    }
    else break;
    }
    Y=(float)X/a;
    printf("%.2f\n", Y);
    return 0;
}
