#include <stdio.h>
int main()
{
    int i, y, j=1;
    int n1, n2, inter=0, gremio=0, empates=0;
again:
        scanf("%d %d", &n1, &n2);
        if(n1>n2)
        {
            inter++;
        }
        else if (n1==n2)
        {
            empates++;
        }
        else
        {
            gremio++;
        }
novo:
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &y);
        if (y==1)
        {
            j++;
            goto again;
        }
        else if (y==2)
        {
            printf("%d grenais\n", j);
            printf("Inter:%d\n", inter);
            printf("Gremio:%d\n", gremio);
            printf("Empates:%d\n", empates);
            if (inter>gremio)
            {
                printf("Inter venceu mais\n");
            }
            else if (inter<gremio)
            {
                printf("Gremio venceu mais\n");
            }
            else printf("Não houve vencedor\n");
        }
        else
        {
            goto novo;
        }
    return 0;
}
