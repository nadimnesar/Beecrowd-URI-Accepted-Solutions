#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        int j, x, y, sum=0, z=0;
        scanf("%d %d", &x, &y);
        if (x%2==0)
        {
            x=x+1;
        }
        for (j=x; j<1000000; j=j+2)
        {
            sum=sum+j;
            z++;
            if (z==y)
            {
                break;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
