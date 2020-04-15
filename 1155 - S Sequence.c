#include <stdio.h>

void main()
{
    int i;
    double s=0;
    for (i=1; i<=100; i++)
    {
        s=s+(double)1/i;
    }
    printf("%.2lf\n", s);
    return 0;
}
