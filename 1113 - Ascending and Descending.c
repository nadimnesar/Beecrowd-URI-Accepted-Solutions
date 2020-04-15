#include <stdio.h>
int main()
{
    int i;
    for (i=0; i<100; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a==b)
        {
            break;
        }
        else if(a<b)
        {
            printf("Crescente\n");
        }
        else printf("Decrescente\n");
    }
    return 0;
}
