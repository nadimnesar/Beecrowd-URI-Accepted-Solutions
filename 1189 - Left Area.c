#include <stdio.h>
int main()
{
    int i, j, k, z=0, p=4;
    double a[12][12], sum=0.0;
    char o[2];
    scanf("%s", &o);
    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    for (i=1; i<11; i++)
    {
        if(i<=5)
        {
            for (j=0; j<=z; j++)
            {
                sum=sum+a[i][j];
            }
            z++;
        }
        else if(i>=6)
        {
            for (j=0; j<=p; j++)
            {
                sum=sum+a[i][j];
            }
            p--;
        }
    }
    if(o[0]=='S')
    {
        printf("%.1lf\n", sum);
    }
    else if (o[0]=='M')
    {
        sum=sum/30.0;
        printf("%.1lf\n", sum);
    }
    return 0;
}
