#include <stdio.h>
int main()
{
    int x, z, i, a=0, sum;
    scanf("%d", &x);
    again:
    scanf("%d", &z);
    if (z<=x)
    {
        goto again;
    }
    for (i=x; i<100000000; i++)
    {
        x=x+i;
        a++;
        if (x>z)
        {
            break;
        }
    }
    printf("%d\n", a+1);
    return 0;
}
