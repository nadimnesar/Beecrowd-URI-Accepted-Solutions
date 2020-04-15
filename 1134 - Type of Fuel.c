#include <stdio.h>
int main()
{
    int i, n, alcool=0, gasolina=0, diesel=0;
    for (i=1; i<=10000000; i++)
    {
again:
        scanf("%d", &n);
        if(n>=1&&n<=4)
        {
            if (n==1)
            {
                alcool++;
            }
            else if (n==2)
            {
                gasolina++;
            }
            else if (n==3)
            {
                diesel++;
            }
            else if (n==4)
            {
                printf("MUITO OBRIGADO\n");
                printf("Alcool: %d\n", alcool);
                printf("Gasolina: %d\n", gasolina);
                printf("Diesel: %d\n", diesel);
                break;
            }
        }
        else
        {
            goto again;
        }
    }
    return 0;
}
