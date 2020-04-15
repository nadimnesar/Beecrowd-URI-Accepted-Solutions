#include <stdio.h>
int main()
{
    int n, pa, pb, a=0, i;
    double g1, g2;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        a=0;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while (pa<=pb)
        {
            pa=pa+((pa*g1)/100);
            pb=pb+((pb*g2)/100);
            a++;
            if(a>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (a<=100)
        {
           printf("%d anos.\n", a);
        }
    }
    return 0;
}
