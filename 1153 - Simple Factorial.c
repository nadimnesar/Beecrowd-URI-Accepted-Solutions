#include <stdio.h>

int main()
{
    int N, i, F=0, X=0;
    scanf("%d", &N);
    int a[14];
    a[0]=N;
    for (i=1; i<N; i++)
    {
        a[i]=(N-i);
    }
    for (i=0; i<N; i++)
    {
        X=a[i]*a[i+1];
        a[i+1]=X;
    }
    printf("%d\n", a[N-1]);
    return 0;
}
