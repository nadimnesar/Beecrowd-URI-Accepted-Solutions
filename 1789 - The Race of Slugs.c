#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n)!= EOF)
    {
        int i, a[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        int max;
        max=a[0];
        for (i=1; i<n; i++)
        {
            if (a[i]>max)
            {
                max=a[i];
            }
        }
        if(max<10)
        {
            printf("1\n");
        }
        else if(max>=10&&max<20)
        {
            printf("2\n");
        }
        else if(max>=20)
        {
            printf("3\n");
        }
    }
    return 0;
}
