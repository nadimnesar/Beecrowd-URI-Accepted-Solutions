#include <stdio.h>

int main()
{
    double s=0, j, i;
    for (i=1, j=1; i<39, j<1048576; i=i+2, j=j*2)
    {
        s=(s+(i/j));
    }
    printf("%.2lf\n", s);
    return 0;
}
