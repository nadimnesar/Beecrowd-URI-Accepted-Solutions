#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        char s1[7], s2[7];
        scanf("%s", s1);
        scanf("%s", s2);
        if(!strcmp(s1, "ataque") && !strcmp(s2, "pedra"))
        {
            printf("Jogador 1 venceu\n");
        }
        else if(!strcmp(s1, "pedra") && !strcmp(s2, "ataque"))
        {
            printf("Jogador 2 venceu\n");
        }
        else if(!strcmp(s1, "pedra") && !strcmp(s2, "papel"))
        {
            printf("Jogador 1 venceu\n");
        }
        else if(!strcmp(s1, "papel") && !strcmp(s2, "pedra"))
        {
            printf("Jogador 2 venceu\n");
        }
        else if(!strcmp(s1, "papel") && !strcmp(s2, "ataque"))
        {
            printf("Jogador 2 venceu\n");
        }
        else if(!strcmp(s1, "ataque") && !strcmp(s2, "papel"))
        {
            printf("Jogador 1 venceu\n");
        }
        else if(!strcmp(s1, "papel") && !strcmp(s2, "papel"))
        {
            printf("Ambos venceram\n");
        }
        else if(!strcmp(s1, "pedra") && !strcmp(s2, "pedra"))
        {
            printf("Sem ganhador\n");
        }
        else if(!strcmp(s1, "ataque") && !strcmp(s2, "ataque"))
        {
            printf("Aniquilacao mutua\n");
        }
    }
}
