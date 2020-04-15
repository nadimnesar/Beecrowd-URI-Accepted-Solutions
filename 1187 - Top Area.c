#include <stdio.h>
int main()
{
    int i, j, k=1, z=11;
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
    for (i=0; i<5; i++)
    {
        for (j=k; j<z; j++)
        {
            sum=sum+a[i][j];
        }
        k++;
        z--;
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
