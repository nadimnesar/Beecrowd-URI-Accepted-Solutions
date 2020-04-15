#include <stdio.h>

int main()
{
    int N, i, z=1, x=0, a=0;
    scanf("%d", &N);
    printf("0 1");
    for (i=1; i<100000000000; i=i+z)
    {
        a++;
        if (a==N-1)
        {
            break;
        }
        if(i>2)
        {
            z=x;
        }
        printf(" %d", i);
        x=i;
    }
    printf("\n");
    return 0;
}
