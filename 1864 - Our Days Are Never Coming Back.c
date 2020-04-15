#include<stdio.h>
#include<string.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    char a[35];
    strcpy(a, "LIFE IS NOT A PROBLEM TO BE SOLVED");
    for(i=0; i<n; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
