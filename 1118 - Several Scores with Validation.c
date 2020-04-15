#include <stdio.h>
int main()
{
    int i, j=0, y;
    double x, a[2], avg;
    for (i=1; i<=100000; i++)
    {
again:
        scanf("%lf", &x);
        if((x>=0&&x<=10))
        {
            a[j]=x;
            j++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if (j==2)
        {
            avg=(a[0]+a[1])/2.00;
            printf("media = %.2lf\n", avg);
novo:
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &y);
            if (y==1)
            {
                j=0;
                goto again;
            }
            else if (y==2)
            {
                break;
            }
            else
            {
                goto novo;
            }
        }
    }
    return 0;
}
