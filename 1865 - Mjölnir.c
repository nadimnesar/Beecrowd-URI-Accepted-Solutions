#include<stdio.h>
#include<string.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    char Avengers[6];
    while(n--)
    {
        scanf("%s %*d", Avengers);
        if(!strcmp(Avengers, "Hulk"))
        {
            printf("N\n");
        }
        else if(!strcmp(Avengers, "Tony"))
        {
            printf("N\n");
        }
        else if(!strcmp(Avengers, "Thor"))
        {
            printf("Y\n");
        }
        else if(!strcmp(Avengers, "Steve"))
        {
            printf("N\n");
        }
    }
    return 0;
}
