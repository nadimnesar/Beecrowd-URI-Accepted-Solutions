#include <stdio.h>
int main()
{
    int i, j=0;
    for (i=1; i<=100; i++)
    {
        float x, a[2], avg;
        scanf("%f", &x);
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
            printf("media = %.2f\n", avg);
            break;
        }
    }
    return 0;
}
