#include <stdio.h>
int main()
{
    int i;
    double N[100], x, y, z;
    scanf ("%lf", &x);
    for(i=0, y=x; i<100; i++, y=y/2.0000)
    {
        N[i]=y;
    }
    for (i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
    return 0;
}
