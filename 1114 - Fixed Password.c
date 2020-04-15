#include <stdio.h>
int main()
{
    int i;
    for (i=0; i<100; i++)
    {
        int a;
        scanf("%d", &a);
        if(a==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
