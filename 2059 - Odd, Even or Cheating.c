#include <stdio.h>

int main()
{
    int i, n[5], sum=0;
    for(i=0; i<5; i++)
    {
        scanf("%d", &n[i]);
    }
    if(n[0]==1)
    {
        sum=n[1]+n[2];
        if(n[3]==0&&n[4]==0)
        {
            if(sum%2==0)
            {
                printf("Jogador 1 ganha!\n");
            }
            else if(sum%2!=0)
            {
                printf("Jogador 2 ganha!\n");
            }
        }
        if(n[3]==1&&n[4]==0)
        {
            printf("Jogador 1 ganha!\n");
        }
        if(n[3]==1&&n[4]==1)
        {
            printf("Jogador 2 ganha!\n");
        }
        if(n[3]==0&&n[4]==1)
        {
            if(sum%2==0)
            {
                printf("Jogador 1 ganha!\n");
            }
            else if(sum%2!=0)
            {
                printf("Jogador 2 ganha!\n");
            }
        }
    }
    else if(n[0]==0)
    {
        sum=n[1]+n[2];
        if(n[3]==0&&n[4]==0)
        {
            if(sum%2==0)
            {
                printf("Jogador 2 ganha!\n");
            }
            else if(sum%2!=0)
            {
                printf("Jogador 1 ganha!\n");
            }
        }
        if(n[3]==1&&n[4]==0)
        {
            printf("Jogador 1 ganha!\n");
        }
        if(n[3]==1&&n[4]==1)
        {
            printf("Jogador 2 ganha!\n");
        }
        if(n[3]==0&&n[4]==1)
        {
            if(sum%2==0)
            {
                printf("Jogador 2 ganha!\n");
            }
            else if(sum%2!=0)
            {
                printf("Jogador 1 ganha!\n");
            }
        }
    }
    return 0;
}
