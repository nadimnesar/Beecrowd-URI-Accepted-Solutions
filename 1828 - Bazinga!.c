#include <stdio.h>
#include <string.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        char a[10], b[10];
        scanf("%s %s",&a, &b);
        if(strcmp(a, b)==0)
            printf("Caso #%d: De novo!\n", i);
        else if(!strcmp(a, "tesoura") && !strcmp(b, "papel"))
            printf("Caso #%d: Bazinga!\n", i);
        else if(!strcmp(a, "papel") && !strcmp(b, "pedra"))
            printf("Caso #%d: Bazinga!\n", i);
        else if(!strcmp(a, "pedra") && !strcmp(b, "lagarto"))
            printf("Caso #%d: Bazinga!\n", i);
        else if(!strcmp(a, "lagarto") && !strcmp(b, "Spock"))
            printf("Caso #%d: Bazinga!\n", i);
        else if(!strcmp(a, "Spock") && !strcmp(b, "tesoura"))
            printf("Caso #%d: Bazinga!\n", i);
        else if(!strcmp(a, "tesoura") && !strcmp(b, "lagarto"))
            printf("Caso #%d: Bazinga!\n", i);
        else if(!strcmp(a, "lagarto") && !strcmp(b, "papel"))
            printf("Caso #%d: Bazinga!\n", i);
        else if(!strcmp(a, "papel") && !strcmp(b, "Spock"))
            printf("Caso #%d: Bazinga!\n", i);
        else if(!strcmp(a, "Spock") && !strcmp(b, "pedra"))
            printf("Caso #%d: Bazinga!\n", i);
        else if(!strcmp(a, "pedra") && !strcmp(b, "tesoura"))
            printf("Caso #%d: Bazinga!\n", i);
        else
            printf("Caso #%d: Raj trapaceou!\n", i);
    }
    return 0;
}
